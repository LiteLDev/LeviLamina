#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v1/BeardingDescriptionCache.h"

// auto generated forward declare list
// clang-format off
struct BeardKernel;
// clang-format on

class BeardDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, ::BeardingDescriptionCache const> mCache;
    ::ll::TypedStorage<8, 8, ::BeardKernel const&> mBeardKernel;
    // NOLINTEND

public:
    // prevent constructor by default
    BeardDescription& operator=(BeardDescription const&);
    BeardDescription(BeardDescription const&);
    BeardDescription();

};
