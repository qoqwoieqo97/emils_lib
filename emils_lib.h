#pragma once
#include <iostream>

#define LOG(x) std::cout<<x<<std::endl;
#define LO(x) std::cout<<x;
#define rev(x) x=!x;
#define STOP while(true);

template<class T> void operator+=(T & a, T & b);
template<class T> void operator-=(T& a, T& b);
template<class T> bool operator!=(T a, T b);

namespace el {
	namespace Classic {
		template <class T> int getNumberOfElements(T* c);
		template <class T> inline void swap(T& a, T& b);
		template<class ARRAYTYPE> bool control(ARRAYTYPE array[], int& counter);
	}
	namespace StrCalc {
		int glos(std::string str);
		bool isContains(std::string string, std::string wllSearch);
		int whereContains(std::string string, std::string wllSearch);
		int howManyContains(std::string string, char c);
		int getThats(std::string string, char a, int place);
		std::string getBetweenThat(std::string string, int p1, int p2);
		std::vector<std::string> split(std::string str, char c);
		std::string subtract(std::string str, std::string wllSubtract);
		void pFor100(std::string urArray[100]);
		std::string getN(std::string a, int place, int n);
		int toInteger(char c);
		bool isThisInt(std::string str);
		std::string reverse(std::string str);
		int toInteger(std::string str);
	}
	namespace Strings {
		template<int numberOfStrings> struct arrayString { std::string a[numberOfStrings]; };
		template<int length> arrayString<length> split(std::string wllSplit, char c);
		int getSplitting(std::string wllSplit, char c, int length);
	}
	namespace Math {
		int factorial(int a);
		template <typename T> T absoluteValue(T a);
		inline float hypotenuse(float a, float b);
		template <typename T> int getNepos(T a);
		float permutation(float a, float b);
		float combination(float a, float b);
		template <typename T> T getBigger(T a, T b);
	}
	namespace Vectors {
		typedef float Vector1;
		struct Vector2 { float x, y; };
		struct Vector3 { float x, y, z; };
		Vector2 get(float x, float y);
		Vector3 get(float x, float y, float z);
		Vector2 toVector2(Vector3 a);
		Vector3 toVector3(Vector2 a);
		Vector2 operator+(Vector2 a, Vector2 b);
		Vector3 operator+(Vector3 a, Vector3 b);
		Vector3 operator+(Vector3 a, Vector2 b);
		Vector2 operator-(Vector2 a, Vector2 b);
		Vector3 operator-(Vector3 a, Vector3 b);
		Vector3 operator-(Vector3 a, Vector2 b);
		Vector2 operator*(Vector2 a, Vector2 b);
		Vector3 operator*(Vector3 a, Vector3 b);
		template<class T> void operator+=(T& a, T& b);
		template<class T> void operator-=(T& a, T& b);
		template <class T> Vector2 operator*(Vector2 a, T b);
		template <class T> Vector3 operator*(Vector3 a, T b);
		template <class T> Vector2 operator/(Vector2 a, T b);
		template <class T> Vector3 operator/(Vector3 a, T b);
		template <class T> Vector2 operator+(Vector2 a, T b);
		template <class T> Vector3 operator+(Vector3 a, T b);
		std::ostream& operator<<(std::ostream& os, Vector3 v);
		std::ostream& operator<<(std::ostream& os, Vector2 v);
		Vector3 absoluteValue(Vector3 a);
		Vector1 distance(Vector1 a, Vector1 b);
		Vector2 distance(Vector2 a, Vector2 b);
		Vector3 distance(Vector3 a, Vector3 b);
		float vectorTenuse(Vector3 a);
		float vectorTenuse(Vector2 a);
		Vector3 getVectorNepos(Vector3 a);
		Vector2 getVectorNepos(Vector2 a);
		Vector1 where(Vector1 v1, Vector1 v2);
		Vector2 where(Vector2 v1, Vector2 v2);
		Vector3 where(Vector3 v1, Vector3 v2);
	}
	namespace Geo {
		typedef int angle;
		struct Angle2 { Vectors::Vector2 v; angle angle; }; Angle2 getAngle(float x, float y, angle angleD);
		bool operator==(Angle2 a, Angle2 b);
		struct Triangle2 { Angle2 a, b, c; }; Triangle2 getTriangle(Angle2 a, Angle2 b, Angle2 c);
		Angle2 getDiffAngle(Triangle2 t1, Triangle2 t2);
		struct Rectangle2 { Angle2 a, b, c, d; };
		Rectangle2 getRectangle(Angle2 a, Angle2 b, Angle2 c, Angle2 d);
		Rectangle2 getRectangle(Triangle2 a, Triangle2 b);
		std::ostream& operator<<(std::ostream& os, Angle2 v);
		std::ostream& operator<<(std::ostream& os, Rectangle2 v);
		float getHypotenus(Triangle2 triangle);
		bool isTrue(Triangle2 triangle);
		bool isTrue(Rectangle2 rectangle);
	}

#define JJNumber 0.4
	namespace Physics {
		typedef int electron; typedef int center;
		struct Atom1 { Vectors::Vector1 v; electron charge; center proton,neutron;}; 
			Atom1 get(float x, electron charge,center proton, center neutron);

		struct Atom2 { Vectors::Vector2 v; electron charge; center proton, neutron;};
			Atom2 get(float x, float y, electron charge, center proton, center neutron);

		struct Atom3 { Vectors::Vector3 v; electron charge; center proton, neutron;}; 
			Atom3 get(float x, float y,float z, electron charge,center proton, center neutron);


		float gravForce(float distance, electron e1, electron e2);
		float electronJumpForce(float distance, electron e1, electron e2,center p1, center p2);
		float chargeForce(float distance, int c1, int c2);
		Vectors::Vector2 chargeForce(Vectors::Vector2 distance, int c1, int c2);
		Vectors::Vector2 chargeForce(Vectors::Vector2 v1,Vectors::Vector2 v2, int c1, int c2);
		Vectors::Vector3 getForce(Atom3 &a, Atom3 &b);
		Vectors::Vector2 getForce(Atom2 a, Atom2 b);
		Vectors::Vector1 getForce(Atom1 a, Atom1 b);

		//detailing atom

		struct Matter { Vectors::Vector2 v; int charge; }; Matter get(Vectors::Vector2 v, int charge);
		Vectors::Vector2 chargeForce(Matter e1, Matter e2);
		template<int NumberOfElectrons,int NumberOfNeutrons,int NumberOfProtons>class DAtom;
		template<int T,int T2, int T3> void writeAtom(DAtom<T, T2, T3> a);
	}
}