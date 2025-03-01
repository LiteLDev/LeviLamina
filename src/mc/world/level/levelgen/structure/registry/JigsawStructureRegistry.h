#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
class IWorldRegistriesProvider;
class JigsawStructureActorRulesRegistry;
class JigsawStructureBlockRulesRegistry;
class JigsawStructureBlockTagRulesRegistry;
class JigsawStructureElementRegistry;
class StructureSpawnRegistry;
class StructureTemplatePool;
namespace SharedTypes::v1_21_20 { struct JigsawStructureData; }
namespace br::worldgen { class StructureRegistry; }
namespace br::worldgen { class StructureSetRegistry; }
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
        ::Experiments const&        experiments,
        ::IWorldRegistriesProvider& registries
    );

    MCAPI ::StructureTemplatePool const* lookupByName(::std::string const& name) const;

    MCAPI void registerPool(::std::unique_ptr<::StructureTemplatePool>&& pool);

    MCAPI ~JigsawStructureRegistry();
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
