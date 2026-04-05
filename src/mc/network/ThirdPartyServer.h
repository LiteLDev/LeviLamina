#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ThirdPartyServer {
public:
    // ThirdPartyServer inner types declare
    // clang-format off
    struct AvailableGame;
    // clang-format on

    // ThirdPartyServer inner types define
    struct AvailableGame {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkb79660;
        ::ll::UntypedStorage<8, 32> mUnk41db28;
        ::ll::UntypedStorage<8, 32> mUnk59a9eb;
        ::ll::UntypedStorage<8, 32> mUnkcbcd98;
        // NOLINTEND

    public:
        // prevent constructor by default
        AvailableGame& operator=(AvailableGame const&);
        AvailableGame(AvailableGame const&);
        AvailableGame();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ~AvailableGame();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkffba03;
    ::ll::UntypedStorage<8, 32> mUnk9f859a;
    ::ll::UntypedStorage<8, 32> mUnk3fadde;
    ::ll::UntypedStorage<8, 32> mUnk2cfcd0;
    ::ll::UntypedStorage<8, 24> mUnke5c0bb;
    ::ll::UntypedStorage<8, 32> mUnka1f92e;
    ::ll::UntypedStorage<8, 24> mUnka01361;
    ::ll::UntypedStorage<8, 32> mUnkb40281;
    ::ll::UntypedStorage<8, 32> mUnk28b564;
    ::ll::UntypedStorage<8, 32> mUnk6a9d9c;
    ::ll::UntypedStorage<8, 32> mUnk355d8b;
    ::ll::UntypedStorage<8, 32> mUnka71eec;
    ::ll::UntypedStorage<8, 32> mUnk4c7a20;
    ::ll::UntypedStorage<8, 32> mUnk378853;
    ::ll::UntypedStorage<8, 32> mUnk83a3e3;
    ::ll::UntypedStorage<8, 32> mUnk6a061b;
    ::ll::UntypedStorage<2, 2>  mUnk571140;
    ::ll::UntypedStorage<1, 1>  mUnk6977bb;
    ::ll::UntypedStorage<1, 1>  mUnk1d5f2b;
    ::ll::UntypedStorage<4, 8>  mUnk2eacee;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ThirdPartyServer& operator=(ThirdPartyServer const&);
    ThirdPartyServer(ThirdPartyServer const&);
    ThirdPartyServer();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ThirdPartyServer& operator=(ThirdPartyServer const&);
    ThirdPartyServer(ThirdPartyServer const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ThirdPartyServer();

    MCNAPI ~ThirdPartyServer();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
