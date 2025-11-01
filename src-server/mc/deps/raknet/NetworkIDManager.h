#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class NetworkIDManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8192> mUnkfcc08d;
    ::ll::UntypedStorage<8, 8>    mUnk2bd39e;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkIDManager& operator=(NetworkIDManager const&);
    NetworkIDManager(NetworkIDManager const&);
    NetworkIDManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkIDManager() = default;
    // NOLINTEND
};

} // namespace RakNet
