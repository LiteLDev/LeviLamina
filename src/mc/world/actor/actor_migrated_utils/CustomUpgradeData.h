#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorMigratedUtils {

struct CustomUpgradeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8a4ed1;
    ::ll::UntypedStorage<8, 8>  mUnk873a28;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomUpgradeData& operator=(CustomUpgradeData const&);
    CustomUpgradeData(CustomUpgradeData const&);
    CustomUpgradeData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CustomUpgradeData(::ActorMigratedUtils::CustomUpgradeData&&);

    MCNAPI ~CustomUpgradeData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorMigratedUtils::CustomUpgradeData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ActorMigratedUtils
