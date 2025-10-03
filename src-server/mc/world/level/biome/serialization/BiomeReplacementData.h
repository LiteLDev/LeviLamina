#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeReplacementData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnkaad449;
    ::ll::UntypedStorage<2, 2>  mUnk1cc353;
    ::ll::UntypedStorage<8, 24> mUnk2eda6a;
    ::ll::UntypedStorage<4, 4>  mUnk183706;
    ::ll::UntypedStorage<4, 4>  mUnk708bd2;
    ::ll::UntypedStorage<4, 4>  mUnkd77b9a;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeReplacementData& operator=(BiomeReplacementData const&);
    BiomeReplacementData(BiomeReplacementData const&);
    BiomeReplacementData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BiomeReplacementData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
