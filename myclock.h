#pragma once
//#define PERFORMANCECOUT

#include<string>
#include<iostream>
#include<time.h>
#include<Windows.h>

using std::string;
using std::cout;
using std::endl;

class MyClock {


	public:
		MyClock(string & str,bool UsePerformance) {
			isUsePerformanceCounter = UsePerformance;
			if (UsePerformance) {

				QueryPerformanceFrequency(&m_liPerfFreq);
				QueryPerformanceCounter(&m_liPerfStart);
			}
			else
			{
				ClockStart = clock();
			}
			message = str;

			
		}
		MyClock(const char * str, bool UsePerformance) {
			isUsePerformanceCounter = UsePerformance;
			if (UsePerformance) {

				QueryPerformanceFrequency(&m_liPerfFreq);
				QueryPerformanceCounter(&m_liPerfStart);
			}
			else
			{
				ClockStart = clock();
			}
			message = str;


		}

		MyClock(string & str) {
			ClockStart = clock();
			isUsePerformanceCounter = false;
			message = str;
		}

		MyClock(const char * pc) {
			ClockStart = clock();
			isUsePerformanceCounter = false;
			message = pc;
		}
		int StopTheClock(bool isPrint = true) {


			if (isUsePerformanceCounter) {
				QueryPerformanceCounter(&liPerfNow);
				int time = (((liPerfNow.QuadPart - m_liPerfStart.QuadPart) * 1000) / m_liPerfFreq.QuadPart);
				if (isPrint)
					cout << message << " run time: " << time << " millisecond" << endl;
				MSTime = time;
			}
			else
			{
				
				ClockEnd = clock();
				MSTime = (int)(ClockEnd - ClockStart);
				if (isPrint)
					cout << message << " run time: " << (double)(ClockEnd - ClockStart)/CLOCKS_PER_SEC << "s" << endl;
			}

		
			return 0;
		}
		~MyClock(){

		}
		int MSTime;
		LARGE_INTEGER m_liPerfFreq;
		LARGE_INTEGER m_liPerfStart;
			LARGE_INTEGER liPerfNow;

		bool isUsePerformanceCounter;
		string message;
		clock_t ClockStart, ClockEnd;
};
