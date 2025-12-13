#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameRulesChangedPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6240e9;
    // NOLINTEND

public:
    // prevent constructor by default
    GameRulesChangedPacketPayload& operator=(GameRulesChangedPacketPayload const&);
    GameRulesChangedPacketPayload(GameRulesChangedPacketPayload const&);
    GameRulesChangedPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::GameRulesChangedPacketPayload& operator=(::GameRulesChangedPacketPayload&&);
    // NOLINTEND
};
