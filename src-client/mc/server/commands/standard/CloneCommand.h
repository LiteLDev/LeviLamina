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

class CloneCommand : public ::Command {
public:
    // CloneCommand inner types define
    enum class MaskMode : uint {};

    enum class CloneMode : uint {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk671ad6;
    ::ll::UntypedStorage<4, 16> mUnkd6681e;
    ::ll::UntypedStorage<4, 16> mUnkfb463c;
    ::ll::UntypedStorage<4, 4>  mUnkc2ba7c;
    ::ll::UntypedStorage<4, 4>  mUnk747e1c;
    ::ll::UntypedStorage<8, 8>  mUnk47641f;
    ::ll::UntypedStorage<8, 24> mUnk8c4eca;
    ::ll::UntypedStorage<4, 4>  mUnk14ceb4;
    // NOLINTEND

public:
    // prevent constructor by default
    CloneCommand& operator=(CloneCommand const&);
    CloneCommand(CloneCommand const&);
    CloneCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~CloneCommand() /*override*/ = default;
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
