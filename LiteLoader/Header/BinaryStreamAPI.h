#pragma once

#include <cstddef>
#include <cstdint>
#include <cstring>
#include <string>

#include <Global.h>

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
	std::string& getRaw() { // BinaryStream::getAndReleaseData
		return *dAccess<std::string*, 96>(this);
	}

private:
    MCAPI virtual bool read(void*, std::uint64_t);
};

static_assert(offsetof(ReadOnlyBinaryStream, pbuf) == 56);

class BinaryStream : public ReadOnlyBinaryStream {
public:
    std::string writebuf, *pwbuf;

    MCAPI BinaryStream();
    MCAPI BinaryStream(std::string&, bool owned);

   
    inline void reserve(size_t size) {
        writebuf.reserve(size);
    }
    inline void write(void const* data, std::uint64_t len) {
        writebuf.append((char*)data, len);
    }
    template <typename T>
    void dwrite(T const& value) {
        write(&value, sizeof value);
    }
    inline void writeFixedFloat(float f, double fi) {
        writeVarInt64(f * fi);
    }
    inline void writeNormalizedFloat(float f) {
        writeFixedFloat(f, 2147483647.0);
    }

    MCAPI std::string getAndReleaseData();
    MCAPI void reset();
    MCAPI void writeBool(bool);
    MCAPI void writeByte(unsigned char);
    MCAPI void writeDouble(double);
    MCAPI void writeFloat(float);
    MCAPI void writeSignedBigEndianInt(int);
    MCAPI void writeSignedInt(int);
    MCAPI void writeSignedInt64(__int64);
    MCAPI void writeSignedShort(short);
    MCAPI void writeString(class gsl::basic_string_span<char const, -1>);
    MCAPI void writeUnsignedChar(unsigned char);
    MCAPI void writeUnsignedInt(unsigned int);
    MCAPI void writeUnsignedInt64(unsigned __int64);
    MCAPI void writeUnsignedShort(unsigned short);
    MCAPI void writeUnsignedVarInt(unsigned int);
    MCAPI void writeUnsignedVarInt64(unsigned __int64);
    MCAPI void writeVarInt(int);
    MCAPI void writeVarInt64(__int64);


};

static_assert(offsetof(BinaryStream, writebuf) == 64);
static_assert(offsetof(BinaryStream, pwbuf) == 96);