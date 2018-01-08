/*Copyright 2018 Albedo Technologies, all rights reserved
Author: Samuel Alonso
Contact: somethingghanging@gmail.com
Date: 08/01/2018(dd/mm/yyyy)
Version: 1
Description: Round a floating point variable to the greatest integer
*/
#pragma once

#include <Albedo Engine\Types.h>
#include <Albedo Engine\Core\Cast.h>

namespace AlbedoEngine
{
	template<class T>
	T Ceil(const F32 a)
	{
		if (a < 0)
			return Cast<F32, T>(a);
		return Cast<F32, T>(a + 1);
	}

	template<class T>
	T Ceil(const F64 a)
	{
		if (a < 0)
			return Cast<F64, T>(a);
		return Cast<F64, T>(a + 1);
	}
}
