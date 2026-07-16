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
    ScriptMessagePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptMessagePacketPayload(::std::string const& messageId, ::std::string const& messageValue);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::std::string const& messageId, ::std::string const& messageValue);
    // NOLINTEND
};
