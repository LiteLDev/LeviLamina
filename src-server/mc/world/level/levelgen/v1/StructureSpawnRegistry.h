#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/spawn_category/Type.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct Structure; }
namespace br::worldgen { struct StructureSpawnOverride; }
// clang-format on

class StructureSpawnRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unordered_map<::SpawnCategory::Type, ::br::worldgen::StructureSpawnOverride>>> mStaticStructures;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::weak_ptr<::br::worldgen::Structure>>> mDynamicStructures;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unordered_map<::SpawnCategory::Type, ::br::worldgen::StructureSpawnOverride> const* get(::std::string const& key) const;
    // NOLINTEND

};
