#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BossbarInfo;
// clang-format on

class BossbarManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::BossbarInfo>> mBossbars;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BossbarManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
