#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TropicalFishInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk3b9921;
    ::ll::UntypedStorage<4, 4>  mUnk2180f3;
    ::ll::UntypedStorage<4, 4>  mUnkcb6dfe;
    ::ll::UntypedStorage<4, 4>  mUnkc93f85;
    ::ll::UntypedStorage<8, 32> mUnkb5a9ab;
    // NOLINTEND

public:
    // prevent constructor by default
    TropicalFishInfo& operator=(TropicalFishInfo const&);
    TropicalFishInfo(TropicalFishInfo const&);
    TropicalFishInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TropicalFishInfo(int color, int color2, int variant, int markVariant, ::std::string name);

    MCAPI ~TropicalFishInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int color, int color2, int variant, int markVariant, ::std::string name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
