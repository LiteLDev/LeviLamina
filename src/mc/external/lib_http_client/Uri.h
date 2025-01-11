#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/http_stl_allocator.h"

namespace xbox::httpclient {

class Uri {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::http_string const& FullPath() const;

    MCAPI ::http_string const& Host() const;

    MCAPI bool IsSecure() const;

    MCAPI bool
    ParseAuthority(::http_string const&, ::std::_String_const_iterator<::std::_String_val<::std::_Simple_types<char>>>&);

    MCAPI bool
    ParseHost(::http_string const&, ::std::_String_const_iterator<::std::_String_val<::std::_Simple_types<char>>>&);

    MCAPI ushort Port() const;

    MCAPI ::http_string Resource() const;

    MCAPI ::http_string const& Scheme() const;

    MCAPI Uri();

    MCAPI Uri(::xbox::httpclient::Uri const&);

    MCAPI explicit Uri(::http_string const&);

    MCAPI ::xbox::httpclient::Uri& operator=(::xbox::httpclient::Uri&&);

    MCAPI ~Uri();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::xbox::httpclient::Uri const&);

    MCAPI void* $ctor(::http_string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace xbox::httpclient
