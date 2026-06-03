#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SerializationTraits.h"

namespace cereal {

struct SerializationTraitsSupport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::cereal::SerializationTraits> mSerializationTraitsOverride;
    ::ll::TypedStorage<1, 1, ::cereal::SerializationTraits> mSerializationTraits;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SerializationTraitsSupport() = default;
    // NOLINTEND
};

} // namespace cereal
