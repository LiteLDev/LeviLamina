#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EduUriResourcePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk9a4f2d;
    // NOLINTEND

public:
    // prevent constructor by default
    EduUriResourcePacketPayload& operator=(EduUriResourcePacketPayload const&);
    EduUriResourcePacketPayload(EduUriResourcePacketPayload const&);
    EduUriResourcePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EduUriResourcePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
