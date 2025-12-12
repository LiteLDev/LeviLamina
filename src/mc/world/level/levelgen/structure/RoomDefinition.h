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

public:
    // prevent constructor by default
    RoomDefinition& operator=(RoomDefinition const&);
    RoomDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RoomDefinition(::RoomDefinition const&);

    MCAPI explicit RoomDefinition(int roomIndex);

    MCAPI bool findSource(int scanIndex);

    MCAPI void setConnection(uchar const& direction, ::std::shared_ptr<::RoomDefinition> definition);

    MCAPI ~RoomDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::RoomDefinition const&);

    MCAPI void* $ctor(int roomIndex);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
