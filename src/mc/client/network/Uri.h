#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/http_stl_allocator.h"

namespace xbox::httpclient {

class Uri {
public:
    // prevent constructor by default
    Uri& operator=(Uri const&);

public:
    // NOLINTBEGIN
    MCAPI http_string const& FullPath() const;

    MCAPI http_string const& Host() const;

    MCAPI bool IsSecure() const;

    MCAPI ushort Port() const;

    MCAPI http_string Resource() const;

    MCAPI http_string const& Scheme() const;

    MCAPI Uri();

    MCAPI explicit Uri(http_string const&);

    MCAPI Uri(class xbox::httpclient::Uri const&);

    MCAPI class xbox::httpclient::Uri& operator=(class xbox::httpclient::Uri&&);

    MCAPI ~Uri();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool
    ParseAuthority(http_string const&, std::_String_const_iterator<std::_String_val<std::_Simple_types<char>>>&);

    MCAPI bool ParseHost(http_string const&, std::_String_const_iterator<std::_String_val<std::_Simple_types<char>>>&);

    // NOLINTEND
};

}; // namespace xbox::httpclient
