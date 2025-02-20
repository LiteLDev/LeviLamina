#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorInfo;
// clang-format on

class ActorInfoRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk57f6e9;
    ::ll::UntypedStorage<8, 64> mUnk701a9e;
    ::ll::UntypedStorage<4, 4>  mUnkc01a4f;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorInfoRegistry& operator=(ActorInfoRegistry const&);
    ActorInfoRegistry(ActorInfoRegistry const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorInfoRegistry();

    MCAPI uint getActorInfoId(uint64 const& name) const;

    MCAPI uint getActorInfoId(::std::string const& name) const;

    MCAPI bool isSpawnEggAvailable(::std::string identifier);

    MCAPI void registerActorInfo(::ActorInfo const& info);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
