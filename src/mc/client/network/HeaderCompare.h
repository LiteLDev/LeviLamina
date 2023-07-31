#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/http_stl_allocator.h"

namespace xbox::httpclient {

struct HeaderCompare {

public:
    // prevent constructor by default
    HeaderCompare& operator=(HeaderCompare const&) = delete;
    HeaderCompare(HeaderCompare const&)            = delete;
    HeaderCompare()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??RHeaderCompare\@httpclient\@xbox\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@0\@Z
     */
    MCAPI bool
    operator()(std::basic_string<char, std::char_traits<char>, class http_stl_allocator<char>> const&, std::basic_string<char, std::char_traits<char>, class http_stl_allocator<char>> const&)
        const;
    // NOLINTEND
};

}; // namespace xbox::httpclient
