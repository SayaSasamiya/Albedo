/*Copyright 2018 Albedo Technologies, all rights reserved
Author: Samuel Alonso
Contact: somethingghanging@gmail.com
Date: 08/01/2018(dd/mm/yyyy)
Version: 1
Description: Cast the variable 'value' of type T to type C.
*/
#pragma once

namespace AlbedoEngine 
{
	template<class T, class C>
	C Cast(const T value)
	{
		return static_cast<C>(value);
	}
}