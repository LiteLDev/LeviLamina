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

class TestForBlocksCommand : public ::Command {
public:
    // TestForBlocksCommand inner types define
    enum class Mode : int {
        All = 0,
        Masked = 1,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk210dfe;
    ::ll::UntypedStorage<4, 16> mUnka177b2;
    ::ll::UntypedStorage<4, 16> mUnkbc7407;
    ::ll::UntypedStorage<4, 4> mUnk2063c2;
    // NOLINTEND

public:
    // prevent constructor by default
    TestForBlocksCommand& operator=(TestForBlocksCommand const&);
    TestForBlocksCommand(TestForBlocksCommand const&);
    TestForBlocksCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~TestForBlocksCommand() /*override*/ = default;
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
