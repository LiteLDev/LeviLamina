#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PhotoTransferPacket;
namespace Core { class Path; }
// clang-format on

struct PhotoTransferPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4ac13e;
    ::ll::UntypedStorage<8, 32> mUnk194787;
    ::ll::UntypedStorage<8, 32> mUnkfaf1c0;
    ::ll::UntypedStorage<1, 1>  mUnkae3d2c;
    ::ll::UntypedStorage<1, 1>  mUnk629b60;
    ::ll::UntypedStorage<8, 8>  mUnkdabc8b;
    ::ll::UntypedStorage<8, 32> mUnkf08a19;
    // NOLINTEND

public:
    // prevent constructor by default
    PhotoTransferPacketPayload(PhotoTransferPacketPayload const&);
    PhotoTransferPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::PhotoTransferPacketPayload& operator=(::PhotoTransferPacketPayload&&);

    MCNAPI ::PhotoTransferPacketPayload& operator=(::PhotoTransferPacketPayload const&);

    MCNAPI ~PhotoTransferPacketPayload();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static bool fromDisk(::Core::Path path, ::PhotoTransferPacket& result);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
