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
        ::ll::TypedStorage<1, 1, bool>                                          controlValue;
        ::ll::TypedStorage<8, 16, ::brstd::function_ref<void(::BinaryStream&)>> writeCondition;
        ::ll::TypedStorage<8, 8, char const*>                                   docFieldName;
        // NOLINTEND
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
    BinaryStream();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BinaryStream() /*override*/;

    virtual void writeBool(bool value, char const* docFieldName, char const* docFieldNotes);

    virtual void writeByte(uchar value, char const* docFieldName, char const* docFieldNotes);

    virtual void writeUnsignedShort(ushort value, char const* docFieldName, char const* docFieldNotes);

    virtual void writeSignedShort(short value, char const* docFieldName, char const* docFieldNotes);

    virtual void writeUnsignedInt(uint value, char const* docFieldName, char const* docFieldNotes);

    virtual void writeSignedBigEndianInt(int value, char const* docFieldName, char const* docFieldNotes);

    virtual void writeSignedInt(int value, char const* docFieldName, char const* docFieldNotes);

    virtual void writeUnsignedInt64(uint64 value, char const* docFieldName, char const* docFieldNotes);

    virtual void writeSignedInt64(int64 value, char const* docFieldName, char const* docFieldNotes);

    virtual void writeUnsignedVarInt(uint uvalue, char const* docFieldName, char const* docFieldNotes);

    virtual void writeUnsignedVarInt64(uint64 uvalue, char const* docFieldName, char const* docFieldNotes);

    virtual void writeVarInt(int value, char const* docFieldName, char const* docFieldNotes);

    virtual void writeVarInt64(int64 value, char const* docFieldName, char const* docFieldNotes);

    virtual void writeDouble(double value, char const* docFieldName, char const* docFieldNotes);

    virtual void writeFloat(float value, char const* docFieldName, char const* docFieldNotes);

    virtual void writeFixedFloat(float value, char const* docFieldName, char const* docFieldNotes, double size);

    virtual void writeNormalizedFloat(float value, char const* docFieldName, char const* docFieldNotes);

    virtual void writeString(::std::string_view value, char const* docFieldName, char const* docFieldNotes);

    virtual void writeIf(
        bool                                                                 controlValue,
        char const*                                                          docFieldName,
        ::brstd::function_ref<void(::BinaryStream&)> const&                  writeIfTrue,
        ::std::optional<::brstd::function_ref<void(::BinaryStream&)>> const& writeIfFalse
    );

    virtual void writeConditional(
        char const*                                                          docFieldName,
        ::std::initializer_list<::BinaryStream::ConditionBlock>&&            conditions,
        ::std::optional<::brstd::function_ref<void(::BinaryStream&)>> const& writeDefault
    );

    virtual void branchingWrite_DEPRECATED(
        ::std::function<void(::BinaryStream&, int)>&& branchWriter,
        int                                           controlValue,
        int                                           docRangeBegin,
        int                                           docRangeEnd,
        char const*                                   controlDocFieldName
    );

    virtual void branchingWrite_DEPRECATED(
        ::std::function<void(::BinaryStream&, int)>&& branchWriter,
        int                                           controlValue,
        ::std::vector<int> const&                     docControlSet,
        char const*                                   controlDocFieldName
    );

    virtual void _writeArray(
        ::std::function<void(::BinaryStream&)>&& sizeWriter,
        ::std::function<void(::BinaryStream&)>&& writer,
        char const*                              docFieldName,
        char const*                              docFieldNotes
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BinaryStream(::std::string& buffer, bool copyBuffer);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    MCAPI void $writeBool(bool value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void $writeByte(uchar value, char const* docFieldName, char const* docFieldNotes);

    MCFOLD void $writeUnsignedShort(ushort value, char const* docFieldName, char const* docFieldNotes);

    MCFOLD void $writeSignedShort(short value, char const* docFieldName, char const* docFieldNotes);

    MCFOLD void $writeUnsignedInt(uint value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void $writeSignedBigEndianInt(int value, char const* docFieldName, char const* docFieldNotes);

    MCFOLD void $writeSignedInt(int value, char const* docFieldName, char const* docFieldNotes);

    MCFOLD void $writeUnsignedInt64(uint64 value, char const* docFieldName, char const* docFieldNotes);

    MCFOLD void $writeSignedInt64(int64 value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void $writeUnsignedVarInt(uint uvalue, char const* docFieldName, char const* docFieldNotes);

    MCAPI void $writeUnsignedVarInt64(uint64 uvalue, char const* docFieldName, char const* docFieldNotes);

    MCAPI void $writeVarInt(int value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void $writeVarInt64(int64 value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void $writeDouble(double value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void $writeFloat(float value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void $writeFixedFloat(float value, char const* docFieldName, char const* docFieldNotes, double size);

    MCAPI void $writeNormalizedFloat(float value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void $writeString(::std::string_view value, char const* docFieldName, char const* docFieldNotes);

    MCAPI void $writeIf(
        bool                                                                 controlValue,
        char const*                                                          docFieldName,
        ::brstd::function_ref<void(::BinaryStream&)> const&                  writeIfTrue,
        ::std::optional<::brstd::function_ref<void(::BinaryStream&)>> const& writeIfFalse
    );

    MCAPI void $writeConditional(
        char const*                                                          docFieldName,
        ::std::initializer_list<::BinaryStream::ConditionBlock>&&            conditions,
        ::std::optional<::brstd::function_ref<void(::BinaryStream&)>> const& writeDefault
    );

    MCFOLD void $branchingWrite_DEPRECATED(
        ::std::function<void(::BinaryStream&, int)>&& branchWriter,
        int                                           controlValue,
        int                                           docRangeBegin,
        int                                           docRangeEnd,
        char const*                                   controlDocFieldName
    );

    MCFOLD void $branchingWrite_DEPRECATED(
        ::std::function<void(::BinaryStream&, int)>&& branchWriter,
        int                                           controlValue,
        ::std::vector<int> const&                     docControlSet,
        char const*                                   controlDocFieldName
    );

    MCAPI void $_writeArray(
        ::std::function<void(::BinaryStream&)>&& sizeWriter,
        ::std::function<void(::BinaryStream&)>&& writer,
        char const*                              docFieldName,
        char const*                              docFieldNotes
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
