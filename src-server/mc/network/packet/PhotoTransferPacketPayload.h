#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/storage/PhotoType.h"

struct PhotoTransferPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mPhotoName;
    ::ll::TypedStorage<8, 32, ::std::string> mPhotoData;
    ::ll::TypedStorage<8, 32, ::std::string> mBookId;
    ::ll::TypedStorage<1, 1, ::PhotoType> mType;
    ::ll::TypedStorage<1, 1, ::PhotoType> mSourceType;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mOwnerId;
    ::ll::TypedStorage<8, 32, ::std::string> mNewPhotoName;
    // NOLINTEND

public:
    // prevent constructor by default
    PhotoTransferPacketPayload(PhotoTransferPacketPayload const&);
    PhotoTransferPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::PhotoTransferPacketPayload& operator=(::PhotoTransferPacketPayload&&);

    MCAPI ::PhotoTransferPacketPayload& operator=(::PhotoTransferPacketPayload const&);

    MCAPI ~PhotoTransferPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
