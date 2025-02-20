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
    MCAPI void _addHeader(::std::string const& headerName, ::std::string const& headerValue, bool setValue);

    MCAPI void add(::std::string const& headerName, ::std::string const& headerValue);

    MCAPI void addNoSafetyChecks(::std::string const& headerName, ::std::string const& headerValue);

    MCAPI ::std::string const& get(::std::string const& headerName) const;

    MCAPI void set(::std::string const& headerName, ::std::string const& headerValue);

    MCAPI ~HeaderCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
