#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
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
        Add = 0,
        Clear = 1,
        AddInfinite = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200> mUnk85cfae;
    ::ll::UntypedStorage<4, 4> mUnkf69413;
    ::ll::UntypedStorage<8, 8> mUnkf22c7d;
    ::ll::UntypedStorage<4, 4> mUnkfd7f67;
    ::ll::UntypedStorage<4, 4> mUnk1dc2c6;
    ::ll::UntypedStorage<1, 1> mUnkfc96bd;
    // NOLINTEND

public:
    // prevent constructor by default
    EffectCommand& operator=(EffectCommand const&);
    EffectCommand(EffectCommand const&);
    EffectCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~EffectCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _add(::CommandSelectorResults<::Actor>& targets, ::CommandOutput& output, ::EffectDuration duration) const;

    MCAPI bool _checkIsValidAmplifierRange(::CommandOutput& output) const;

    MCAPI bool _checkIsValidDuration(::CommandOutput& output) const;

    MCAPI void _clearAllEffects(::CommandSelectorResults<::Actor>& targets, ::CommandOutput& output) const;

    MCAPI void _clearEffect(::CommandSelectorResults<::Actor>& targets, ::CommandOutput& output, ::MobEffect const& effect, bool throwsErrorOnNoEffect) const;
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
