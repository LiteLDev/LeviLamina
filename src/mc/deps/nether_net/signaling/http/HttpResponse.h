#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/basic_cstring_view.h"

namespace NetherNet {

struct HttpResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>                                                       statusCode;
    ::ll::TypedStorage<8, 16, ::brstd::basic_cstring_view<char, ::std::char_traits<char>>> statusText;
    ::ll::TypedStorage<8, 16, ::brstd::basic_cstring_view<char, ::std::char_traits<char>>> contentType;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>>          headers;
    ::ll::TypedStorage<8, 32, ::std::string>                                               body;
    // NOLINTEND
};

} // namespace NetherNet
