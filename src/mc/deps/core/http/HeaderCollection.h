#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class HeaderCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addHeader(::std::string const& headerName, ::std::string const& headerValue, bool setValue);

    MCNAPI void add(::std::string const& headerName, ::std::string const& headerValue);

    MCNAPI ::std::string const& get(::std::string const& headerName) const;

#ifdef LL_PLAT_C
    MCNAPI void merge(::Bedrock::Http::HeaderCollection rhs);
#endif

    MCNAPI void set(::std::string const& headerName, ::std::string const& headerValue);

#ifdef LL_PLAT_C
    MCNAPI void setNoSafetyChecks(::std::string const& headerName, ::std::string const& headerValue);
#endif

    MCAPI ~HeaderCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
