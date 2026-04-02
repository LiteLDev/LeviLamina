#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandItem.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/world/actor/agent/agent_components/CollectionSpecification.h"
#include "mc/world/actor/agent/agent_components/Direction.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
namespace AgentCommands { class Command; }
// clang-format on

class AgentCommand : public ::Command {
public:
    // AgentCommand inner types declare
    // clang-format off
    struct CommandInfo;
    // clang-format on

    // AgentCommand inner types define
    enum class FacingResult : int {
        HaveFacing = 0,
        NoFacing   = 1,
        Error      = 2,
    };

    enum class Mode : int {
        Attack         = 0,
        Collect        = 1,
        Create         = 2,
        Detect         = 3,
        DetectRedstone = 4,
        Drop           = 5,
        DropAll        = 6,
        GetItemCount   = 7,
        GetItemDetail  = 8,
        GetItemSpace   = 9,
        GetPosition    = 10,
        InspectData    = 11,
        Move           = 12,
        Place          = 13,
        SetItem        = 14,
        Till           = 15,
        Tp             = 16,
        Transfer       = 17,
        Turn           = 18,
    };

    struct CommandInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::AgentCommand::Mode>                                                     mode;
        ::ll::TypedStorage<8, 8, char const*>                                                              name;
        ::ll::TypedStorage<8, 64, ::std::function<::std::unique_ptr<::AgentCommands::Command>(::Player&)>> function;
        // NOLINTEND
    };

    using AgentCommandFunction = ::std::function<::std::unique_ptr<::AgentCommands::Command>(::Player&)>;

    using AgentCommandReturnType = ::std::unique_ptr<::AgentCommands::Command>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::AgentCommand::Mode>                       mMode;
    ::ll::TypedStorage<1, 1, ::AgentComponents::CollectionSpecification> mCollectMode;
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction>               mDirection;
    ::ll::TypedStorage<8, 8, ::CommandItem>                              mItem;
    ::ll::TypedStorage<4, 4, int>                                        mSlot;
    ::ll::TypedStorage<4, 4, int>                                        mDestination;
    ::ll::TypedStorage<4, 4, int>                                        mQuantity;
    ::ll::TypedStorage<4, 4, int>                                        mAux;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                         mPos;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                         mFacing;
    ::ll::TypedStorage<1, 1, bool>                                       mIsPosSet;
    ::ll::TypedStorage<4, 4, ::AgentCommand::FacingResult>               mHaveFacing;
    ::ll::TypedStorage<4, 4, float>                                      mYRot;
    ::ll::TypedStorage<1, 1, bool>                                       mIsYRotSet;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~AgentCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void collect(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void createAgent(::Player& player, ::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void createAgentOutputSuccess(::CommandOutput& output, bool wasSpawned) const;

    MCAPI void directionCommand(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void drop(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void getPosition(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void itemCommand(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void place(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void reportSuccess(bool success, ::CommandOutput& output) const;

    MCAPI void setItem(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void tpAgent(::Player& player, ::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void transfer(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
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
