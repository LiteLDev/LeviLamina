#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class GameConnectionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>   mUnk206dd6;
    ::ll::UntypedStorage<8, 32>  mUnkc765ce;
    ::ll::UntypedStorage<8, 32>  mUnk26dcb3;
    ::ll::UntypedStorage<4, 4>   mUnk2115f0;
    ::ll::UntypedStorage<8, 16>  mUnk76ec07;
    ::ll::UntypedStorage<8, 8>   mUnkb3e742;
    ::ll::UntypedStorage<8, 168> mUnk508ac9;
    ::ll::UntypedStorage<8, 136> mUnkd989b0;
    ::ll::UntypedStorage<1, 1>   mUnk28f2a6;
    // NOLINTEND

public:
    // prevent constructor by default
    GameConnectionInfo(GameConnectionInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameConnectionInfo();

    MCNAPI ::Social::GameConnectionInfo& operator=(::Social::GameConnectionInfo const&);

    MCNAPI ~GameConnectionInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
