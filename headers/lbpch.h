#ifndef  LIPCH_H
#define LIPCH_H
#include <stl/Logger.h>
#ifdef LITELOADER_EXPORTS
extern Logger<stdio_commit> LOG;
#endif
#include<cstdio>
#include<cstring>
#include<string>
#include<string_view>
#include<memory>

using std::string, std::string_view,std::shared_ptr,std::unique_ptr;
using namespace std::string_literals;
using std::make_shared, std::make_unique;

#include"loader/hash.h"
#include"liteloader.h"
#include"loader/hook.h"
#include"loader/Loader.h"
#include<mc/Core.h>
#include<api/serviceLocate.h>
#include<stl/views.h>
#include<api/types/types.h>
#include<api/Basic_Event.h>

#include<stl/useful.h>

#include <Compatibility.h>

#endif