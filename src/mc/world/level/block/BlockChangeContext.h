#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorChangeContext.h"
#include "mc/world/level/block/EnvironmentChangeContext.h"
#include "mc/world/level/block/StatelessBlockChangeContext.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
// clang-format on

class BlockChangeContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::
            variant<::std::monostate, ::EnvironmentChangeContext, ::ActorChangeContext, ::StatelessBlockChangeContext>>
        mContextSource;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Actor* getActorSource() const;

    MCAPI bool const hasValue() const;

    MCAPI bool const isMultiBlockBreakContext() const;

    MCAPI bool const isStatelessChangeContext(::StatelessBlockChangeContext type) const;

    MCAPI bool const shouldSendBlockBreakEvent() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BlockChangeContext actorChange(::Actor* actorContext);

    MCAPI static ::BlockChangeContext commandsChange();

    MCAPI static ::BlockChangeContext environmentChange(::BlockPos const& blockPos);

    MCAPI static ::BlockChangeContext multiBlockChange();

    MCAPI static ::BlockChangeContext scriptsChange();

    MCAPI static ::BlockChangeContext statelessChangeContext(::StatelessBlockChangeContext type);

    MCAPI static ::BlockChangeContext structureChange();
    // NOLINTEND
};
