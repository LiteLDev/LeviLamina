#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CodeBuilderPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4955bf;
    ::ll::UntypedStorage<1, 1>  mUnk3fee18;
    // NOLINTEND

public:
    // prevent constructor by default
    CodeBuilderPacketPayload& operator=(CodeBuilderPacketPayload const&);
    CodeBuilderPacketPayload(CodeBuilderPacketPayload const&);
    CodeBuilderPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CodeBuilderPacketPayload& operator=(::CodeBuilderPacketPayload&&);

    MCNAPI ~CodeBuilderPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
