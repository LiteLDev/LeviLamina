#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EmoteListPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkfc6f07;
    ::ll::UntypedStorage<8, 24> mUnk3cec0c;
    // NOLINTEND

public:
    // prevent constructor by default
    EmoteListPacketPayload& operator=(EmoteListPacketPayload const&);
    EmoteListPacketPayload(EmoteListPacketPayload const&);
    EmoteListPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::EmoteListPacketPayload& operator=(::EmoteListPacketPayload&&);

    MCNAPI ~EmoteListPacketPayload();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_EMOTE_PIECE_IDS();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
