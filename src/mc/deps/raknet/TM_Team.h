#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class TM_Team {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkdc023c;
    ::ll::UntypedStorage<8, 8>  mUnkaa432f;
    ::ll::UntypedStorage<8, 16> mUnk38aa40;
    ::ll::UntypedStorage<1, 1>  mUnk29b4b9;
    ::ll::UntypedStorage<1, 1>  mUnk3b7007;
    ::ll::UntypedStorage<2, 2>  mUnk170740;
    ::ll::UntypedStorage<8, 8>  mUnk689fc9;
    // NOLINTEND

public:
    // prevent constructor by default
    TM_Team& operator=(TM_Team const&);
    TM_Team(TM_Team const&);
    TM_Team();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TM_Team();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace RakNet
