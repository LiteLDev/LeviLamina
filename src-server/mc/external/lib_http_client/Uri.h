#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/http_stl_allocator.h"

namespace xbox::httpclient {

class Uri {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcc6930;
    ::ll::UntypedStorage<8, 32> mUnk430b97;
    ::ll::UntypedStorage<8, 32> mUnk7d3bf1;
    ::ll::UntypedStorage<8, 32> mUnkf5eae5;
    ::ll::UntypedStorage<8, 32> mUnk12f86b;
    ::ll::UntypedStorage<8, 32> mUnk3616b7;
    ::ll::UntypedStorage<8, 32> mUnk7b73f7;
    ::ll::UntypedStorage<2, 2> mUnkbe2269;
    ::ll::UntypedStorage<1, 1> mUnk926ab9;
    // NOLINTEND

public:
    // prevent constructor by default
    Uri& operator=(Uri const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::http_string const& FullPath() const;

    MCNAPI ::http_string const& Host() const;

    MCNAPI bool IsSecure() const;

    MCNAPI bool ParseAuthority(::http_string const& uri, ::std::_String_const_iterator<::std::_String_val<::std::_Simple_types<char>>>& it);

    MCNAPI bool ParseHost(::http_string const& uri, ::std::_String_const_iterator<::std::_String_val<::std::_Simple_types<char>>>& it);

    MCNAPI ushort Port() const;

    MCNAPI ::http_string Resource() const;

    MCNAPI ::http_string const& Scheme() const;

    MCNAPI Uri();

    MCNAPI Uri(::xbox::httpclient::Uri const&);

    MCNAPI explicit Uri(::http_string const& uri);

    MCNAPI ::xbox::httpclient::Uri& operator=(::xbox::httpclient::Uri&&);

    MCNAPI ~Uri();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::xbox::httpclient::Uri const&);

    MCNAPI void* $ctor(::http_string const& uri);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
