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
    // prevent constructor by default
    Member& operator=(Member const&);
    Member();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Member(::cereal::internal::Member const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::internal::Member const&);
    // NOLINTEND
};

} // namespace cereal::internal
