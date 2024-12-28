#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class RecoveryManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk338fb1;
    ::ll::UntypedStorage<8, 8>  mUnkf8e5da;
    ::ll::UntypedStorage<8, 24> mUnk699312;
    ::ll::UntypedStorage<8, 24> mUnkc7d46d;
    ::ll::UntypedStorage<8, 24> mUnk775e22;
    // NOLINTEND

public:
    // prevent constructor by default
    RecoveryManager& operator=(RecoveryManager const&);
    RecoveryManager(RecoveryManager const&);
    RecoveryManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RecoveryManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SFAT
