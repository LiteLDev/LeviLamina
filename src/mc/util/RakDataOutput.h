#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

class RakDataOutput : public ::BytesDataOutput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::BitStream&> mBitStream;
    // NOLINTEND

public:
    // prevent constructor by default
    RakDataOutput& operator=(RakDataOutput const&);
    RakDataOutput(RakDataOutput const&);
    RakDataOutput();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void writeBytes(void const* data, uint64 bytes) /*override*/;

    virtual ~RakDataOutput() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $writeBytes(void const* data, uint64 bytes);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
