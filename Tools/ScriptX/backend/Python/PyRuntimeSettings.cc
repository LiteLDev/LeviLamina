/*
 * Tencent is pleased to support the open source community by making ScriptX available.
 * Copyright (C) 2021 THL A29 Limited, a Tencent company.  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include "PyRuntimeSettings.h"
#include "PyHelper.h"

namespace script::py_backend {
namespace py_runtime_settings {

// Attention! Some platform specific code here
// Since cpython's runtime requires some platform-specific settings, this part of code 
// is separated out to facilitate adaptation across platforms
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
  #define SCRIPTX_PATH_SEPERATOR L"\\"
  #define SCRIPTX_ENVIRONMENT_VARS_SEPERATOR L";"

  // Python runtime config default values
  // .\\lib\\python3
  #define SCRIPTX_DEFAULT_PYTHON_HOME \
    L"." SCRIPTX_PATH_SEPERATOR L"lib" SCRIPTX_PATH_SEPERATOR L"python3" SCRIPTX_PATH_SEPERATOR
  // (.\\lib\\python3\\)Lib
  #define SCRIPTX_DEFAULT_PYTHON_LIBS_SUFFIX \
    L"Lib" SCRIPTX_PATH_SEPERATOR

#elif defined(__linux__) || defined(__unix__)
  #define SCRIPTX_PATH_SEPERATOR L"/"
  #define SCRIPTX_ENVIRONMENT_VARS_SEPERATOR L":"

  // Python runtime config default values
  // ./lib/python3/
  #define SCRIPTX_DEFAULT_PYTHON_HOME \
    L"." SCRIPTX_PATH_SEPERATOR L"lib" SCRIPTX_PATH_SEPERATOR L"python3" SCRIPTX_PATH_SEPERATOR
  // (./lib/python3/)lib/python3.10/
  #define SCRIPTX_DEFAULT_PYTHON_LIBS_SUFFIX \
    L"lib" SCRIPTX_PATH_SEPERATOR L"python3.10" SCRIPTX_PATH_SEPERATOR

#elif defined(__APPLE__)
  #define SCRIPTX_PATH_SEPERATOR L"/"
  #define SCRIPTX_ENVIRONMENT_VARS_SEPERATOR L":"

  // TODO: Is this correct? Asuming that same as Linux
  // Python runtime config default values
  // ./lib/python3/
  #define SCRIPTX_DEFAULT_PYTHON_HOME \
    L"." SCRIPTX_PATH_SEPERATOR L"lib" SCRIPTX_PATH_SEPERATOR L"python3" SCRIPTX_PATH_SEPERATOR
  // (./lib/python3/)lib/python3.10/
  #define SCRIPTX_DEFAULT_PYTHON_LIBS_SUFFIX \
    L"lib" SCRIPTX_PATH_SEPERATOR L"python3.10" SCRIPTX_PATH_SEPERATOR

#else
  #define SCRIPTX_PATH_SEPERATOR L"/"
  #define SCRIPTX_ENVIRONMENT_VARS_SEPERATOR L":"

  // TODO: Is this correct? Asuming that same as Linux
  // Python runtime config default values
  // ./lib/python3/
  #define SCRIPTX_DEFAULT_PYTHON_HOME \
    L"." SCRIPTX_PATH_SEPERATOR L"lib" SCRIPTX_PATH_SEPERATOR L"python3" SCRIPTX_PATH_SEPERATOR
  // (./lib/python3/)lib/python3.10/
  #define SCRIPTX_DEFAULT_PYTHON_LIBS_SUFFIX \
    L"lib" SCRIPTX_PATH_SEPERATOR L"python3.10" SCRIPTX_PATH_SEPERATOR

#endif


// global vars to store path of python runtime-env
std::wstring _SCRIPTX_PYTHON_HOME{};
std::wstring _SCRIPTX_PYTHON_EXECUTER_PATH{};
std::wstring _SCRIPTX_PYTHON_MODULE_SEARCH_PATHS{};


void initDefaultPythonRuntimeSettings() {
  // python home
  if(_SCRIPTX_PYTHON_HOME.empty()) {
    setPythonHomePath(std::wstring(SCRIPTX_DEFAULT_PYTHON_HOME));
  }

  // TODO: Py_SetProgramName

  // module search paths
  if(_SCRIPTX_PYTHON_MODULE_SEARCH_PATHS.empty()) {
    setModuleSearchPaths(
      {std::wstring(SCRIPTX_DEFAULT_PYTHON_HOME) + std::wstring(SCRIPTX_DEFAULT_PYTHON_LIBS_SUFFIX)}
    );
  }
}

void setPythonHomePath(const std::wstring &path) {
  _SCRIPTX_PYTHON_HOME = path;
  Py_SetPythonHome(_SCRIPTX_PYTHON_HOME.c_str());
}

std::wstring getPythonHomePath() {
  auto homePath = Py_GetPythonHome();
  if(!homePath)
    return _SCRIPTX_PYTHON_HOME;
  else
    return std::wstring(homePath);
}

void setModuleSearchPaths(const std::vector<std::wstring> &paths) {
  if(paths.empty()) {
    _SCRIPTX_PYTHON_MODULE_SEARCH_PATHS.clear();
  }
  else
    _SCRIPTX_PYTHON_MODULE_SEARCH_PATHS = paths[0];
  
  for(size_t i=1; i<paths.size(); ++i) {
    _SCRIPTX_PYTHON_MODULE_SEARCH_PATHS += SCRIPTX_ENVIRONMENT_VARS_SEPERATOR + paths[i];
  }
  Py_SetPath(_SCRIPTX_PYTHON_MODULE_SEARCH_PATHS.c_str());
}

void addModuleSearchPath(const std::wstring &path) {
  if(path.empty())
    return;
  _SCRIPTX_PYTHON_MODULE_SEARCH_PATHS += SCRIPTX_ENVIRONMENT_VARS_SEPERATOR + path;
  Py_SetPath(_SCRIPTX_PYTHON_MODULE_SEARCH_PATHS.c_str());
}

static std::vector<std::wstring> SplitStrWithPattern(const std::wstring& str, const std::wstring& pattern) 
{
    std::vector<std::wstring> resVec;
    if (str.empty())
        return resVec;

    std::wstring strs = str + pattern;
    size_t pos = strs.find(pattern);
    size_t size = strs.size();

    while (pos != std::wstring::npos) {
        std::wstring x = strs.substr(0, pos);
        resVec.push_back(x);
        strs = strs.substr(pos + pattern.size(), size);
        pos = strs.find(pattern);
    }
    return resVec;
}

std::vector<std::wstring> getModuleSearchPaths() {
  auto moduleSearchPath = Py_GetPath();
  std::wstring searchPathsStr;
  if(moduleSearchPath)
    searchPathsStr = std::wstring(moduleSearchPath);
  else
    searchPathsStr = _SCRIPTX_PYTHON_MODULE_SEARCH_PATHS;
  
  return SplitStrWithPattern(searchPathsStr, SCRIPTX_ENVIRONMENT_VARS_SEPERATOR);
}

std::wstring getPlatformPathSeparator() {
  return SCRIPTX_PATH_SEPERATOR;
}

}   // namespace py_runtime_settings
}   // namespace script::py_backend