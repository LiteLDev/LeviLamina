#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOriginData.h"
#include "mc/server/commands/CommandOutput.h"

struct CommandOutputPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::CommandOriginData> mOriginData;
    ::ll::TypedStorage<8, 48, ::CommandOutput>     mOutput;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandOutputPacketPayload(CommandOutputPacketPayload const&);
    CommandOutputPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::CommandOutputPacketPayload& operator=(::CommandOutputPacketPayload&&);

    MCAPI ::CommandOutputPacketPayload& operator=(::CommandOutputPacketPayload const&);

    MCAPI ~CommandOutputPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
