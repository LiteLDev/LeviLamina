#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/spawn_category/Type.h"
#include "mc/world/level/levelgen/v2/generation_step/Type.h"
#include "mc/world/level/levelgen/v2/terrain_adjustment/Type.h"

// auto generated forward declare list
// clang-format off
class PoolAliasBinding;
struct BiomeIdType;
namespace br::worldgen { class GenerationStub; }
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct GenerationContext; }
namespace br::worldgen { struct StructureSpawnOverride; }
// clang-format on

namespace br::worldgen {

struct Structure {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::br::worldgen::TerrainAdjustment::Type> mAdjustment;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeIdType>>           mBiomes;
    ::ll::TypedStorage<8, 32, ::std::string>                          mKey;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SpawnCategory::Type, ::br::worldgen::StructureSpawnOverride>>
                                                                                    mMobs;
    ::ll::TypedStorage<1, 1, ::br::worldgen::GenerationStep::Type>                  mStep;
    ::ll::TypedStorage<8, 48, ::HashedString>                                       mType;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PoolAliasBinding>>> mPoolAliases;
    // NOLINTEND

public:
    // prevent constructor by default
    Structure& operator=(Structure const&);
    Structure();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Structure();

    virtual ::std::optional<::br::worldgen::GenerationStub>
    findValidGenerationPoint(::br::worldgen::GenerationContext&) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Structure(::br::worldgen::Structure const&);

    MCAPI ::std::shared_ptr<::br::worldgen::StructureInstance>
    generate(::br::worldgen::GenerationContext& context) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::br::worldgen::Structure const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
