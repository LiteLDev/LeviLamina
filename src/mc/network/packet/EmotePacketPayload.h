#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"

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
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mRuntimeId;
    ::ll::TypedStorage<8, 32, ::std::string>   mPieceId;
    ::ll::TypedStorage<4, 4, uint>             mEmoteTicks;
    ::ll::TypedStorage<8, 32, ::std::string>   mXuid;
    ::ll::TypedStorage<8, 32, ::std::string>   mPlatformId;
    ::ll::TypedStorage<1, 1, uchar>            mFlags;
    // NOLINTEND

public:
    // prevent constructor by default
    EmotePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EmotePacketPayload(::EmotePacketPayload const&);

#ifdef LL_PLAT_C
    MCAPI EmotePacketPayload(
        ::ActorRuntimeID     runtimeId,
        ::std::string const& pieceId,
        uint                 emoteTicks,
        ::std::string const& xuid,
        ::std::string const& platformId
    );

    MCAPI bool isEmoteChatMuted() const;
#endif

    MCAPI bool isServerSide() const;

    MCAPI ::EmotePacketPayload& operator=(::EmotePacketPayload&&);

    MCAPI ::EmotePacketPayload& operator=(::EmotePacketPayload const&);

    MCAPI void setEmoteChatMute();

    MCAPI void setServerSide();

    MCAPI ~EmotePacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::EmotePacketPayload const&);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::ActorRuntimeID     runtimeId,
        ::std::string const& pieceId,
        uint                 emoteTicks,
        ::std::string const& xuid,
        ::std::string const& platformId
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
