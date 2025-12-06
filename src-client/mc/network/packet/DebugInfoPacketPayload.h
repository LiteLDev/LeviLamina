#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

struct DebugInfoPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>  mData;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mActorId;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugInfoPacketPayload& operator=(DebugInfoPacketPayload const&);
    DebugInfoPacketPayload(DebugInfoPacketPayload const&);
    DebugInfoPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::DebugInfoPacketPayload& operator=(::DebugInfoPacketPayload&&);

    MCAPI ~DebugInfoPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
