#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal {

struct UpgradeState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk1a352b;
    ::ll::UntypedStorage<8, 64> mUnk28558a;
    ::ll::UntypedStorage<8, 8>  mUnkc82809;
    ::ll::UntypedStorage<8, 80> mUnk594c36;
    ::ll::UntypedStorage<8, 80> mUnke95d77;
    // NOLINTEND

public:
    // prevent constructor by default
    UpgradeState& operator=(UpgradeState const&);
    UpgradeState(UpgradeState const&);
    UpgradeState();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~UpgradeState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv::internal
