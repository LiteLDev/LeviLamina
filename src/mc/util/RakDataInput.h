#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BytesDataInput.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

class RakDataInput : public ::BytesDataInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::BitStream&> mBitStream;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 9
    virtual ::Bedrock::Result<void> readBytesResult(void* data, uint64 bytes) /*override*/;

    // vIndex: 10
    virtual uint64 numBytesLeft() const /*override*/;

    // vIndex: 0
    virtual ~RakDataInput() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::Result<void> $readBytesResult(void* data, uint64 bytes);

    MCAPI uint64 $numBytesLeft() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
