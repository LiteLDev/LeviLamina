#pragma once
#include "../Global.h"
#include <string>
#include <functional>

// "http(s)://www.aaa.com/bbb/c.html"    ->    ""http(s)://www.aaa.com"  &  "/bbb/c.html"
LIAPI void SplitHttpUrl(const std::string& url, std::string& host, std::string& path);

// Http Get *Async
LIAPI bool HttpGet(const std::string& url, std::function<void(int, std::string)> callback);	//void callback(status, data)