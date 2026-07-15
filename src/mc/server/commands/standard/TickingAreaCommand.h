#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandPosition.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class TickingAreaCommand : public ::Command {
public:
    // TickingAreaCommand inner types define
    enum class AddAreaType : int {
        Bounds = 0,
        Circle = 1,
    };

    enum class Mode : int {
        Add       = 0,
        Remove    = 1,
        RemoveAll = 2,
        List      = 3,
        Preload   = 4,
    };

    enum class TargetDimensions : int {
        CurrentDimension = 0,
        AllDimensions    = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TickingAreaCommand::Mode>             mMode;
    ::ll::TypedStorage<4, 4, ::TickingAreaCommand::AddAreaType>      mAddAreaType;
    ::ll::TypedStorage<4, 4, ::TickingAreaCommand::TargetDimensions> mTargetDimensions;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                     mPosition;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                     mMax;
    ::ll::TypedStorage<8, 32, ::std::string>                         mName;
    ::ll::TypedStorage<4, 4, int>                                    mRadius;
    ::ll::TypedStorage<1, 1, bool>                                   mUsePosition;
    ::ll::TypedStorage<1, 1, bool>                                   mPreloadValue;
    ::ll::TypedStorage<1, 1, bool>                                   mPreloadValueSet;
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
