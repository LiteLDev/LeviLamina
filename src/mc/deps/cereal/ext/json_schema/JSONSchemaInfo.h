#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::ext::internal {

struct JSONSchemaInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mTitle;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mDescription;
    // NOLINTEND

public:
    // prevent constructor by default
    JSONSchemaInfo(JSONSchemaInfo const&);
    JSONSchemaInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::cereal::ext::internal::JSONSchemaInfo& operator=(::cereal::ext::internal::JSONSchemaInfo const&);

    MCAPI ~JSONSchemaInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace cereal::ext::internal
