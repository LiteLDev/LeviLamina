#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"

// auto generated forward declare list
// clang-format off
struct BiomeTagIDType;
struct BiomeTagSetIDType;
// clang-format on

class WellKnownTagID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::IDType<::BiomeTagIDType>> mTagID;
    ::ll::TypedStorage<8, 8, ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>*> mTagRegistry;
    // NOLINTEND

};
