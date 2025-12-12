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

class CameraAimAssistCommand : public ::Command {
public:
    // CameraAimAssistCommand inner types define
    enum class Action : uchar {
        Set   = 0,
        Clear = 1,
    };

    enum class TargetMode : uchar {
        Distance = 0,
        Angle    = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200> mUnkfe71c2;
    ::ll::UntypedStorage<8, 32>  mUnk36dbd0;
    ::ll::UntypedStorage<4, 4>   mUnk77e3cf;
    ::ll::UntypedStorage<4, 4>   mUnk662b94;
    ::ll::UntypedStorage<4, 4>   mUnk1c0114;
    ::ll::UntypedStorage<1, 1>   mUnkf8ecb8;
    ::ll::UntypedStorage<1, 1>   mUnk796b68;
    ::ll::UntypedStorage<1, 1>   mUnkfd52da;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistCommand& operator=(CameraAimAssistCommand const&);
    CameraAimAssistCommand(CameraAimAssistCommand const&);
    CameraAimAssistCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~CameraAimAssistCommand() /*override*/ = default;
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
