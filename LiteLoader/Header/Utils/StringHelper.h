#pragma once
#include "../Global.h"
#include <vector>
#include <string>

// std::string -> std::wstring
LIAPI std::wstring str2wstr(const std::string& str);

// std::wstring -> std::string
LIAPI std::string wstr2str(const std::wstring& wstr);

// "2021-03-24"  ->  ["2021", "03", "24"]  (use '-' as split pattern)
LIAPI std::vector<std::string> SplitStrWithPattern(const std::string& str, const std::string& pattern);

// ReplaceStr("aaabbbcc","bbb","tt")
LIAPI std::string& ReplaceStr(std::string& str, const std::string& old_value, const std::string& new_value);

// StartsWith("helloworld", "hello") == true
LIAPI bool StartsWith(const std::string& str, const std::string& start);

// EndsWith("helloworld","world") == true
LIAPI bool EndsWith(const std::string& str, const std::string& end);

// "hello {Jim}" -> "hello {{Jim}}"  (for FMT bug)
LIAPI std::string FixCurlyBracket(std::string str);