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
    MCNAPI ActorInfoRegistry();

    MCNAPI uint getActorInfoId(uint64 const& name) const;

    MCNAPI uint getActorInfoId(::std::string const& name) const;

    MCNAPI ::std::vector<::ActorInfo> getActorInfoList() const;

    MCNAPI bool isSpawnEggAvailable(::std::string identifier);

    MCNAPI void registerActorInfo(::ActorInfo const& info);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
