#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOriginData.h"
#include "mc/server/commands/CommandOutput.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
// clang-format on

struct CommandOutputPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::CommandOriginData> mOriginData;
    ::ll::TypedStorage<8, 48, ::CommandOutput>     mOutput;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandOutputPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandOutputPacketPayload(::CommandOrigin const& origin, ::CommandOutput const& output);

    MCAPI ~CommandOutputPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CommandOrigin const& origin, ::CommandOutput const& output);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
