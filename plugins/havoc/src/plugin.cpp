/*======================================================================*\
|| #################################################################### ||
|| # Project Havoc Server						        			  # ||
|| # ---------------------------------------------------------------- # ||
|| # Copyright (c)2011-2015 Havoc Server			  				  # ||
|| # Created by Mellnik                                               # ||
|| # ---------------------------------------------------------------- # ||
|| # https://havocserver.com		                      			  # ||
|| #################################################################### ||
\*======================================================================*/

#include "plugin.h"

std::unique_ptr<Plugin> pPlugin;

void Plugin::AddAmx(AMX *amx)
{
	amx_List.push_back(amx);
}

void Plugin::EraseAmx(AMX *amx)
{
	for (auto i = amx_List.begin(); i != amx_List.end(); ++i) 
	{
		if (*i == amx) 
		{
			amx_List.erase(i);
			break;
		}
	}
}

std::list<AMX *> &Plugin::GetAmxList()
{
	return amx_List;
}