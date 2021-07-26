#pragma once

#include <cstddef>
#include <cstdint>
#include <cstring>
#include <string>

#include "../dll.h"

class ReadOnlyBinaryStream {
public:
    size_t      read_pointer{};
    bool        unk;
    std::string ownbuf, *pbuf;
    ReadOnlyBinaryStream(std::string&& buffer)
        : ownbuf(std::move(buffer))
        , pbuf{&ownbuf} {
    }
    MCAPI ReadOnlyBinaryStream(std::string const& buffer, bool owned);
    MCAPI virtual ~ReadOnlyBinaryStream();

    template <typename T>
    inline bool dread(T& ref) {
        return read(&ref, sizeof ref);
    }

    inline std::string const& getData() const {
        return *pbuf;
    }
    inline size_t getLength() const {
        return pbuf->size();
    }
    inline size_t getReadPointer() const {
        return read_pointer;
    }
    inline size_t getUnreadLength() const {
        return getLength() - getReadPointer();
    }
    inline void setReadPointer(std::size_t size) {
        auto len = getLength();
        if (size <= len)
            read_pointer = size;
        else
            read_pointer = len;
    }

    MCAPI bool          canReadBool() const;
    MCAPI unsigned char getByte();
    MCAPI uint8_t       getUnsignedChar();
    MCAPI uint16_t      getUnsignedShort();
    MCAPI uint32_t      getUnsignedVarInt();
    MCAPI uint64_t      getUnsignedVarInt64();
    inline int32_t      getVarInt() {
        auto ret = getUnsignedVarInt();
        return ret & 1 ? ~(ret >> 1) : ret >> 1;
    }
    inline int64_t getVarInt64() {
        auto ret = getUnsignedVarInt64();
        return ret & 1 ? ~(ret >> 1) : ret >> 1;
    }
    inline bool getBool() {
        return getByte();
    }
    MCAPI double  getFloat();
    inline double getDouble() {
        double ret;
        dread(ret);
        return ret;
    }
    inline double getFixedFloat(double fi) {
        return getVarInt64() / fi;
    }
    inline double getNormalizedFloat() {
        return getFixedFloat(2147483647.0);
    }
    MCAPI int32_t  getSignedBigEndianInt();
    inline int16_t getSignedShort() {
        int16_t ret;
        dread(ret);
        return ret;
    }
    inline int32_t getSignedInt() {
        int32_t ret;
        dread(ret);
        return ret;
    }
    inline int64_t getSignedInt64() {
        int64_t ret;
        dread(ret);
        return ret;
    }
    MCAPI void getString(std::string&);
    MCAPI std::string getString();

private:
    MCAPI virtual bool read(void*, std::uint64_t);
};

static_assert(offsetof(ReadOnlyBinaryStream, pbuf) == 56);

class BinaryStream : public ReadOnlyBinaryStream {
public:
    std::string writebuf, *pwbuf;

    MCAPI BinaryStream();
    MCAPI BinaryStream(std::string&, bool owned);

    inline void reset() {
        writebuf.clear();
        setReadPointer(0);
    }
    inline void reserve(size_t size) {
        writebuf.reserve(size);
    }
    inline std::string getAndReleaseData() {
        std::string ret = std::move(writebuf);
        reset();
        return ret;
    }

    inline void write(void const* data, std::uint64_t len) {
        writebuf.append((char*)data, len);
    }
    template <typename T>
    void dwrite(T const& value) {
        write(&value, sizeof value);
    }

    inline void writeByte(unsigned char byte) {
        dwrite(byte);
    }
    inline void writeBool(bool flag) {
        writeByte(flag);
    }
    inline void writeDouble(double val) {
        dwrite(val);
    }
    inline void writeFixedFloat(float f, double fi) {
        writeVarInt64(f * fi);
    }
    inline void writeFloat(float val) {
        dwrite(val);
    }
    inline void writeNormalizedFloat(float f) {
        writeFixedFloat(f, 2147483647.0);
    }
    MCAPI void  writeSignedBigEndianInt(int32_t val);
    inline void writeSignedshort(int16_t val) {
        dwrite(val);
    }
    inline void writeSignedInt(int32_t val) {
        dwrite(val);
    }
    inline void writeSignedInt64(int64_t val) {
        dwrite(val);
    }
    inline void writeUnsignedChar(uint8_t val) {
        dwrite(val);
    }
    inline void writeUnsignedShort(uint16_t val) {
        dwrite(val);
    }
    inline void writeUnsignedInt(uint32_t val) {
        dwrite(val);
    }
    inline void writeUnsignedInt64(uint64_t val) {
        dwrite(val);
    }
    MCAPI void  writeUnsignedVarInt(uint32_t val);
    MCAPI void  writeUnsignedVarInt64(uint64_t val);
    inline void writeVarInt(int32_t val) {
        writeUnsignedVarInt(val > 0 ? 2 * val : ~(2 * val));
    }
    inline void writeVarInt64(int64_t val) {
        writeUnsignedVarInt64(val > 0 ? 2 * val : ~(2 * val));
    }
};

static_assert(offsetof(BinaryStream, writebuf) == 64);
static_assert(offsetof(BinaryStream, pwbuf) == 96);