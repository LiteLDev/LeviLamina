#pragma once

#include <functional>
#include <map>
#include <string>

#include "httplib.h"

#include "ll/api/base/Macro.h"

namespace ll::utils::http_utils {

using Headers  = httplib::Headers;
using Status   = int;
using Data     = std::string;
using Callback = std::function<void(Status, Data)>;

// "http(s)://www.aaa.com/bbb/c.html" -> "http(s)://www.aaa.com" & "/bbb/c.html"
LLAPI void splitUrl(std::string const& url, std::string& host, std::string& path);

LLAPI bool post(
    std::string const& url,
    Headers const&     headers,
    std::string const& data,
    std::string const& type,
    const Callback&    callback,
    int                timeout = -1
);

LLAPI bool post(
    std::string const& url,
    std::string const& data,
    std::string const& type,
    const Callback&    callback,
    int                timeout = -1
);

LLAPI bool get(std::string const& url, Headers const& headers, const Callback& callback, int timeout = -1);

LLAPI bool get(std::string const& url, const std::function<void(int, std::string)>& callback, int timeout = -1);

// Http Get (sync)
// [return] {status, data}
LLAPI bool getSync(std::string const& url, int* statusRtn = nullptr, std::string* dataRtn = nullptr, int timeout = -1);

} // namespace ll::utils::http_utils
