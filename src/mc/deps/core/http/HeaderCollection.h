#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class HeaderCollection {
public:
    // prevent constructor by default
    HeaderCollection& operator=(HeaderCollection const&);

public:
    // NOLINTBEGIN
    MCAPI HeaderCollection();

    MCAPI HeaderCollection(class Bedrock::Http::HeaderCollection const&);

    MCAPI void add(std::string const& headerName, std::string const& headerValue);

    MCAPI std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const, std::string>>>>
          begin() const;

    MCAPI std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const, std::string>>>>
          end() const;

    MCAPI std::string const& get(std::string const&) const;

    MCAPI void set(std::string const& headerName, std::string const& headerValue);

    MCAPI void setNoSafetyChecks(std::string const& headerName, std::string const& headerValue);

    MCAPI ~HeaderCollection();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _addHeader(std::string const& headerName, std::string const& headerValue, bool setValue);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isRestrictedHeader(std::string const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(class Bedrock::Http::HeaderCollection const&);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock::Http
