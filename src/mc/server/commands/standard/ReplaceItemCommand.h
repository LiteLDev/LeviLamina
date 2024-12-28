#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
namespace Util { struct ReplacementResults; }
// clang-format on

class ReplaceItemCommand : public ::Command {
public:
    // ReplaceItemCommand inner types define
    enum class ReplaceMode : int {
        Destroy = 0,
        Keep    = 1,
    };

    enum class TargetType : int {
        Block     = 0,
        Entity    = 1,
        Undefined = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk6bda8f;
    ::ll::UntypedStorage<8, 200> mUnkb10f21;
    ::ll::UntypedStorage<4, 16>  mUnkbda761;
    ::ll::UntypedStorage<4, 4>   mUnk9efdb3;
    ::ll::UntypedStorage<4, 4>   mUnka83d6b;
    ::ll::UntypedStorage<4, 4>   mUnka988eb;
    ::ll::UntypedStorage<8, 8>   mUnkdbbbdc;
    ::ll::UntypedStorage<4, 4>   mUnk75667f;
    ::ll::UntypedStorage<4, 4>   mUnk81ecf3;
    ::ll::UntypedStorage<4, 4>   mUnk4dead2;
    ::ll::UntypedStorage<8, 16>  mUnke1eaec;
    ::ll::UntypedStorage<1, 1>   mUnkf5c953;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplaceItemCommand& operator=(ReplaceItemCommand const&);
    ReplaceItemCommand(ReplaceItemCommand const&);
    ReplaceItemCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~ReplaceItemCommand() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
    _outputError(::CommandOutput& output, ::Util::ReplacementResults errorDetails, ::std::string const& itemName) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
