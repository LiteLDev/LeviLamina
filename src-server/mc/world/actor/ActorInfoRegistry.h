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
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, uint>> mActorInfoNameMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::ActorInfo>> mActorInfoMap;
    ::ll::TypedStorage<4, 4, uint> mLastId;
    // NOLINTEND

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
