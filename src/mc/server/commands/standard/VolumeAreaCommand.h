#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
// clang-format on

class VolumeAreaCommand : public ::Command {
public:
    // VolumeAreaCommand inner types define
    enum class Mode : int {
        Add       = 0,
        Remove    = 1,
        RemoveAll = 2,
        List      = 3,
    };

    enum class TargetDimensions : int {
        CurrentDimension = 0,
        AllDimensions    = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9e48e1;
    ::ll::UntypedStorage<8, 32> mUnk291760;
    ::ll::UntypedStorage<4, 16> mUnkba093c;
    ::ll::UntypedStorage<4, 16> mUnkeba02e;
    ::ll::UntypedStorage<8, 32> mUnka969e2;
    ::ll::UntypedStorage<4, 4>  mUnkd46f98;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeAreaCommand& operator=(VolumeAreaCommand const&);
    VolumeAreaCommand(VolumeAreaCommand const&);
    VolumeAreaCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;

    // vIndex: 0
    virtual ~VolumeAreaCommand() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND
};
