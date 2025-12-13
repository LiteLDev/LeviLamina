#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptMessagePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd25893;
    ::ll::UntypedStorage<8, 32> mUnk37683a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessagePacketPayload& operator=(ScriptMessagePacketPayload const&);
    ScriptMessagePacketPayload(ScriptMessagePacketPayload const&);
    ScriptMessagePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptMessagePacketPayload& operator=(::ScriptMessagePacketPayload&&);

    MCNAPI ~ScriptMessagePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
