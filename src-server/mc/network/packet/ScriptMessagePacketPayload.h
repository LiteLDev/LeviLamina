#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptMessagePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mMessageId;
    ::ll::TypedStorage<8, 32, ::std::string> mMessageValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessagePacketPayload& operator=(ScriptMessagePacketPayload const&);
    ScriptMessagePacketPayload(ScriptMessagePacketPayload const&);
    ScriptMessagePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptMessagePacketPayload& operator=(::ScriptMessagePacketPayload&&);

    MCAPI ~ScriptMessagePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
