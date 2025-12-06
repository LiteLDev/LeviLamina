#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorTextureInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnk2a7f2b;
    ::ll::UntypedStorage<8, 184> mUnk1d72d3;
    ::ll::UntypedStorage<4, 20>  mUnk8eac29;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorTextureInfo();

    MCNAPI ActorTextureInfo(::ActorTextureInfo&&);

    MCNAPI ActorTextureInfo(::ActorTextureInfo const&);

    MCNAPI ::ActorTextureInfo& operator=(::ActorTextureInfo const&);

    MCNAPI ::ActorTextureInfo& operator=(::ActorTextureInfo&&);

    MCNAPI ~ActorTextureInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ActorTextureInfo&&);

    MCNAPI void* $ctor(::ActorTextureInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
