#pragma once


#include <Windows.h>
#include <vector>
#include <list>
#include <map>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;
#include <format>
#define _CRTDEBG_MAP_ALLOC
#include <cstdlib>

// C++ 20
#include <format>
#include <filesystem>
namespace fs = std::filesystem;

#include "Types.h"
#include "Utils.h"
#include "Values.h"

#include <crtdbg.h>
#include "Defines.h"
#include "Enums.h"

#ifdef _DEBUG
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif