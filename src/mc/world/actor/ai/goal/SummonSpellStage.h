#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SummonSpellStage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk69b1f1;
    ::ll::UntypedStorage<4, 4>   mUnk91f981;
    ::ll::UntypedStorage<4, 4>   mUnkd4cd24;
    ::ll::UntypedStorage<4, 4>   mUnkfc0a5b;
    ::ll::UntypedStorage<4, 4>   mUnk628fad;
    ::ll::UntypedStorage<4, 4>   mUnk9aac1f;
    ::ll::UntypedStorage<4, 4>   mUnk6f04b4;
    ::ll::UntypedStorage<8, 176> mUnkdcf734;
    ::ll::UntypedStorage<4, 4>   mUnkef7c0c;
    ::ll::UntypedStorage<4, 4>   mUnkf5ce6a;
    ::ll::UntypedStorage<4, 4>   mUnke574aa;
    ::ll::UntypedStorage<8, 32>  mUnkd9a9e1;
    // NOLINTEND

public:
    // prevent constructor by default
    SummonSpellStage(SummonSpellStage const&);
    SummonSpellStage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SummonSpellStage& operator=(::SummonSpellStage const&);

    MCAPI ~SummonSpellStage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
