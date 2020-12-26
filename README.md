<h1 align="center">Vector3 C++</h1>

<p align="center">This is a simple implementation of a Vector3 object in C++. Features are listed below</p>

<p align="center">
    <a href="https://travis-ci.org/kdjstudios/Vector3">
        <img src="https://travis-ci.org/kdjstudios/Vector3.svg?branch=master" alt="build status">
    </a>
</p>

# Features

## Members

* float X;
* float Y;
* float Z;

## Constructors

* Vector3();
* explicit Vector3(float const&x, float const&y, float const&z);

## Vector3 by Vector3 Math

* Vector3		operator+(const Vector3& vector) const;
* Vector3		operator-(const Vector3& vector) const;
* Vector3		operator*(const Vector3& vector) const;
* Vector3		operator/(const Vector3& vector) const;
* Vector3&	operator+=(const Vector3& vector);
* Vector3&	operator-=(const Vector3& vector);
* Vector3&	operator*=(const Vector3& vector);
* Vector3&	operator/=(const Vector3& vector);

## Vector3 by Float Math

* Vector3		operator-() const;
* Vector3		operator+(float const&num) const;
* Vector3		operator-(float const&num) const;
* Vector3		operator*(float const&num) const;
* Vector3		operator/(float const&num) const;
* Vector3&	operator+=(float const&num);
* Vector3&	operator-=(float const&num);
* Vector3&	operator*=(float const&num);
* Vector3&	operator/=(float const&num);

## Boolean Equals Operators

* bool		operator==(const Vector3& vector) const;
* bool		operator!=(const Vector3& vector) const;

## Static Predefines

* static const Vector3 Zero;
* static const Vector3 Left;
* static const Vector3 Right;
* static const Vector3 Up;
* static const Vector3 Down;
* static const Vector3 Forward;
* static const Vector3 Backward;

## TODO:

* Vector3	UnitCross(const Vector3& vec1, const Vector3& vec2);
* static void Orthonormalize (Vector3& rkU, Vector3& rkV,	Vector3& rkW);
* static void Orthonormalize (Vector3* akV);
* static void GenerateOrthonormalBasis (Vector3& rkU,	Vector3& rkV, Vector3& rkW, bool bUnitLengthW);
* Vector4 toVec4
* Quanternion ToQuat

## Print out

* friend std::ostream& operator<< (std::ostream& ofs, const Vector3& vector);

# DONATE

Donations are appreciated 

Help out and buy me a beer.

My Bitcoin Address is: `3PHsZ6hovPC4DdsNwdtu8Ph9YHggvnkz2u`

My Ethereum Address is: `0x505e1f348f434d1ecac1aa7e95e844db5aeed414`

My Litecoin Address is: `LaAfYj2KNQWcudC8MHmVpJqNDhFmBEgfXw`

Other Crypto coins for donation

My Dogecoin Address is: `DKZM88QNQB7yFJmDjQQXsLRxhvbhujQmxL`

My Blackcoin Address is: `BPRiDNkjRbyXZx9PENFXxHkw4fFY4a1zHZ`

My Dash Address is: `XjCzQUUArLssraLAAJVLh5eiHzqWZFYYCX`

My Peercoin Address is: `PQaMnrM8KtPYkNxPqYjXSFVZjFX6MGadNJ`

My Blackcoin Address is: `BPRiDNkjRbyXZx9PENFXxHkw4fFY4a1zHZ`

My Pivx Address is: `DS1km9xeqDRgb3zA4YCj7VDyV1P8CPfkjt`

My GameCredits Address is: `GRs6pux26GEzNmbZL3iD322ZZ72LDPZktJ`

My Flyp.me Token Address is: `0x505e1f348f434d1ecac1aa7e95e844db5aeed414`

My Syscoin Address is: `Scv8swbhoMvU1Sxq4wjoH9fdkhvuLcrCQ7`

My Zcash Address is: `t1WN767zDrrZofZYxDCTnXzYP58iw6qctBu`

My Gridcoin Address is: `SLDUjpiuuuMcqvwfhRcyarfuxsN7pgM1Qc`

My Decred Address is: `DsYrYSH7fuHVoYPLEoxcZuhntboc1JQww9i`

My Creativecoin Address is: `CU99TsYw4Ek3Ddqc2egAwKd4C6X1AwYCZJ`

My Faircoin Address is: `fQU8XqvvorKcsKcCxtZ8c1neE5BF9xPgQx`
