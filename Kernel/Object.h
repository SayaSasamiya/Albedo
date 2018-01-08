/*Copyright 2018 Albedo Technologies, all rights reserved
Author: Samuel Alonso
Contact: somethingghanging@gmail.com
Date: 08/01/2018(dd/mm/yyyy)
Version: 1
Description: N/A
*/
#pragma once

#include <Albedo Engine\Types.h>

namespace AlbedoEngine
{
	class Object
	{
	protected:
		virtual S8* ToString();

		virtual S8* Type();
	};
}