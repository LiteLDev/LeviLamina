#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"
#include "mc/platform/Result.h"

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

    MCAPI void writeBool(bool value, char const* = nullptr, char const* = nullptr);

    MCAPI void writeByte(uchar value, char const* = nullptr, char const* = nullptr);

    MCAPI void writeDouble(double value, char const* = nullptr, char const* = nullptr);

    MCAPI void writeFloat(float value, char const* = nullptr, char const* = nullptr);

    MCAPI void writeSignedBigEndianInt(int value, char const* = nullptr, char const* = nullptr);

    MCAPI void writeSignedInt(int value, char const* = nullptr, char const* = nullptr);

    MCAPI void writeSignedInt64(int64 value, char const* = nullptr, char const* = nullptr);

    MCAPI void writeSignedShort(short value, char const* = nullptr, char const* = nullptr);

    MCAPI void writeString(std::string_view value, char const* = nullptr, char const* = nullptr);

    MCAPI void writeUnsignedChar(uchar value, char const* = nullptr, char const* = nullptr);

    MCAPI void writeUnsignedInt(uint value, char const* = nullptr, char const* = nullptr);

    MCAPI void writeUnsignedInt64(uint64 value, char const* = nullptr, char const* = nullptr);

    MCAPI void writeUnsignedShort(ushort value, char const* = nullptr, char const* = nullptr);

    MCAPI void writeUnsignedVarInt(uint uvalue, char const* = nullptr, char const* = nullptr);

    MCAPI void writeUnsignedVarInt64(uint64 uvalue, char const* = nullptr, char const* = nullptr);

    MCAPI void writeVarInt(int value, char const* = nullptr, char const* = nullptr);

    MCAPI void writeVarInt64(int64 value, char const* = nullptr, char const* = nullptr);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _writeInteger(int value, char const* = nullptr, char const* = nullptr);

    MCAPI void _writeInteger(short value, char const* = nullptr, char const* = nullptr);

    MCAPI void _writeInteger(uchar value, char const* = nullptr, char const* = nullptr);

    MCAPI void _writeInteger(uint value, char const* = nullptr, char const* = nullptr);

    MCAPI void _writeInteger(ushort value, char const* = nullptr, char const* = nullptr);

    MCAPI void write(void const* origin, uint64 num);

    // NOLINTEND
};
