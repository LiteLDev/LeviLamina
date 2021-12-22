#pragma once
#include "../Global.h"
#include <string>
#include <functional>

// "http(s)://www.aaa.com/bbb/c.html"    ->    ""http(s)://www.aaa.com"  &  "/bbb/c.html"
LIAPI void SplitHttpUrl(const std::string& url, std::string& host, std::string& path);

// Http Post (async)
// [param] void callback(status, data)
LIAPI bool HttpPost(const string& url, const string& data, const string& type, const std::function<void(int, string)>& callback, int timeout = -1);

// Http Get (async)
// [param] void callback(status, data)
LIAPI bool HttpGet(const std::string& url, const std::function<void(int, std::string)>& callback, int timeout = -1);

// Http Get (sync)
// [return] {status, data}
LIAPI bool HttpGetSync(const std::string& url, int *statusRtn = nullptr, std::string* dataRtn = nullptr, int timeout = -1);