#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class GameRule;
class GameRules;
namespace Json { class Value; }
// clang-format on

class GameRuleCommand : public ::Command {
public:
    // GameRuleCommand inner types declare
    // clang-format off
    struct InitProxy;
    // clang-format on

    // GameRuleCommand inner types define
    struct InitProxy {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::GameRules&> mGameRules;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitProxy& operator=(InitProxy const&);
        InitProxy(InitProxy const&);
        InitProxy();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mGameRule;
    ::ll::TypedStorage<4, 4, float>          mFloatValue;
    ::ll::TypedStorage<4, 4, int>            mIntValue;
    ::ll::TypedStorage<1, 1, bool>           mBoolValue;
    ::ll::TypedStorage<1, 1, bool>           mBoolValueSet;
    ::ll::TypedStorage<1, 1, bool>           mIntValueSet;
    ::ll::TypedStorage<1, 1, bool>           mFloatValueSet;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~GameRuleCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void getGameRule(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void setGameRule(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    createJsonIndex(::std::string const& ruleName, ::GameRule const& rule, ::Json::Value& json, ::std::string* value);

    MCAPI static void setup(::CommandRegistry& registry, ::GameRuleCommand::InitProxy&& dependencies);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
