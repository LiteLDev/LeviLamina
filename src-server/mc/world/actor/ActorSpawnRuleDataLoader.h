#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
class IPackLoadContext;
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
    ::ll::UntypedStorage<8, 192> mUnkba8a95;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSpawnRuleDataLoader& operator=(ActorSpawnRuleDataLoader const&);
    ActorSpawnRuleDataLoader(ActorSpawnRuleDataLoader const&);
    ActorSpawnRuleDataLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorSpawnRuleDataLoader(
        ::cereal::ReflectionCtx const& ctx,
        ::IPackLoadContext const&      packLoadContext,
        ::br::spawn::SpawnPlacements&  spawnPlacements
    );

    MCNAPI ::Puv::LoadResult<::ActorSpawnRuleData>
    load(::Bedrock::Resources::MinecraftDocumentInput const& input) const;

    MCNAPI ~ActorSpawnRuleDataLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::cereal::ReflectionCtx const& ctx,
        ::IPackLoadContext const&      packLoadContext,
        ::br::spawn::SpawnPlacements&  spawnPlacements
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
