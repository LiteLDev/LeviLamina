#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameRule;
// clang-format on

class GameRulesChangedPacketData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::GameRule>> mRules;
    // NOLINTEND

public:
    // prevent constructor by default
    GameRulesChangedPacketData& operator=(GameRulesChangedPacketData const&);
    GameRulesChangedPacketData(GameRulesChangedPacketData const&);
    GameRulesChangedPacketData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::GameRulesChangedPacketData& operator=(::GameRulesChangedPacketData&&);

    MCNAPI void setRules(::std::vector<::GameRule> rules);

    MCNAPI ~GameRulesChangedPacketData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
