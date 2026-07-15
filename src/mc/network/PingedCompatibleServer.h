#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PingedCompatibleServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk8523a7;
    ::ll::UntypedStorage<8, 32>  mUnk3d7aec;
    ::ll::UntypedStorage<4, 4>   mUnke564b6;
    ::ll::UntypedStorage<4, 4>   mUnk130f1b;
    ::ll::UntypedStorage<8, 32>  mUnk4e7dc2;
    ::ll::UntypedStorage<4, 4>   mUnk3ea2c9;
    ::ll::UntypedStorage<4, 4>   mUnkd9f37a;
    ::ll::UntypedStorage<8, 32>  mUnk6c3bb8;
    ::ll::UntypedStorage<8, 136> mUnke52a42;
    ::ll::UntypedStorage<4, 4>   mUnkbc1dd6;
    ::ll::UntypedStorage<4, 4>   mUnk3ce443;
    ::ll::UntypedStorage<8, 16>  mUnk1289fb;
    ::ll::UntypedStorage<8, 8>   mUnkb0d1a5;
    ::ll::UntypedStorage<8, 24>  mUnk59a07a;
    ::ll::UntypedStorage<4, 4>   mUnk702444;
    ::ll::UntypedStorage<2, 2>   mUnk89225c;
    ::ll::UntypedStorage<8, 8>   mUnkf06804;
    ::ll::UntypedStorage<1, 1>   mUnk317f91;
    ::ll::UntypedStorage<1, 1>   mUnk30edaa;
    ::ll::UntypedStorage<1, 2>   mUnke83298;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    PingedCompatibleServer& operator=(PingedCompatibleServer const&);
    PingedCompatibleServer();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    PingedCompatibleServer();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PingedCompatibleServer(::PingedCompatibleServer const&);

#ifdef LL_PLAT_C
    MCNAPI ::std::string getId() const;
#endif

    MCNAPI ::PingedCompatibleServer& operator=(::PingedCompatibleServer&&);

#ifdef LL_PLAT_C
    MCNAPI ::PingedCompatibleServer& operator=(::PingedCompatibleServer const&);
#endif

    MCNAPI ~PingedCompatibleServer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PingedCompatibleServer const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
