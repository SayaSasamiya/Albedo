/*Copyright 2018 Albedo Technologies, all rights reserved
Author: Samuel Alonso
Contact: somethingghanging@gmail.com
Date: 08/01/2018(dd/mm/yyyy)
Version: 1
Description: Return the maximun of two values
*/
#pragma once

#include <Albedo Engine\Types.h>

namespace AlbedoEngine
{
	template<class T>
	T Max(const T a, const T b)
	{
		if (a > b)
			return a;
		return b;
	}

	template<>
	F32 Max<F32>(const F32 a, const F32 b)
	{
		if ((a - b) > 0.0000001)
			return a;
		return b;
	}

	template<>
	F64 Max<F64>(const F64 a, const F64 b)
	{
		if ((a - b) > 0.0000001)
			return a;
		return b;
	}
}
