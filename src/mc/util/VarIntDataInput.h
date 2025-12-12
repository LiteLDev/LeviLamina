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
    virtual ::Bedrock::Result<::std::string> readStringResult() /*override*/;

    virtual ::Bedrock::Result<::std::string> readLongStringResult() /*override*/;

    virtual ::Bedrock::Result<float> readFloatResult() /*override*/;

    virtual ::Bedrock::Result<double> readDoubleResult() /*override*/;

    virtual ::Bedrock::Result<uchar> readByteResult() /*override*/;

    virtual ::Bedrock::Result<short> readShortResult() /*override*/;

    virtual ::Bedrock::Result<int> readIntResult() /*override*/;

    virtual ::Bedrock::Result<int64> readLongLongResult() /*override*/;

    virtual ::Bedrock::Result<void> readBytesResult(void* data, uint64 bytes) /*override*/;

    virtual uint64 numBytesLeft() const /*override*/;

    virtual ~VarIntDataInput() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Bedrock::Result<::std::string> $readStringResult();

    MCFOLD ::Bedrock::Result<::std::string> $readLongStringResult();

    MCAPI ::Bedrock::Result<float> $readFloatResult();

    MCAPI ::Bedrock::Result<double> $readDoubleResult();

    MCAPI ::Bedrock::Result<uchar> $readByteResult();

    MCAPI ::Bedrock::Result<short> $readShortResult();

    MCAPI ::Bedrock::Result<int> $readIntResult();

    MCAPI ::Bedrock::Result<int64> $readLongLongResult();

    MCFOLD ::Bedrock::Result<void> $readBytesResult(void* data, uint64 bytes);

    MCAPI uint64 $numBytesLeft() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
