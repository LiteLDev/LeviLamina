#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOriginData.h"
#include "mc/server/commands/CurrentCmdVersion.h"

struct CommandRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>       mCommand;
    ::ll::TypedStorage<8, 64, ::CommandOriginData> mOrigin;
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion>  mVersion;
    ::ll::TypedStorage<1, 1, bool>                 mInternalSource;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandRequestPacketPayload(CommandRequestPacketPayload const&);
    CommandRequestPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CommandRequestPacketPayload& operator=(::CommandRequestPacketPayload&&);

    MCAPI ::CommandRequestPacketPayload& operator=(::CommandRequestPacketPayload const&);

    MCAPI ~CommandRequestPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
