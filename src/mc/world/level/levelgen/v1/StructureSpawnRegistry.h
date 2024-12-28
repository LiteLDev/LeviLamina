#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/spawn_category/Type.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct StructureSpawnOverride; }
// clang-format on

class StructureSpawnRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk869b4b;
    ::ll::UntypedStorage<8, 64> mUnkc9fc63;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureSpawnRegistry& operator=(StructureSpawnRegistry const&);
    StructureSpawnRegistry(StructureSpawnRegistry const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureSpawnRegistry();

    MCAPI ::std::unordered_map<::SpawnCategory::Type, ::br::worldgen::StructureSpawnOverride> const*
    get(::std::string const& key) const;

    MCAPI void insert(
        ::std::string_view                                                                    key,
        ::std::unordered_map<::SpawnCategory::Type, ::br::worldgen::StructureSpawnOverride>&& staticStructureMobs
    );

    MCAPI ~StructureSpawnRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
