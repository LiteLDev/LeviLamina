#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestRuleHelper.h"

namespace gametest {

class GameTestRuleHelper : public ::gametest::IGameTestRuleHelper {
public:
    // GameTestRuleHelper inner types declare
    // clang-format off
    struct GameRuleInfo;
    // clang-format on

    // GameTestRuleHelper inner types define
    struct GameRuleInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk79ff04;
        ::ll::UntypedStorage<1, 1> mUnk11ddbd;
        ::ll::UntypedStorage<4, 4> mUnk78bc1f;
        // NOLINTEND

    public:
        // prevent constructor by default
        GameRuleInfo& operator=(GameRuleInfo const&);
        GameRuleInfo(GameRuleInfo const&);
        GameRuleInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk849153;
    ::ll::UntypedStorage<1, 1>  mUnk5d4cbc;
    ::ll::UntypedStorage<8, 24> mUnkdf3a36;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestRuleHelper& operator=(GameTestRuleHelper const&);
    GameTestRuleHelper(GameTestRuleHelper const&);
    GameTestRuleHelper();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameTestRuleHelper() /*override*/;

    // vIndex: 1
    virtual void addRuleToClear(int ruleID) /*override*/;

    // vIndex: 2
    virtual void clearRules() /*override*/;

    // vIndex: 3
    virtual void restoreRules() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addRuleToClear(int ruleID);

    MCAPI void $clearRules();

    MCAPI void $restoreRules();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace gametest
