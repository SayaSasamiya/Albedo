/*Copyright 2018 Albedo Technologies, all rights reserved
Author: Samuel Alonso
Contact: somethingghanging@gmail.com
Date: 08/01/2018(dd/mm/yyyy)
Version: 1
Description: Standard defined types
*/
#pragma once

#include <cstdint>

typedef bool Bit;
constexpr Bit No = 0;
constexpr Bit Yes = 1;
constexpr Bit False = 0;
constexpr Bit True = 1;
typedef float F32;
typedef double F64;
typedef std::uint_fast8_t U8;
typedef std::int_fast8_t S8;
typedef std::uint_fast16_t U16;
typedef std::int_fast16_t S16;
typedef std::uint_fast32_t U32;
typedef std::int_fast32_t S32;
typedef std::uint_fast64_t U64;
typedef std::int_fast64_t S64; 

template<class C>
C Cast(const T value)
{
	return static_cast<C>(value);
}