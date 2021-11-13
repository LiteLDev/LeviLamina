#pragma once
#include "../Global.h"
#include <string>
#include <functional>

// "http(s)://www.aaa.com/bbb/c.html"    ->    ""http(s)://www.aaa.com"  &  "/bbb/c.html"
LIAPI void SplitHttpUrl(const std::string& url, std::string& host, std::string& path);

// Http Get (async)
// [param] void callback(status, data)
LIAPI bool HttpGet(const std::string& url, std::function<void(int, std::string)> callback, int timeout = -1);

// Http Get (sync)
// [return] {status, data}
LIAPI bool HttpGetSync(const std::string& url, int *statusRtn = nullptr, std::string* dataRtn = nullptr, int timeout = -1);