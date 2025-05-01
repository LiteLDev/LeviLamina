#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
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

// auto generated forward declare list
// clang-format off
class Actor;
class BlockStateCommandParam;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Dimension;
class Scoreboard;
struct ScoreInfo;
struct ScoreboardId;
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

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual ::std::string getCommandName() const /*override*/;

        // vIndex: 0
        virtual ~ExecuteChainedSubcommand() /*override*/ = default;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::std::string
        getSubcommandName(::NewExecuteCommand::ExecuteChainedSubcommand::Subcommand subcommand);

        MCNAPI static void setup(::CommandRegistry& registry);
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static char const*& CHAINED_OPTION_0();

        MCAPI static char const*& CONDITION_SUBCOMMAND_OPTION_BLOCK();

        MCAPI static char const*& CONDITION_SUBCOMMAND_OPTION_BLOCKS();

        MCAPI static char const*& CONDITION_SUBCOMMAND_OPTION_ENTITY();

        MCAPI static char const*& CONDITION_SUBCOMMAND_OPTION_SCORE();

        MCAPI static char const*& SUBCOMMAND_ALIGN();

        MCAPI static char const*& SUBCOMMAND_ANCHORED();

        MCAPI static char const*& SUBCOMMAND_AS();

        MCAPI static char const*& SUBCOMMAND_AT();

        MCAPI static char const*& SUBCOMMAND_BLOCK();

        MCAPI static char const*& SUBCOMMAND_BLOCKS();

        MCAPI static char const*& SUBCOMMAND_ENTITY();

        MCAPI static char const*& SUBCOMMAND_FACING();

        MCAPI static char const*& SUBCOMMAND_IF();

        MCAPI static char const*& SUBCOMMAND_IN();

        MCAPI static char const*& SUBCOMMAND_OPTION_ALIGN();

        MCAPI static char const*& SUBCOMMAND_OPTION_ANCHORED();

        MCAPI static char const*& SUBCOMMAND_OPTION_AS();

        MCAPI static char const*& SUBCOMMAND_OPTION_AT();

        MCAPI static char const*& SUBCOMMAND_OPTION_ENTITY();

        MCAPI static char const*& SUBCOMMAND_OPTION_FACING();

        MCAPI static char const*& SUBCOMMAND_OPTION_IF_UNLESS();

        MCAPI static char const*& SUBCOMMAND_OPTION_IN();

        MCAPI static char const*& SUBCOMMAND_OPTION_POSITIONED();

        MCAPI static char const*& SUBCOMMAND_OPTION_ROTATED();

        MCAPI static char const*& SUBCOMMAND_OPTION_RUN();

        MCAPI static char const*& SUBCOMMAND_POSITIONED();

        MCAPI static char const*& SUBCOMMAND_ROTATED();

        MCAPI static char const*& SUBCOMMAND_RUN();

        MCAPI static char const*& SUBCOMMAND_SCORE();

        MCAPI static char const*& SUBCOMMAND_UNLESS();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::std::string $getCommandName() const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
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
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~NewExecuteCommand() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NewExecuteCommand();

    MCAPI void _commandOutputFail(::CommandOutput& output, ::std::optional<int> const& testPassCount) const;

    MCAPI void _commandOutputSuccess(::CommandOutput& output, ::std::optional<int> const& testPassCount) const;

    MCAPI bool _detectConditionSubcommand(
        ::CommandOrigin const& origin,
        ::CommandOutput&       output,
        ::std::optional<int>&  testPassCount
    ) const;

    MCAPI ::std::optional<::ScoreInfo> _getScoreFromSelectorOnObjective(
        ::Scoreboard const&               scoreboard,
        ::CommandSelector<::Actor> const& selector,
        ::std::string const&              objectiveName,
        ::CommandOrigin const&            origin,
        ::CommandOutput&                  output
    ) const;

    MCAPI ::std::optional<::ScoreboardId> _getScoreboardIdForSelector(
        ::Scoreboard const&               scoreboard,
        ::CommandSelector<::Actor> const& selector,
        ::CommandOrigin const&            origin,
        ::CommandOutput&                  output
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry, int newExecuteStartVersion);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
