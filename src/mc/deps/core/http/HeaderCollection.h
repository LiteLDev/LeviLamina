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
    MCAPI void _addHeader(::std::string const& headerName, ::std::string const& headerValue, bool setValue);

    MCAPI void add(::std::string const& headerName, ::std::string const& headerValue);

    MCAPI ::std::string const& get(::std::string const& headerName) const;

#ifdef LL_PLAT_C
    MCAPI void merge(::Bedrock::Http::HeaderCollection rhs);
#endif

    MCAPI void set(::std::string const& headerName, ::std::string const& headerValue);

#ifdef LL_PLAT_C
    MCAPI void setNoSafetyChecks(::std::string const& headerName, ::std::string const& headerValue);
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
