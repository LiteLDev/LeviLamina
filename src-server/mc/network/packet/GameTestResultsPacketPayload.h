#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameTestResultsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mTestName;
    ::ll::TypedStorage<8, 32, ::std::string> mError;
    ::ll::TypedStorage<1, 1, bool>           mSucceeded;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestResultsPacketPayload& operator=(GameTestResultsPacketPayload const&);
    GameTestResultsPacketPayload(GameTestResultsPacketPayload const&);
    GameTestResultsPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::GameTestResultsPacketPayload& operator=(::GameTestResultsPacketPayload&&);

    MCAPI ~GameTestResultsPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
