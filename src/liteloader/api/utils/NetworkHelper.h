#pragma once

#include "httplib.h"
#include "liteloader/api/base/Global.h"
#include <functional>
#include <string>

// "http(s)://www.aaa.com/bbb/c.html"    ->    ""http(s)://www.aaa.com"  &  "/bbb/c.html"
LLAPI void SplitHttpUrl(std::string const& url, std::string& host, std::string& path);

// Http Post (async)
// [param] void callback(status, data)
LLAPI bool HttpPost(
    std::string const&                           url,
    httplib::Headers const&                      headers,
    std::string const&                           data,
    std::string const&                           type,
    const std::function<void(int, std::string)>& callback,
    int                                          timeout = -1
);
LLAPI bool HttpPost(
    std::string const&                           url,
    std::string const&                           data,
    std::string const&                           type,
    const std::function<void(int, std::string)>& callback,
    int                                          timeout = -1
);
// Http Get (async)
// [param] void callback(status, data)
LLAPI bool HttpGet(
    std::string const&                           url,
    httplib::Headers const&                      headers,
    const std::function<void(int, std::string)>& callback,
    int                                          timeout = -1
);
LLAPI bool HttpGet(std::string const& url, const std::function<void(int, std::string)>& callback, int timeout = -1);

// Http Get (sync)
// [return] {status, data}
LLAPI bool
HttpGetSync(std::string const& url, int* statusRtn = nullptr, std::string* dataRtn = nullptr, int timeout = -1);