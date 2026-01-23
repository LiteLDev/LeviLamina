#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/registry/JigsawStructureActorRulesRegistry.h"
#include "mc/world/level/levelgen/structure/registry/JigsawStructureBlockRulesRegistry.h"
#include "mc/world/level/levelgen/structure/registry/JigsawStructureBlockTagRulesRegistry.h"
#include "mc/world/level/levelgen/structure/registry/JigsawStructureElementRegistry.h"
#include "mc/world/level/levelgen/structure/registry/StructureRegistry.h"
#include "mc/world/level/levelgen/structure/registry/StructureSetRegistry.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class IWorldRegistriesProvider;
class StructureSpawnRegistry;
class StructureTemplatePool;
namespace SharedTypes::v1_21_20 { struct JigsawStructureData; }
// clang-format on

class JigsawStructureRegistry {
public:
    // JigsawStructureRegistry inner types define
    using JigsawPoolLookupMap = ::std::unordered_map<::std::string, ::std::unique_ptr<::StructureTemplatePool>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::StructureTemplatePool>>>
                                                                      mJigsawPoolLookupMap;
    ::ll::TypedStorage<8, 152, ::JigsawStructureBlockRulesRegistry>   mJigsawBlockRulesRegistry;
    ::ll::TypedStorage<8, 88, ::JigsawStructureBlockTagRulesRegistry> mJigsawBlockTagRulesRegistry;
    ::ll::TypedStorage<8, 88, ::JigsawStructureActorRulesRegistry>    mJigsawActorRulesRegistry;
    ::ll::TypedStorage<8, 88, ::JigsawStructureElementRegistry>       mJigsawElementRegistry;
    ::ll::TypedStorage<8, 72, ::br::worldgen::StructureRegistry>      mStructureRegistry;
    ::ll::TypedStorage<8, 72, ::br::worldgen::StructureSetRegistry>   mStructureSetRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SharedTypes::v1_21_20::JigsawStructureData>> mJigsawStructureData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JigsawStructureRegistry();

    MCAPI void initialize(
        ::StructureSpawnRegistry&   structureSpawnRegistry,
        ::BaseGameVersion const&    baseGameVersion,
        ::IWorldRegistriesProvider& registries
    );

    MCAPI ::StructureTemplatePool const* lookupByName(::std::string const& name) const;

    MCAPI void registerPool(::std::unique_ptr<::StructureTemplatePool>&& pool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
