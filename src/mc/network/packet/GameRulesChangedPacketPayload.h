#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/GameRulesChangedPacketData.h"

struct GameRulesChangedPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::GameRulesChangedPacketData> mRuleData;
    // NOLINTEND

public:
    // prevent constructor by default
    GameRulesChangedPacketPayload& operator=(GameRulesChangedPacketPayload const&);
    GameRulesChangedPacketPayload(GameRulesChangedPacketPayload const&);
    GameRulesChangedPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::GameRulesChangedPacketPayload& operator=(::GameRulesChangedPacketPayload&&);
    // NOLINTEND
};
