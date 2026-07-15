#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/OceanRuinConfiguration.h"
#include "mc/world/level/levelgen/structure/StructureStart.h"

class OceanRuinStart : public ::StructureStart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::OceanRuinConfiguration> mConfig;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view getStructureName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
