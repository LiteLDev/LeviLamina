#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/http_stl_allocator.h"

namespace xbox::httpclient {

class Uri {
public:
    // prevent constructor by default
    Uri& operator=(Uri const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::http_string const& FullPath() const;

    MCNAPI ::http_string const& Host() const;

    MCNAPI bool IsSecure() const;

    MCNAPI bool ParseAuthority(
        ::http_string const&,
        ::std::_String_const_iterator<::std::_String_val<::std::_Simple_types<char>>>&
    );

    MCNAPI bool
    ParseHost(::http_string const&, ::std::_String_const_iterator<::std::_String_val<::std::_Simple_types<char>>>&);

    MCNAPI ushort Port() const;

    MCNAPI ::http_string Resource() const;

    MCNAPI ::http_string const& Scheme() const;

    MCNAPI Uri();

    MCNAPI Uri(::xbox::httpclient::Uri const&);

    MCNAPI explicit Uri(::http_string const&);

    MCNAPI ::xbox::httpclient::Uri& operator=(::xbox::httpclient::Uri&&);

    MCNAPI ~Uri();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::xbox::httpclient::Uri const&);

    MCNAPI void* $ctor(::http_string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace xbox::httpclient
