#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/Biome.h"
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct CustomTemperatureCategoryAttributes : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Biome::BiomeTempCategory> mTemperatureCategory;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CustomTemperatureCategoryAttributes() /*override*/ = default;
    // NOLINTEND

};
