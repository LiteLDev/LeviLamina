#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"

class BinaryStream : public ::ReadOnlyBinaryStream {
public:
    std::string  mOwnedBuffer;
    std::string* mBuffer;

    template <typename T>
    inline void writeType(T const& x, char const* = nullptr, char const* = nullptr) {
        serialize<T>::write(x, *this);
    }

    MCTAPI void writeType(class NetworkItemStackDescriptor const&, char const*, char const*);
    MCTAPI void writeType(class MoveActorAbsoluteData const&, char const*, char const*);
    MCTAPI void writeType(class NetworkItemInstanceDescriptor const&, char const*, char const*);
    MCTAPI void writeType(struct PropertySyncData const&, char const*, char const*);

    BinaryStream() : mBuffer(std::addressof(mOwnedBuffer)) { ReadOnlyBinaryStream::mBuffer = mBuffer; }

    BinaryStream(std::string& buffer, bool copyBuffer) {
        if (copyBuffer) {
            mOwnedBuffer = buffer;
            mBuffer      = std::addressof(mOwnedBuffer);
        } else {
            mBuffer = std::addressof(buffer);
        }
        ReadOnlyBinaryStream::mBuffer = mBuffer;
    }

    std::string getAndReleaseData() { return std::move(*mBuffer); }

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BinaryStream() = default;

    MCAPI void reset();

    MCAPI void writeBool(bool data, char const* docName = nullptr, char const* docDesc = nullptr);

    MCAPI void writeByte(uchar data, char const* docName = nullptr, char const* docDesc = nullptr);

    MCAPI void writeDouble(double data, char const* docName = nullptr, char const* docDesc = nullptr);

    MCAPI void writeFloat(float data, char const* docName = nullptr, char const* docDesc = nullptr);

    MCAPI void writeSignedBigEndianInt(int data, char const* docName = nullptr, char const* docDesc = nullptr);

    MCAPI void writeSignedInt(int data, char const* docName = nullptr, char const* docDesc = nullptr);

    MCAPI void writeSignedInt64(int64 data, char const* docName = nullptr, char const* docDesc = nullptr);

    MCAPI void writeSignedShort(short data, char const* docName = nullptr, char const* docDesc = nullptr);

    MCAPI void writeString(std::string_view data, char const* docName = nullptr, char const* docDesc = nullptr);

    MCAPI void writeUnsignedChar(uchar data, char const* docName = nullptr, char const* docDesc = nullptr);

    MCAPI void writeUnsignedInt(uint data, char const* docName = nullptr, char const* docDesc = nullptr);

    MCAPI void writeUnsignedInt64(uint64 data, char const* docName = nullptr, char const* docDesc = nullptr);

    MCAPI void writeUnsignedShort(ushort data, char const* docName = nullptr, char const* docDesc = nullptr);

    MCAPI void writeUnsignedVarInt(uint data, char const* docName = nullptr, char const* docDesc = nullptr);

    MCAPI void writeUnsignedVarInt64(uint64 data, char const* docName = nullptr, char const* docDesc = nullptr);

    MCAPI void writeVarInt(int data, char const* docName = nullptr, char const* docDesc = nullptr);

    MCAPI void writeVarInt64(int64 data, char const* docName = nullptr, char const* docDesc = nullptr);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _writeInteger(int, char const*, char const*);

    MCAPI void _writeInteger(short, char const*, char const*);

    MCAPI void _writeInteger(uchar, char const*, char const*);

    MCAPI void _writeInteger(uint, char const*, char const*);

    MCAPI void _writeInteger(ushort, char const*, char const*);

    MCAPI void write(void const* origin, uint64 num);

    // NOLINTEND
};
