#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/RelativeFloat.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ChunkPos;
class CommandArea;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class SpreadPlayersCommand : public ::Command {
public:
    // SpreadPlayersCommand inner types define
    using CommandAreas = ::std::map<::ChunkPos, ::std::unique_ptr<::CommandArea>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>> mTargets;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>              mX;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>              maxHeight;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>              mZ;
    ::ll::TypedStorage<4, 4, float>                        mDistance;
    ::ll::TypedStorage<4, 4, float>                        mMaxRange;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
