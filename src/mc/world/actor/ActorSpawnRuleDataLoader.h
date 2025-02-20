#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
struct ActorSpawnRuleData;
namespace Bedrock::Resources { class MinecraftDocumentInput; }
namespace br::spawn { class SpawnPlacements; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ActorSpawnRuleDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk7467cf;
    ::ll::UntypedStorage<8, 208> mUnkba8a95;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSpawnRuleDataLoader& operator=(ActorSpawnRuleDataLoader const&);
    ActorSpawnRuleDataLoader(ActorSpawnRuleDataLoader const&);
    ActorSpawnRuleDataLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorSpawnRuleDataLoader(::cereal::ReflectionCtx const& ctx, ::br::spawn::SpawnPlacements& spawnPlacements);

    MCAPI ::Puv::LoadResult<::ActorSpawnRuleData> load(::Bedrock::Resources::MinecraftDocumentInput const& input) const;

    MCAPI ~ActorSpawnRuleDataLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx, ::br::spawn::SpawnPlacements& spawnPlacements);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
