#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"

namespace SharedTypes::Legacy::Spawn {

struct PermuteType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mWeight;
    ::ll::TypedStorage<4, 4, int>                          mMinGuaranteed;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<1>> mEntityType;
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
