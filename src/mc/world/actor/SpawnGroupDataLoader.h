#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
struct ActorSpawnRuleData;
namespace Bedrock::Resources { class MinecraftDocumentInput; }
// clang-format on

class SpawnGroupDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 368> mUnkfb070f;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnGroupDataLoader& operator=(SpawnGroupDataLoader const&);
    SpawnGroupDataLoader(SpawnGroupDataLoader const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpawnGroupDataLoader();

    MCAPI ::SemVersion const& firstCerealSlice() const;

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
    MCAPI void $dtor();
    // NOLINTEND
};
