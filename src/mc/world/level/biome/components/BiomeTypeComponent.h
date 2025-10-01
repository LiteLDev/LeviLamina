#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/versionless/BiomeTypes.h"
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct BiomeTypeComponent : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::BiomeTypes> mBiomeType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BiomeTypeComponent() /*override*/ = default;
    // NOLINTEND
};
