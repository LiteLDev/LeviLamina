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
    ScriptMessagePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptMessagePacketPayload(::ScriptMessagePacketPayload const&);

    MCAPI ScriptMessagePacketPayload(::std::string const& messageId, ::std::string const& messageValue);

    MCFOLD ::ScriptMessagePacketPayload& operator=(::ScriptMessagePacketPayload&&);

    MCAPI ~ScriptMessagePacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptMessagePacketPayload const&);

    MCFOLD void* $ctor(::std::string const& messageId, ::std::string const& messageValue);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
