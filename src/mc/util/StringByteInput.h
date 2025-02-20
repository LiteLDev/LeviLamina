#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BytesDataInput.h"

class StringByteInput : public ::BytesDataInput {
public:
    // member variables
    // NOLINTBEGIN
    size_t           mIdx;
    std::string_view mBuffer;
    // NOLINTEND

    StringByteInput(std::string_view sv, size_t offset) noexcept : mIdx(offset), mBuffer(sv) {}

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 9
    virtual ::Bedrock::Result<void> readBytesResult(void* data, uint64 bytes) /*override*/;

    // vIndex: 10
    virtual uint64 numBytesLeft() const /*override*/;

    // vIndex: 0
    virtual ~StringByteInput() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StringByteInput(::std::string_view in);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view in);
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
