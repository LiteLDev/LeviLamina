#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/CommandSelectorResults.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class MobEffect;
struct EffectDuration;
// clang-format on

class EffectCommand : public ::Command {
public:
    // EffectCommand inner types define
    enum class Mode : int {
        Add         = 0,
        Clear       = 1,
        AddInfinite = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>> mTargets;
    ::ll::TypedStorage<4, 4, ::EffectCommand::Mode>        mMode;
    ::ll::TypedStorage<8, 8, ::MobEffect const*>           mEffect;
    ::ll::TypedStorage<4, 4, int>                          mDuration;
    ::ll::TypedStorage<4, 4, int>                          mAmplifier;
    ::ll::TypedStorage<1, 1, bool>                         mHideParticles;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~EffectCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
    _add(::CommandSelectorResults<::Actor>& targets, ::CommandOutput& output, ::EffectDuration duration) const;

    MCAPI_C bool _checkIsValidAmplifierRange(::CommandOutput& output) const;

    MCAPI void _clearAllEffects(::CommandSelectorResults<::Actor>& targets, ::CommandOutput& output) const;

    MCAPI void _clearEffect(
        ::CommandSelectorResults<::Actor>& targets,
        ::CommandOutput&                   output,
        ::MobEffect const&                 effect,
        bool                               throwsErrorOnNoEffect
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
