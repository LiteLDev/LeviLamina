#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/CommandSelectorResults.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class DamageCommand : public ::Command {
public:
    // DamageCommand inner types define
    enum class DamageOrigin : uchar {
        None  = 0,
        Actor = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>            mTargets;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>            mDamager;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause> mCause;
    ::ll::TypedStorage<4, 4, int>                                     mAmount;
    ::ll::TypedStorage<1, 1, ::DamageCommand::DamageOrigin>           mDamageOrigin;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~DamageCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _applyDamage(
        ::CommandSelectorResults<::Actor>& targets,
        ::ActorDamageSource const&         source,
        ::CommandOutput&                   output
    ) const;
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
