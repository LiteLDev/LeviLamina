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

    MCTAPI void writeType(class BlockPos const&, char const*, char const*);
    MCTAPI void writeType(class Vec3 const&, char const*, char const*);
    MCTAPI void writeType(class MoveActorAbsoluteData const&, char const*, char const*);
    MCTAPI void writeType(class BaseGameVersion const&, char const*, char const*);
    MCTAPI void writeType(struct ActorLink const&, char const*, char const*);
    MCTAPI void writeType(struct GameRulesChangedPacketData const&, char const*, char const*);

    BinaryStream() : ReadOnlyBinaryStream({}, true), mBuffer(mOwnedBuffer) {}
    BinaryStream(std::string& buffer) : ReadOnlyBinaryStream(buffer, false), mBuffer(buffer) {}

public:
    // member variables
    // NOLINTBEGIN
    ::std::string& mBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    BinaryStream& operator=(BinaryStream const&);
    BinaryStream(BinaryStream const&);
    BinaryStream();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BinaryStream() /*override*/;

    // vIndex: 2
    virtual void writeBool(bool value, char const* docFieldName, char const* docFieldNotes);

    // vIndex: 3
    virtual void writeByte(uchar value, char const* docFieldName, char const* docFieldNotes);

    // vIndex: 4
    virtual void writeUnsignedShort(ushort value, char const* docFieldName, char const* docFieldNotes);

    // vIndex: 5
    virtual void writeSignedShort(short value, char const* docFieldName, char const* docFieldNotes);

    // vIndex: 6
    virtual void writeUnsignedInt(uint value, char const* docFieldName, char const* docFieldNotes);

    // vIndex: 7
    virtual void writeSignedBigEndianInt(int value, char const* docFieldName, char const* docFieldNotes);

    // vIndex: 8
    virtual void writeSignedInt(int value, char const* docFieldName, char const* docFieldNotes);

    // vIndex: 9
    virtual void writeUnsignedInt64(uint64 value, char const* docFieldName, char const* docFieldNotes);

    // vIndex: 10
    virtual void writeSignedInt64(int64 value, char const* docFieldName, char const* docFieldNotes);

    // vIndex: 11
    virtual void writeUnsignedVarInt(uint uvalue, char const* docFieldName, char const* docFieldNotes);

    // vIndex: 12
    virtual void writeUnsignedVarInt64(uint64 uvalue, char const* docFieldName, char const* docFieldNotes);

    // vIndex: 13
    virtual void writeVarInt(int value, char const* docFieldName, char const* docFieldNotes);

    // vIndex: 14
    virtual void writeVarInt64(int64 value, char const* docFieldName, char const* docFieldNotes);

    // vIndex: 15
    virtual void writeDouble(double value, char const* docFieldName, char const* docFieldNotes);

    // vIndex: 16
    virtual void writeFloat(float value, char const* docFieldName, char const* docFieldNotes);

    // vIndex: 17
    virtual void writeFixedFloat(float value, char const* docFieldName, char const* docFieldNotes, double size);

    // vIndex: 18
    virtual void writeNormalizedFloat(float value, char const* docFieldName, char const* docFieldNotes);

    // vIndex: 19
    virtual void writeString(::std::string_view value, char const* docFieldName, char const* docFieldNotes);

    // vIndex: 20
    virtual void writeIf(
        bool                                                                 controlValue,
        char const*                                                          docFieldName,
        ::brstd::function_ref<void(::BinaryStream&)> const&                  writeIfTrue,
        ::std::optional<::brstd::function_ref<void(::BinaryStream&)>> const& writeIfFalse
    );

    // vIndex: 21
    virtual void writeConditional(
        char const*                                                          docFieldName,
        ::std::initializer_list<::BinaryStream::ConditionBlock>&&            conditions,
        ::std::optional<::brstd::function_ref<void(::BinaryStream&)>> const& writeDefault
    );

    // vIndex: 23
    virtual void branchingWrite_DEPRECATED(
        ::std::function<void(::BinaryStream&, int)>&& branchWriter,
        int                                           controlValue,
        int                                           docRangeBegin,
        int                                           docRangeEnd,
        char const*                                   controlDocFieldName
    );

    // vIndex: 22
    virtual void branchingWrite_DEPRECATED(
        ::std::function<void(::BinaryStream&, int)>&& branchWriter,
        int                                           controlValue,
        ::std::vector<int> const&                     docControlSet,
        char const*                                   controlDocFieldName
    );

    // vIndex: 24
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

    MCAPI void write(void const* origin, uint64 num);

    MCFOLD void writeUnsignedChar(uchar value, char const* docFieldName, char const* docFieldNotes);
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

    MCFOLD void $writeByte(uchar value, char const* docFieldName, char const* docFieldNotes);

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
