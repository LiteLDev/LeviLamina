#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

struct EmoteListPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>            mRuntimeId;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::UUID>> mEmotePieceIds;
    // NOLINTEND

public:
    // prevent constructor by default
    EmoteListPacketPayload& operator=(EmoteListPacketPayload const&);
    EmoteListPacketPayload(EmoteListPacketPayload const&);
    EmoteListPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::EmoteListPacketPayload& operator=(::EmoteListPacketPayload&&);

    MCAPI ~EmoteListPacketPayload();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_EMOTE_PIECE_IDS();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
