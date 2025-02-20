#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnkc71eee;
    ::ll::UntypedStorage<8, 176> mUnkca57bf;
    ::ll::UntypedStorage<1, 1>   mUnkf71bb0;
    ::ll::UntypedStorage<8, 8>   mUnk859219;
    ::ll::UntypedStorage<4, 8>   mUnkbefb52;
    ::ll::UntypedStorage<4, 4>   mUnk1168d3;
    ::ll::UntypedStorage<4, 4>   mUnke5b52b;
    ::ll::UntypedStorage<1, 1>   mUnk972237;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorFactoryData& operator=(ActorFactoryData const&);
    ActorFactoryData(ActorFactoryData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorFactoryData();

    MCAPI ~ActorFactoryData();
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
