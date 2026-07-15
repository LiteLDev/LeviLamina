#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandBlockName.h"
#include "mc/server/commands/CommandChainedSubcommand.h"
#include "mc/server/commands/CommandCompareOperator.h"
#include "mc/server/commands/CommandIntegerRange.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/RelativeFloat.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockStateCommandParam;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class NewExecuteCommand : public ::Command {
public:
    // NewExecuteCommand inner types declare
    // clang-format off
    class ExecuteChainedSubcommand;
    // clang-format on

    // NewExecuteCommand inner types define
    class ExecuteChainedSubcommand : public ::CommandChainedSubcommand {
    public:
        // ExecuteChainedSubcommand inner types define
        enum class ConditionSubcommand : int {
            None   = 0,
            Block  = 1,
            Blocks = 2,
            Entity = 3,
            Score  = 4,
        };

        enum class ScanMode : int {
            All    = 0,
            Masked = 1,
        };

        enum class ScoreRangeMode : int {
            Off = 0,
            On  = 1,
        };

        enum class Subcommand : int {
            None       = 0,
            As         = 1,
            At         = 2,
            In         = 3,
            Positioned = 4,
            Rotated    = 5,
            Facing     = 6,
            Entity     = 7,
            Align      = 8,
            Anchored   = 9,
            If         = 10,
            Unless     = 11,
            Run        = 12,
        };

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::std::string getCommandName() const /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::NewExecuteCommand::ExecuteChainedSubcommand::Subcommand> mSubcommandOption;
    ::ll::TypedStorage<4, 4, ::NewExecuteCommand::ExecuteChainedSubcommand::Subcommand> mSecondarySubcommandOption;
    ::ll::TypedStorage<4, 4, ::NewExecuteCommand::ExecuteChainedSubcommand::ConditionSubcommand>
                                                                                            mConditionSubcommandOption;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>                                  mTargets;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>                                  mSources;
    ::ll::TypedStorage<8, 32, ::std::string>                                                mAxesAlignment;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorLocation>                          mActorLocation;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>                                       mPosition;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                                            mBlockPosition;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                                            mEndPosition;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                                            mDestination;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>                                               mRotationX;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>                                               mRotationY;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                               mTargetDimension;
    ::ll::TypedStorage<8, 8, ::CommandBlockName>                                            mBlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockStateCommandParam>>                      mBlockStates;
    ::ll::TypedStorage<4, 4, int>                                                           mBlockData;
    ::ll::TypedStorage<4, 4, ::NewExecuteCommand::ExecuteChainedSubcommand::ScanMode>       mScanMode;
    ::ll::TypedStorage<8, 32, ::std::string>                                                mTargetScoreObjective;
    ::ll::TypedStorage<8, 32, ::std::string>                                                mSourceScoreObjective;
    ::ll::TypedStorage<1, 1, ::CommandCompareOperator>                                      mCompareOperator;
    ::ll::TypedStorage<4, 4, ::NewExecuteCommand::ExecuteChainedSubcommand::ScoreRangeMode> mRangeMode;
    ::ll::TypedStorage<4, 12, ::CommandIntegerRange>                                        mRange;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Command>>                                  mCommand;
    ::ll::TypedStorage<8, 16, ::NewExecuteCommand::ExecuteChainedSubcommand>                mChainedCommand;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry, int newExecuteStartVersion);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
