#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
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
    ::ll::UntypedStorage<8, 200> mUnk643088;
    ::ll::UntypedStorage<8, 200> mUnk250bbd;
    ::ll::UntypedStorage<4, 4>   mUnk79080c;
    ::ll::UntypedStorage<4, 4>   mUnk598fc7;
    ::ll::UntypedStorage<1, 1>   mUnk507f07;
    // NOLINTEND

public:
    // prevent constructor by default
    DamageCommand& operator=(DamageCommand const&);
    DamageCommand(DamageCommand const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~DamageCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DamageCommand();

    MCAPI void
    _applyDamage(::CommandSelectorResults<::Actor>& targets, ::ActorDamageSource const& source, ::CommandOutput& output)
        const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
