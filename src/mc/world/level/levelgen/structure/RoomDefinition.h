#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RoomDefinition : public ::std::enable_shared_from_this<::RoomDefinition> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                 mIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::RoomDefinition>>> mConnections;
    ::ll::TypedStorage<8, 32, ::std::vector<bool>>                                mHasOpening;
    ::ll::TypedStorage<1, 1, bool>                                                mClaimed;
    ::ll::TypedStorage<1, 1, bool>                                                mIsSource;
    ::ll::TypedStorage<4, 4, int>                                                 mScanIndex;
    // NOLINTEND
};
