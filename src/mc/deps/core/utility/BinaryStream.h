#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"
#include "mc/platform/brstd/function_ref.h"

class BinaryStream : public ::ReadOnlyBinaryStream {
public:
    // BinaryStream inner types declare
    // clang-format off
    struct ConditionBlock;
    // clang-format on

    // BinaryStream inner types define
    struct ConditionBlock {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnkca58db;
        ::ll::UntypedStorage<8, 16> mUnkce0069;
        ::ll::UntypedStorage<8, 8>  mUnk6d13ee;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConditionBlock& operator=(ConditionBlock const&);
        ConditionBlock(ConditionBlock const&);
        ConditionBlock();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::string&> mBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    BinaryStream& operator=(BinaryStream const&);
    BinaryStream(BinaryStream const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BinaryStream() /*override*/;

    // vIndex: 2
    virtual void writeIf(
        bool                                                controlValue,
        char const*                                         docFieldName,
        ::brstd::function_ref<void(::BinaryStream&)> const& writeIfTrue,
        ::brstd::function_ref<void(::BinaryStream&)> const& writeIfFalse
    );

    // vIndex: 3
    virtual void writeConditional(
        char const*                                               docFieldName,
        ::std::initializer_list<::BinaryStream::ConditionBlock>&& conditions,
        ::brstd::function_ref<void(::BinaryStream&)> const&       writeDefault
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BinaryStream();

    MCAPI BinaryStream(::std::string& buffer, bool copyBuffer);

    MCAPI void _writeArray(
        ::std::function<void(::BinaryStream&)>&& sizeWriter,
        ::std::function<void(::BinaryStream&)>&& writer,
        char const*                              docFieldName,
        char const*                              docFieldNotes
    );

    MCAPI void _writeInteger(short value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void _writeInteger(ushort, char const*, char const*);

    MCAPI void _writeInteger(uchar value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void _writeInteger(int value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void _writeInteger(uint, char const*, char const*);

    MCAPI ::std::string getAndReleaseData();

    MCAPI void reset();

    MCAPI void write(void const* origin, uint64 num);

    MCAPI void writeBool(bool value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void writeByte(uchar value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void writeDouble(double value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void writeFloat(float value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void writeSignedBigEndianInt(int value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void writeSignedInt(int value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void writeSignedInt64(int64 value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void writeSignedShort(short value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void writeString(::std::string_view value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void writeUnsignedChar(uchar value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void writeUnsignedInt(uint value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void writeUnsignedInt64(uint64 value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void writeUnsignedShort(ushort value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void writeUnsignedVarInt(uint uvalue, char const* docFieldName, char const* docFieldNotes);

    MCAPI void writeUnsignedVarInt64(uint64 uvalue, char const* docFieldName, char const* docFieldNotes);

    MCAPI void writeVarInt(int value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void writeVarInt64(int64 value, char const* docFieldName, char const* docFieldNotes);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::string& buffer, bool copyBuffer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $writeIf(
        bool                                                controlValue,
        char const*                                         docFieldName,
        ::brstd::function_ref<void(::BinaryStream&)> const& writeIfTrue,
        ::brstd::function_ref<void(::BinaryStream&)> const& writeIfFalse
    );

    MCAPI void $writeConditional(
        char const*                                               docFieldName,
        ::std::initializer_list<::BinaryStream::ConditionBlock>&& conditions,
        ::brstd::function_ref<void(::BinaryStream&)> const&       writeDefault
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
