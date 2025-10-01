#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct SerializationTraitsSupport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnke9e0de;
    ::ll::UntypedStorage<1, 1> mUnk225374;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializationTraitsSupport& operator=(SerializationTraitsSupport const&);
    SerializationTraitsSupport(SerializationTraitsSupport const&);
    SerializationTraitsSupport();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SerializationTraitsSupport() = default;
    // NOLINTEND
};

} // namespace cereal
