#pragma once
#include <string>

#ifdef lib_02 _EXPORT
#define library_02_API __declspec(dllexport)
#else
#define library_02_API __declspec(dllimport)
#endif // lib_02




namespace Leaver
{
	class Leaver
	{
	public:
		library_02_API	std::string setleave(std::string name);


	};
}
