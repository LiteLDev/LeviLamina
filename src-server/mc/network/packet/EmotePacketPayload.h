#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"

struct EmotePacketPayload {
public:
    // EmotePacketPayload inner types define
    enum class Flags : uchar {
        ServerSide = 1,
        MuteEmoteChat = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mRuntimeId;
    ::ll::TypedStorage<8, 32, ::std::string> mPieceId;
    ::ll::TypedStorage<4, 4, uint> mEmoteTicks;
    ::ll::TypedStorage<8, 32, ::std::string> mXuid;
    ::ll::TypedStorage<8, 32, ::std::string> mPlatformId;
    ::ll::TypedStorage<1, 1, uchar> mFlags;
    // NOLINTEND

public:
    // prevent constructor by default
    EmotePacketPayload(EmotePacketPayload const&);
    EmotePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::EmotePacketPayload& operator=(::EmotePacketPayload&&);

    MCAPI ::EmotePacketPayload& operator=(::EmotePacketPayload const&);

    MCAPI ~EmotePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
