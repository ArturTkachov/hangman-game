#pragma once
#include <string>
#include "Utility.h"

std::wstring castAsWstring(System::String^ str);

System::String^ castAsSystemString(std::wstring str);