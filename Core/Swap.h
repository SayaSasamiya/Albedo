/*Copyright 2018 Albedo Technologies, all rights reserved
Author: Samuel Alonso
Contact: somethingghanging@gmail.com
Date: 08/01/2018(dd/mm/yyyy)
Version: 1
Description: N/A
*/
#pragma once

namespace AlbedoEngine
{
	template<class T>
	void Swap(T& a, T& b)
	{
		T c = a;
		a = b;
		b = c;
	}
}
