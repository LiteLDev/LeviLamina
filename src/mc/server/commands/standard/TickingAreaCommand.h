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
class Dimension;
class Level;
struct TickingAreaDescription;
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
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~TickingAreaCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
    _add(::CommandOrigin const& origin, ::CommandOutput& output, ::Level& level, ::Dimension& dimension) const;

    MCAPI void
    _list(::CommandOrigin const& origin, ::CommandOutput& output, ::Level& level, ::Dimension& dimension) const;

    MCAPI void
    _preload(::CommandOrigin const& origin, ::CommandOutput& output, ::Level& level, ::Dimension& dimension) const;

    MCAPI void
    _remove(::CommandOrigin const& origin, ::CommandOutput& output, ::Level& level, ::Dimension& dimension) const;

    MCAPI void
    _removeAll(::CommandOrigin const& origin, ::CommandOutput& output, ::Level& level, ::Dimension& dimension) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string formatTickingAreaList(::std::vector<::TickingAreaDescription> const& tickingAreas);

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
