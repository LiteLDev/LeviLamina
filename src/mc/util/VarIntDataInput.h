#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BytesDataInput.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

class VarIntDataInput : public ::BytesDataInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ReadOnlyBinaryStream&> mStream;
    // NOLINTEND

public:
    // prevent constructor by default
    VarIntDataInput& operator=(VarIntDataInput const&);
    VarIntDataInput(VarIntDataInput const&);
    VarIntDataInput();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Bedrock::Result<::std::string> readStringResult() /*override*/;

    // vIndex: 2
    virtual ::Bedrock::Result<::std::string> readLongStringResult() /*override*/;

    // vIndex: 3
    virtual ::Bedrock::Result<float> readFloatResult() /*override*/;

    // vIndex: 4
    virtual ::Bedrock::Result<double> readDoubleResult() /*override*/;

    // vIndex: 5
    virtual ::Bedrock::Result<uchar> readByteResult() /*override*/;

    // vIndex: 6
    virtual ::Bedrock::Result<short> readShortResult() /*override*/;

    // vIndex: 7
    virtual ::Bedrock::Result<int> readIntResult() /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<int64> readLongLongResult() /*override*/;

    // vIndex: 9
    virtual ::Bedrock::Result<void> readBytesResult(void* data, uint64 bytes) /*override*/;

    // vIndex: 10
    virtual uint64 numBytesLeft() const /*override*/;

    // vIndex: 0
    virtual ~VarIntDataInput() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::Result<::std::string> $readStringResult();

    MCAPI ::Bedrock::Result<::std::string> $readLongStringResult();

    MCAPI ::Bedrock::Result<float> $readFloatResult();

    MCAPI ::Bedrock::Result<double> $readDoubleResult();

    MCAPI ::Bedrock::Result<uchar> $readByteResult();

    MCAPI ::Bedrock::Result<short> $readShortResult();

    MCAPI ::Bedrock::Result<int> $readIntResult();

    MCAPI ::Bedrock::Result<int64> $readLongLongResult();

    MCAPI ::Bedrock::Result<void> $readBytesResult(void* data, uint64 bytes);

    MCAPI uint64 $numBytesLeft() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
