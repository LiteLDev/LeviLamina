#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/Loader.h"

// auto generated forward declare list
// clang-format off
class PackLoadContext;
struct ActorSpawnRuleData;
namespace SharedTypes::v1_21_60::Spawn { struct Contents; }
namespace br::spawn { class SpawnPlacements; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ActorSpawnRuleDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        168,
        ::Puv::Loader<::SharedTypes::v1_21_60::Spawn::Contents, ::SharedTypes::v1_21_60::Spawn::Contents>>
        mLoader;
    ::ll::TypedStorage<8, 256, ::Puv::SlicedLoader<::ActorSpawnRuleData, nullptr_t, nullptr_t, ::ActorSpawnRuleData>>
        mLoaderV0;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSpawnRuleDataLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorSpawnRuleDataLoader(
        ::cereal::ReflectionCtx const& ctx,
        ::PackLoadContext const&       packLoadContext,
        ::br::spawn::SpawnPlacements&  spawnPlacements
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::cereal::ReflectionCtx const& ctx,
        ::PackLoadContext const&       packLoadContext,
        ::br::spawn::SpawnPlacements&  spawnPlacements
    );
    // NOLINTEND
};
