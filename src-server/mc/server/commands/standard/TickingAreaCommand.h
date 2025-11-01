#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

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
    enum class Mode : int {
        Add = 0,
        Remove = 1,
        RemoveAll = 2,
        List = 3,
        Preload = 4,
    };
    
    enum class AddAreaType : int {
        Bounds = 0,
        Circle = 1,
    };
    
    enum class TargetDimensions : int {
        CurrentDimension = 0,
        AllDimensions = 1,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk19391c;
    ::ll::UntypedStorage<4, 4> mUnk7a793e;
    ::ll::UntypedStorage<4, 4> mUnkcdee7f;
    ::ll::UntypedStorage<4, 16> mUnk1276ba;
    ::ll::UntypedStorage<4, 16> mUnk1ea27e;
    ::ll::UntypedStorage<8, 32> mUnk52f8ff;
    ::ll::UntypedStorage<4, 4> mUnk4f16a0;
    ::ll::UntypedStorage<1, 1> mUnk9d0811;
    ::ll::UntypedStorage<1, 1> mUnk6253a0;
    ::ll::UntypedStorage<1, 1> mUnk206b0d;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingAreaCommand& operator=(TickingAreaCommand const&);
    TickingAreaCommand(TickingAreaCommand const&);
    TickingAreaCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~TickingAreaCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _add(::CommandOrigin const& origin, ::CommandOutput& output, ::Level& level, ::Dimension& dimension) const;

    MCAPI void _list(::CommandOrigin const& origin, ::CommandOutput& output, ::Level& level, ::Dimension& dimension) const;

    MCAPI void _preload(::CommandOrigin const& origin, ::CommandOutput& output, ::Level& level, ::Dimension& dimension) const;

    MCAPI void _remove(::CommandOrigin const& origin, ::CommandOutput& output, ::Level& level, ::Dimension& dimension) const;

    MCAPI void _removeAll(::CommandOrigin const& origin, ::CommandOutput& output, ::Level& level, ::Dimension& dimension) const;
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
