#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameTestResultsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk622262;
    ::ll::UntypedStorage<8, 32> mUnkace44e;
    ::ll::UntypedStorage<1, 1>  mUnk429669;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestResultsPacketPayload& operator=(GameTestResultsPacketPayload const&);
    GameTestResultsPacketPayload(GameTestResultsPacketPayload const&);
    GameTestResultsPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::GameTestResultsPacketPayload& operator=(::GameTestResultsPacketPayload&&);

    MCNAPI ~GameTestResultsPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
