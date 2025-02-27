#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
class IWorldRegistriesProvider;
class StructureSpawnRegistry;
class StructureTemplatePool;
// clang-format on

class JigsawStructureRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnk339193;
    ::ll::UntypedStorage<8, 152> mUnk807a76;
    ::ll::UntypedStorage<8, 88>  mUnkb7f185;
    ::ll::UntypedStorage<8, 88>  mUnk670ebf;
    ::ll::UntypedStorage<8, 88>  mUnk8230cc;
    ::ll::UntypedStorage<8, 72>  mUnk31d0da;
    ::ll::UntypedStorage<8, 72>  mUnk47e727;
    ::ll::UntypedStorage<8, 8>   mUnk6b942f;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureRegistry& operator=(JigsawStructureRegistry const&);
    JigsawStructureRegistry(JigsawStructureRegistry const&);

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
