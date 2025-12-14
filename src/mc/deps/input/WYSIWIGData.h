#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/enums/WYSIWYGState.h"

struct WYSIWIGData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::set<uint>> mActiveControlOptions;
    ::ll::TypedStorage<1, 1, bool>              mOtherConfigsExistInThisCategory;
    ::ll::TypedStorage<4, 4, int>               mNumberOfActiveConfigs;
    ::ll::TypedStorage<4, 4, int>               mNumberOfEnabledConfigs;
    ::ll::TypedStorage<4, 4, ::WYSIWYGState>    mWYSIWYGState;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ~WYSIWIGData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};
