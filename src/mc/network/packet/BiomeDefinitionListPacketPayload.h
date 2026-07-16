#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/serialization/BiomeStringList.h"

// auto generated forward declare list
// clang-format off
struct BiomeDefinitionData;
// clang-format on

struct BiomeDefinitionListPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<ushort, ::BiomeDefinitionData>> mBiomeData;
    ::ll::TypedStorage<8, 88, ::BiomeStringList>                         mStringList;
    // NOLINTEND
};
