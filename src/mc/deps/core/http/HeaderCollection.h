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
    HeaderCollection(HeaderCollection const&);
    HeaderCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addHeader(::std::string const& headerName, ::std::string const& headerValue, bool setValue);

    MCAPI void add(::std::string const& headerName, ::std::string const& headerValue);

    MCAPI ::std::_List_const_iterator<
        ::std::_List_val<::std::_List_simple_types<::std::pair<::std::string const, ::std::string>>>>
    begin() const;

    MCAPI ::std::_List_const_iterator<
        ::std::_List_val<::std::_List_simple_types<::std::pair<::std::string const, ::std::string>>>>
    end() const;

    MCAPI ::std::string const& get(::std::string const& headerName) const;

    MCAPI ::Bedrock::Http::HeaderCollection& operator=(::Bedrock::Http::HeaderCollection const&);

    MCAPI void set(::std::string const& headerName, ::std::string const& headerValue);

    MCAPI void setNoSafetyChecks(::std::string const& headerName, ::std::string const& headerValue);

    MCAPI ~HeaderCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
