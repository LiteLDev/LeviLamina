#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"
#include "mc/deps/puv/SlicedLoader.h"

// auto generated forward declare list
// clang-format off
struct ActorSpawnRuleData;
namespace Bedrock::Resources { class MinecraftDocumentInput; }
// clang-format on

class SpawnGroupDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::Puv::SlicedLoader<::ActorSpawnRuleData, nullptr_t, nullptr_t>> mLoader;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpawnGroupDataLoader();

    MCAPI ::Puv::LoadResult<::ActorSpawnRuleData> load(::Bedrock::Resources::MinecraftDocumentInput const& input) const;

    MCAPI ~SpawnGroupDataLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
