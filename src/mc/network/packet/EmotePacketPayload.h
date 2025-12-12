#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EmotePacketPayload {
public:
    // EmotePacketPayload inner types define
    enum class Flags : uchar {
        ServerSide    = 1,
        MuteEmoteChat = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk691c9c;
    ::ll::UntypedStorage<8, 32> mUnkc0d6c9;
    ::ll::UntypedStorage<4, 4>  mUnk54c44d;
    ::ll::UntypedStorage<8, 32> mUnkf74a0a;
    ::ll::UntypedStorage<8, 32> mUnk7ff573;
    ::ll::UntypedStorage<1, 1>  mUnk2ca166;
    // NOLINTEND

public:
    // prevent constructor by default
    EmotePacketPayload(EmotePacketPayload const&);
    EmotePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::EmotePacketPayload& operator=(::EmotePacketPayload&&);

    MCNAPI ::EmotePacketPayload& operator=(::EmotePacketPayload const&);

    MCNAPI ~EmotePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
