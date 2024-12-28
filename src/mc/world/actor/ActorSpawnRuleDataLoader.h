#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
struct ActorSpawnRuleData;
namespace Bedrock::Resources { class MinecraftDocumentInput; }
// clang-format on

class ActorSpawnRuleDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 368> mUnk952f41;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSpawnRuleDataLoader& operator=(ActorSpawnRuleDataLoader const&);
    ActorSpawnRuleDataLoader(ActorSpawnRuleDataLoader const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorSpawnRuleDataLoader();

    MCAPI ::Puv::LoadResult<::ActorSpawnRuleData> load(::Bedrock::Resources::MinecraftDocumentInput const& input) const;

    MCAPI ~ActorSpawnRuleDataLoader();
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
