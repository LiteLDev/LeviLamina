#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"
#include "mc/util/rotation_command_utils/FacingResult.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Vec3;
// clang-format on

class SummonCommand : public ::ServerCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkadd035;
    ::ll::UntypedStorage<4, 16>  mUnk753489;
    ::ll::UntypedStorage<8, 32>  mUnk7ed9ce;
    ::ll::UntypedStorage<8, 32>  mUnk1154bc;
    ::ll::UntypedStorage<1, 1>   mUnk7c4ae7;
    ::ll::UntypedStorage<4, 8>   mUnkb5be64;
    ::ll::UntypedStorage<4, 8>   mUnkd3ecd3;
    ::ll::UntypedStorage<1, 1>   mUnka70ba0;
    ::ll::UntypedStorage<1, 1>   mUnka72152;
    ::ll::UntypedStorage<4, 4>   mUnk8e89d5;
    ::ll::UntypedStorage<8, 200> mUnk66e3c1;
    ::ll::UntypedStorage<4, 16>  mUnk484347;
    // NOLINTEND

public:
    // prevent constructor by default
    SummonCommand& operator=(SummonCommand const&);
    SummonCommand(SummonCommand const&);
    SummonCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~SummonCommand() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::RotationCommandUtils::FacingResult
    _getFacingDirection(::CommandOrigin const& origin, ::CommandOutput& output, ::Vec3& faceTarget) const;
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
