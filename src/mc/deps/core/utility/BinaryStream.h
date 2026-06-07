#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/serialize/serialize.h"

// auto generated inclusion list
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"
#include "mc/deps/core/utility/buffer_span.h"
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
        bool                                          controlValue;
        ::brstd::function_ref<void(::BinaryStream&)>  writeCondition;
        char const*                                   docFieldName;
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

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BinaryStream() /*override*/ = default;

    virtual void writeBool(bool value, char const* docFieldName, char const*);

    virtual void writeByte(uchar value, char const*, char const*);

    virtual void writeSignedByte(schar value, char const*, char const*);

    virtual void writeUnsignedShort(ushort value, char const*, char const*);

    virtual void writeSignedShort(short value, char const*, char const*);

    virtual void writeUnsignedInt(uint value, char const*, char const*);

    virtual void writeSignedBigEndianInt(int value, char const*, char const*);

    virtual void writeSignedInt(int value, char const*, char const*);

    virtual void writeUnsignedInt64(uint64 value, char const*, char const*);

    virtual void writeSignedInt64(int64 value, char const*, char const*);

    virtual void writeUnsignedVarInt(uint uvalue, char const* docFieldName, char const*);

    virtual void writeUnsignedVarInt64(uint64 uvalue, char const* docFieldName, char const*);

    virtual void writeVarInt(int value, char const* docFieldName, char const*);

    virtual void writeVarInt64(int64 value, char const* docFieldName, char const*);

    virtual void writeDouble(double value, char const*, char const*);

    virtual void writeFloat(float value, char const*, char const*);

    virtual void writeFixedFloat(float value, char const* docFieldName, char const* docFieldNotes, double size);

    virtual void writeNormalizedFloat(float value, char const* docFieldName, char const*);

    virtual void writeString(::std::string_view value, char const*, char const*);

    virtual void writeIf(
        bool                                                controlValue,
        char const*                                         writeIfTrue,
        ::brstd::function_ref<void(::BinaryStream&)> const& writeIfFalse,
        ::std::optional<::brstd::function_ref<void(::BinaryStream&)>> const&
    );

    virtual void writeConditional(
        char const*                                               conditions,
        ::std::initializer_list<::BinaryStream::ConditionBlock>&& writeDefault,
        ::std::optional<::brstd::function_ref<void(::BinaryStream&)>> const&
    );

    virtual void branchingWrite_DEPRECATED(
        ::std::function<void(::BinaryStream&, int)>&& branchWriter,
        int                                           controlValue,
        int,
        int,
        char const*
    );

    virtual void branchingWrite_DEPRECATED(
        ::std::function<void(::BinaryStream&, int)>&& branchWriter,
        int                                           controlValue,
        ::std::vector<int> const&,
        char const*
    );

    virtual bool writeTypeBegin_DocHelper(char const*, char const*, char const*);

    virtual void writeTypeEnd_DocHelper();

    virtual void writeEnum_DocHelper(char const*, char const*);

    virtual void _writeArray(
        ::std::function<void(::BinaryStream&)>&& sizeWriter,
        ::std::function<void(::BinaryStream&)>&& writer,
        char const*,
        char const*
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit BinaryStream(::std::string&& buffer);
#endif

    MCAPI BinaryStream(::std::string& buffer, bool copyBuffer);

    MCFOLD void _writeInteger(uchar value, char const* docFieldName, char const*);

    MCAPI void _writeInteger(short value, char const* docFieldName, char const*);

    MCFOLD void _writeInteger(ushort value, char const* docFieldName, char const*);

    MCAPI void _writeInteger(int value, char const* docFieldName, char const*);

    MCAPI void _writeInteger(uint value, char const* docFieldName, char const*);

    MCAPI ::std::string getAndReleaseData();

    MCAPI void reset();

    MCAPI void writeRawBytes(::buffer_span<uchar> bytes, char const*, char const*);

    MCFOLD void writeUnsignedChar(uchar value, char const*, char const*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::string&& buffer);
#endif

    MCAPI void* $ctor(::std::string& buffer, bool copyBuffer);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $writeBool(bool value, char const* docFieldName, char const*);

    MCFOLD void $writeByte(uchar value, char const*, char const*);

    MCFOLD void $writeSignedByte(schar value, char const*, char const*);

    MCFOLD void $writeUnsignedShort(ushort value, char const*, char const*);

    MCFOLD void $writeSignedShort(short value, char const*, char const*);

    MCFOLD void $writeUnsignedInt(uint value, char const*, char const*);

    MCAPI void $writeSignedBigEndianInt(int value, char const*, char const*);

    MCFOLD void $writeSignedInt(int value, char const*, char const*);

    MCFOLD void $writeUnsignedInt64(uint64 value, char const*, char const*);

    MCFOLD void $writeSignedInt64(int64 value, char const*, char const*);

    MCAPI void $writeUnsignedVarInt(uint uvalue, char const* docFieldName, char const*);

    MCAPI void $writeUnsignedVarInt64(uint64 uvalue, char const* docFieldName, char const*);

    MCAPI void $writeVarInt(int value, char const* docFieldName, char const*);

    MCAPI void $writeVarInt64(int64 value, char const* docFieldName, char const*);

    MCAPI void $writeDouble(double value, char const*, char const*);

    MCAPI void $writeFloat(float value, char const*, char const*);

    MCAPI void $writeFixedFloat(float value, char const* docFieldName, char const* docFieldNotes, double size);

    MCAPI void $writeNormalizedFloat(float value, char const* docFieldName, char const*);

    MCAPI void $writeString(::std::string_view value, char const*, char const*);

    MCAPI void $writeIf(
        bool                                                controlValue,
        char const*                                         writeIfTrue,
        ::brstd::function_ref<void(::BinaryStream&)> const& writeIfFalse,
        ::std::optional<::brstd::function_ref<void(::BinaryStream&)>> const&
    );

    MCAPI void $writeConditional(
        char const*                                               conditions,
        ::std::initializer_list<::BinaryStream::ConditionBlock>&& writeDefault,
        ::std::optional<::brstd::function_ref<void(::BinaryStream&)>> const&
    );

    MCFOLD void $branchingWrite_DEPRECATED(
        ::std::function<void(::BinaryStream&, int)>&& branchWriter,
        int                                           controlValue,
        int,
        int,
        char const*
    );

    MCFOLD void $branchingWrite_DEPRECATED(
        ::std::function<void(::BinaryStream&, int)>&& branchWriter,
        int                                           controlValue,
        ::std::vector<int> const&,
        char const*
    );

    MCFOLD bool $writeTypeBegin_DocHelper(char const*, char const*, char const*);

    MCFOLD void $writeTypeEnd_DocHelper();

    MCFOLD void $writeEnum_DocHelper(char const*, char const*);

    MCAPI void $_writeArray(
        ::std::function<void(::BinaryStream&)>&& sizeWriter,
        ::std::function<void(::BinaryStream&)>&& writer,
        char const*,
        char const*
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
