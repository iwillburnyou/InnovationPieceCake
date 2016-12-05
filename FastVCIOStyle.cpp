
#include<vector>
#include<cstdio>
#include<string>
#include <Eigen/Core>
#include<map>
class FastIO{
public:
	static FILE * pf;
	template<typename _Scalar, int _Rows, int _Cols>
	static	void WriteEigenMat(Eigen::Matrix<_Scalar, _Rows, _Cols> &mat);
	template<typename _Scalar, int _Rows, int _Cols>
	static void ReadEigenMat(Eigen::Matrix<_Scalar, _Rows, _Cols> &);

	static void WriteString(std::string & str){
		int n = str.size();
		fwrite(&n, sizeof(n), 1, pf);

		fwrite(str.data(), sizeof(char), n, pf);

	}
	static void ReadString(std::string & str){
		int n;
		fread_s(&n, sizeof(n), sizeof(n), 1, pf);
		if (n >=0)
		str.resize(n);
		fread_s((void*)str.data(),1*n, 1, n, pf);
	}
	bool Checkpf(){
		if (pf != nullptr)
			return true;
		else
		{
			return false;
		}
	}

	template<typename T>
	static void WriteStdVector(std::vector<T> & vec){

		int n = vec.size();
		fwrite(&n, sizeof(n), 1, pf);

		fwrite(vec.data(), sizeof(T), n, pf);

	}

	template<typename T>
	static void ReadStdVector(std::vector<T> & vec){

		int n;
		fread_s(&n, sizeof(n), sizeof(n), 1, pf);
		if (n >= 0)
			vec.resize(n);
		fread_s((void*)vec.data(), sizeof(T) * n, sizeof(T), n, pf);

	}

	template<typename T>
	static void WriteStdVector(std::vector<std::vector<T>> & vec){

		int n = vec.size();
		fwrite(&n, sizeof(n), 1, pf);
		for (int i = 0; i < n; i++){
			WriteStdVector(vec[i]);
		}
		
	}

	template<typename T>
	static void ReadStdVector(std::vector<std::vector<T>> & vec){

		int n;
		fread_s(&n, sizeof(n), sizeof(n), 1, pf);
		if (n >= 0)
			vec.resize(n);

		for (int i = 0; i < n; i++){
			ReadStdVector(vec[i]);
		}
		

	}


	template<typename T>
	static void WriteObject(T & obj){

	
		fwrite(&obj, sizeof(T), 1, pf);

	}

	template<typename T>
	static void ReadObject(T & obj){

		fread_s(&obj, sizeof(T), sizeof(T), 1, pf);

	}
};



FILE * FastIO::pf = nullptr;
template<typename _Scalar, int _Rows, int _Cols>
void FastIO::WriteEigenMat(Eigen::Matrix<_Scalar,_Rows,_Cols> &mat){

	int r = mat.rows(), c = mat.cols();
	fwrite(&r, sizeof(r), 1, pf);
	fwrite(&c, sizeof(c), 1, pf);
	fwrite(mat.data(), sizeof(_Scalar), mat.size(), pf);


}
template<typename _Scalar, int _Rows, int _Cols>
void FastIO::ReadEigenMat(Eigen::Matrix<_Scalar, _Rows, _Cols>& mat){

	int r, c;
	fread_s(&r, sizeof(r), sizeof(r), 1, pf);
	fread_s(&c, sizeof(r),sizeof(c), 1, pf);
	if (mat.cols() != c || mat.rows() != r)
		mat.resize(r, c);
	fread_s(mat.data(), sizeof(_Scalar)*mat.size(), sizeof(_Scalar), mat.size(), pf);
}

