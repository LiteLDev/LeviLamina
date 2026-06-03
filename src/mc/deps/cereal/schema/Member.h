#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaDescription.h"
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

namespace cereal::internal {

struct Member : public ::cereal::SchemaDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                     mRequired;
    ::ll::TypedStorage<1, 1, bool>                                     mDeprecated;
    ::ll::TypedStorage<8, 80, ::std::optional<::cereal::DynamicValue>> mDefaultValue;
    ::ll::TypedStorage<8, 80, ::std::optional<::cereal::DynamicValue>> mConstValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Member();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
