#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class HeaderCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk1f0eba;
    // NOLINTEND

public:
    // prevent constructor by default
    HeaderCollection& operator=(HeaderCollection const&);
    HeaderCollection(HeaderCollection const&);
    HeaderCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addHeader(::std::string const& headerName, ::std::string const& headerValue, bool setValue);

    MCNAPI void add(::std::string const& headerName, ::std::string const& headerValue);

    MCNAPI void addNoSafetyChecks(::std::string const& headerName, ::std::string const& headerValue);

    MCNAPI ::std::string const& get(::std::string const& headerName) const;

    MCNAPI void set(::std::string const& headerName, ::std::string const& headerValue);

    MCNAPI ~HeaderCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
