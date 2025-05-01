#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
struct ActorSpawnRuleData;
namespace Bedrock::Resources { class MinecraftDocumentInput; }
// clang-format on

class SpawnGroupDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 208> mUnkff76e9;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnGroupDataLoader& operator=(SpawnGroupDataLoader const&);
    SpawnGroupDataLoader(SpawnGroupDataLoader const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpawnGroupDataLoader();

    MCNAPI ::Puv::LoadResult<::ActorSpawnRuleData> load(::Bedrock::Resources::MinecraftDocumentInput const& input
    ) const;

    MCNAPI ~SpawnGroupDataLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
