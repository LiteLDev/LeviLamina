#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MovementDataExtractionUtility {

struct StorageIDPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk58532b;
    ::ll::UntypedStorage<8, 8> mUnk52e9d9;
    ::ll::UntypedStorage<4, 4> mUnk284355;
    ::ll::UntypedStorage<4, 4> mUnk693714;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageIDPair& operator=(StorageIDPair const&);
    StorageIDPair(StorageIDPair const&);
    StorageIDPair();

};

}
