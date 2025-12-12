#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GraphicsOverrideParameterPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk2bfba0;
    ::ll::UntypedStorage<8, 32> mUnke7f328;
    ::ll::UntypedStorage<1, 1>  mUnk3429fd;
    ::ll::UntypedStorage<1, 1>  mUnk32f0a9;
    // NOLINTEND

public:
    // prevent constructor by default
    GraphicsOverrideParameterPacketPayload& operator=(GraphicsOverrideParameterPacketPayload const&);
    GraphicsOverrideParameterPacketPayload(GraphicsOverrideParameterPacketPayload const&);
    GraphicsOverrideParameterPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GraphicsOverrideParameterPacketPayload(::GraphicsOverrideParameterPacketPayload&&);

    MCNAPI ::GraphicsOverrideParameterPacketPayload& operator=(::GraphicsOverrideParameterPacketPayload&&);

    MCNAPI ~GraphicsOverrideParameterPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GraphicsOverrideParameterPacketPayload&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
