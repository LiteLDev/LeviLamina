#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandOperator.h"
#include "mc/server/commands/CommandWildcardInt.h"
#include "mc/server/commands/WildcardCommandSelector.h"
#include "mc/world/scores/ObjectiveSortOrder.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Scoreboard;
// clang-format on

class ScoreboardCommand : public ::Command {
public:
    // ScoreboardCommand inner types declare
    // clang-format off
    struct InitProxy;
    struct SetScoreOutput;
    // clang-format on

    // ScoreboardCommand inner types define
    enum class Action : int {
        Invalid    = 0,
        Add        = 1,
        List       = 2,
        Operation  = 3,
        Random     = 4,
        Remove     = 5,
        Reset      = 6,
        Set        = 7,
        SetDisplay = 8,
        Test       = 9,
    };

    enum class Category : int {
        Objectives = 0,
        Players    = 1,
    };

    struct InitProxy {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Scoreboard&> mScoreboard;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitProxy& operator=(InitProxy const&);
        InitProxy(InitProxy const&);
        InitProxy();
    };

    struct SetScoreOutput {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>            mSuccessCount;
        ::ll::TypedStorage<4, 4, int>            mFirstNewScore;
        ::ll::TypedStorage<8, 32, ::std::string> mFirstSuccess;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScoreboardCommand::Category>        mCategory;
    ::ll::TypedStorage<4, 4, ::ScoreboardCommand::Action>          mAction;
    ::ll::TypedStorage<8, 32, ::std::string>                       mObjective;
    ::ll::TypedStorage<8, 32, ::std::string>                       mSourceObjective;
    ::ll::TypedStorage<1, 1, ::ObjectiveSortOrder>                 mOrder;
    ::ll::TypedStorage<8, 32, ::std::string>                       mCriteria;
    ::ll::TypedStorage<8, 32, ::std::string>                       mName;
    ::ll::TypedStorage<8, 32, ::std::string>                       mDisplayName;
    ::ll::TypedStorage<8, 200, ::WildcardCommandSelector<::Actor>> mTargets;
    ::ll::TypedStorage<8, 200, ::WildcardCommandSelector<::Actor>> mSources;
    ::ll::TypedStorage<1, 1, ::CommandOperator>                    mOperator;
    ::ll::TypedStorage<4, 8, ::CommandWildcardInt>                 mMin;
    ::ll::TypedStorage<4, 8, ::CommandWildcardInt>                 mMax;
    ::ll::TypedStorage<4, 4, int>                                  mRandMin;
    ::ll::TypedStorage<4, 4, int>                                  mRandMax;
    ::ll::TypedStorage<4, 4, int>                                  mValue;
    ::ll::TypedStorage<1, 1, bool>                                 mTargetsSet;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry, ::ScoreboardCommand::InitProxy&& dependencies);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
