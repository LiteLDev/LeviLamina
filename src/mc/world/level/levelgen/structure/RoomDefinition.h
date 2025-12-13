#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RoomDefinition : public ::std::enable_shared_from_this<::RoomDefinition> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk654d70;
    ::ll::UntypedStorage<8, 24> mUnk3acb23;
    ::ll::UntypedStorage<8, 32> mUnkadc49e;
    ::ll::UntypedStorage<1, 1>  mUnkcd1747;
    ::ll::UntypedStorage<1, 1>  mUnk7b0389;
    ::ll::UntypedStorage<4, 4>  mUnk51d545;
    // NOLINTEND

public:
    // prevent constructor by default
    RoomDefinition& operator=(RoomDefinition const&);
    RoomDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RoomDefinition(::RoomDefinition const&);

    MCNAPI explicit RoomDefinition(int roomIndex);

    MCNAPI bool findSource(int scanIndex);

    MCNAPI void setConnection(uchar const& direction, ::std::shared_ptr<::RoomDefinition> definition);

    MCNAPI ~RoomDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RoomDefinition const&);

    MCNAPI void* $ctor(int roomIndex);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
