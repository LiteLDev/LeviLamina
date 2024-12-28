#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PingedCompatibleServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk2ea269;
    ::ll::UntypedStorage<8, 32>  mUnkb8a0f9;
    ::ll::UntypedStorage<4, 4>   mUnke564b6;
    ::ll::UntypedStorage<4, 4>   mUnk130f1b;
    ::ll::UntypedStorage<8, 32>  mUnk3ec1fb;
    ::ll::UntypedStorage<4, 4>   mUnk3ea2c9;
    ::ll::UntypedStorage<4, 4>   mUnkd9f37a;
    ::ll::UntypedStorage<8, 32>  mUnk499929;
    ::ll::UntypedStorage<8, 136> mUnke52a42;
    ::ll::UntypedStorage<4, 4>   mUnkbc1dd6;
    ::ll::UntypedStorage<4, 4>   mUnk3ce443;
    ::ll::UntypedStorage<8, 16>  mUnk1289fb;
    ::ll::UntypedStorage<8, 8>   mUnkb0d1a5;
    ::ll::UntypedStorage<8, 8>   mUnk91ab3a;
    ::ll::UntypedStorage<4, 4>   mUnk702444;
    ::ll::UntypedStorage<8, 8>   mUnkf06804;
    ::ll::UntypedStorage<1, 1>   mUnk317f91;
    ::ll::UntypedStorage<1, 1>   mUnk30edaa;
    // NOLINTEND

public:
    // prevent constructor by default
    PingedCompatibleServer& operator=(PingedCompatibleServer const&);
    PingedCompatibleServer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PingedCompatibleServer(::PingedCompatibleServer&&);

    MCAPI PingedCompatibleServer(::PingedCompatibleServer const&);

    MCAPI ::PingedCompatibleServer& operator=(::PingedCompatibleServer&&);

    MCAPI ~PingedCompatibleServer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PingedCompatibleServer&&);

    MCAPI void* $ctor(::PingedCompatibleServer const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
