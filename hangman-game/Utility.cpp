#include "Utility.h"
#include <msclr\marshal_cppstd.h>

std::wstring castAsWstring(System::String^ str) {
	return msclr::interop::marshal_as<std::wstring>(str);
};

System::String^ castAsSystemString(std::wstring str) {
	return msclr::interop::marshal_as<System::String^>(str);
};