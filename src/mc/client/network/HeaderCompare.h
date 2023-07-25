#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/http_stl_allocator.h"

namespace xbox::httpclient {

struct HeaderCompare {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XBOX_HTTPCLIENT_HEADERCOMPARE
public:
    HeaderCompare& operator=(HeaderCompare const&) = delete;
    HeaderCompare(HeaderCompare const&)            = delete;
    HeaderCompare()                                = delete;
#endif

public:
    /**
     * @symbol
     * ??RHeaderCompare\@httpclient\@xbox\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@0\@Z
     */
    MCAPI bool
    operator()(class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> const&, class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> const&)
        const;
};

}; // namespace xbox::httpclient
