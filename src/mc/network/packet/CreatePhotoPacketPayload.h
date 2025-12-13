#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CreatePhotoPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb65664;
    ::ll::UntypedStorage<8, 32> mUnkeddaa1;
    ::ll::UntypedStorage<8, 32> mUnkf8e142;
    // NOLINTEND

public:
    // prevent constructor by default
    CreatePhotoPacketPayload& operator=(CreatePhotoPacketPayload const&);
    CreatePhotoPacketPayload(CreatePhotoPacketPayload const&);
    CreatePhotoPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CreatePhotoPacketPayload& operator=(::CreatePhotoPacketPayload&&);

    MCNAPI ~CreatePhotoPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
