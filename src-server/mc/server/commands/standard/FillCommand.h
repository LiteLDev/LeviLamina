#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class FillCommand : public ::Command {
public:
    // FillCommand inner types define
    enum class FillMode : int {
        Replace = 0,
        Destroy = 1,
        Hollow = 2,
        Outline = 3,
        Keep = 4,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkd4781f;
    ::ll::UntypedStorage<4, 16> mUnk684e91;
    ::ll::UntypedStorage<8, 8> mUnk4fb7fe;
    ::ll::UntypedStorage<8, 8> mUnk4a3805;
    ::ll::UntypedStorage<8, 24> mUnk2f9ed1;
    ::ll::UntypedStorage<8, 24> mUnk487324;
    ::ll::UntypedStorage<4, 4> mUnkb7c541;
    ::ll::UntypedStorage<4, 4> mUnk70585d;
    ::ll::UntypedStorage<4, 4> mUnk741113;
    // NOLINTEND

public:
    // prevent constructor by default
    FillCommand& operator=(FillCommand const&);
    FillCommand(FillCommand const&);
    FillCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~FillCommand() /*override*/ = default;
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
