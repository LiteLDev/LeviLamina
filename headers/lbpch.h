#ifndef LIPCH_H
#define LIPCH_H
#include <stl/Logger.h>

// extern Logger<stdio_commit> LOG;

#include <cstdio>
#include <cstring>
#include <memory>
#include <string>
#include <string_view>

using std::string, std::string_view, std::shared_ptr, std::unique_ptr;
using namespace std::string_literals;
using std::make_shared, std::make_unique;

#include <api/Basic_Event.h>
#include <api/serviceLocate.h>
#include <api/types/types.h>
#include <mc/Core.h>
#include <stl/views.h>
#include "liteloader.h"
#include "loader/Loader.h"
#include "loader/hash.h"
#include "loader/hook.h"
#include <stl/useful.h>
#include <Compatibility.h>
#endif
