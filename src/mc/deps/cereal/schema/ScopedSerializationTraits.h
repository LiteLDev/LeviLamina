#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SerializationTraits.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct SerializationTraitsSupport; }
// clang-format on

namespace cereal {

class ScopedSerializationTraits {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cereal::SerializationTraitsSupport*> mOwner;
    ::ll::TypedStorage<1, 1, ::cereal::SerializationTraits>         mTraits;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedSerializationTraits();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScopedSerializationTraits(::cereal::SerializationTraitsSupport& owner, ::cereal::SerializationTraits traits);

    MCAPI ~ScopedSerializationTraits();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::SerializationTraitsSupport& owner, ::cereal::SerializationTraits traits);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal
