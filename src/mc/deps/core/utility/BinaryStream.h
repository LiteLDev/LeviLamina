#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/serialize/serialize.h"

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
        ::ll::TypedStorage<1, 1, bool>                                          controlValue;
        ::ll::TypedStorage<8, 16, ::brstd::function_ref<void(::BinaryStream&)>> writeCondition;
        ::ll::TypedStorage<8, 8, char const*>                                   docFieldName;
        // NOLINTEND
    };

public:
    template <typename T>
    inline void writeType(T const& x, char const* = nullptr, char const* = nullptr) {
        serialize<T>::write(x, *this);
    }

    MCTAPI void writeType(class NetworkItemStackDescriptor const&, char const*, char const*);
    MCTAPI void writeType(class MoveActorAbsoluteData const&, char const*, char const*);
    MCTAPI void writeType(class NetworkItemInstanceDescriptor const&, char const*, char const*);
    MCTAPI void writeType(struct PropertySyncData const&, char const*, char const*);

public:
    // member variables
    // NOLINTBEGIN
    ::std::string& mBuffer;
    // NOLINTEND

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

    MCFOLD void _writeInteger(short value, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCAPI void _writeInteger(ushort, char const*, char const*);

    MCFOLD void _writeInteger(uchar value, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCFOLD void _writeInteger(int value, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCAPI void _writeInteger(uint, char const*, char const*);

    MCAPI ::std::string getAndReleaseData();

    MCAPI void reset();

    MCAPI void write(void const* origin, uint64 num);

    MCFOLD void writeBool(bool value, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCFOLD void writeByte(uchar value, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCAPI void writeDouble(double value, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCAPI void writeFloat(float value, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCAPI void
    writeSignedBigEndianInt(int value, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCFOLD void writeSignedInt(int value, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCFOLD void writeSignedInt64(int64 value, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCFOLD void writeSignedShort(short value, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCAPI void
    writeString(::std::string_view value, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCFOLD void writeUnsignedChar(uchar value, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCFOLD void writeUnsignedInt(uint value, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCFOLD void
    writeUnsignedInt64(uint64 value, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCFOLD void
    writeUnsignedShort(ushort value, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCAPI void
    writeUnsignedVarInt(uint uvalue, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCAPI void
    writeUnsignedVarInt64(uint64 uvalue, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCAPI void writeVarInt(int value, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);

    MCAPI void writeVarInt64(int64 value, char const* docFieldName = nullptr, char const* docFieldNotes = nullptr);
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
    MCFOLD void $dtor();
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
