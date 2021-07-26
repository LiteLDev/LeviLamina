#pragma once

#include <cstdint>
#include <cstring>
#include <string>
#include <string_view>

#include "../FakeGSL/string_span.h"
#include "../dll.h"

class IDataInput {
public:
    inline IDataInput() {
    }
    inline virtual ~IDataInput() {
    }
    virtual std::string readString()                  = 0;
    virtual std::string readLongString()              = 0;
    virtual float       readFloat()                   = 0;
    virtual double      readDouble()                  = 0;
    virtual char        readByte()                    = 0;
    virtual short       readShort()                   = 0;
    virtual int         readInt()                     = 0;
    virtual int64_t     readLongLong()                = 0;
    virtual bool        readBytes(void*, std::size_t) = 0;
    virtual std::size_t numBytesLeft() const          = 0;
};

class IDataOutput {
public:
    inline IDataOutput() {
    }
    inline virtual ~IDataOutput() {
    }
    virtual void writeString(gsl::cstring_span<>)     = 0;
    virtual void writeLongString(gsl::cstring_span<>) = 0;
    virtual void writeFloat(float)                    = 0;
    virtual void writeDouble(double)                  = 0;
    virtual void writeByte(char)                      = 0;
    virtual void writeShort(short)                    = 0;
    virtual void writeInt(int)                        = 0;
    virtual void writeLongLong(int64_t)               = 0;
    virtual void writeBytes(void const*, std::size_t) = 0;
};

class BytesDataInput : public IDataInput {
public:
    inline BytesDataInput() {
    }
    inline virtual ~BytesDataInput() {
    }
    MCAPI virtual std::string readString();
    MCAPI virtual std::string readLongString();
    MCAPI virtual float       readFloat();
    MCAPI virtual double      readDouble();
    MCAPI virtual char        readByte();
    MCAPI virtual short       readShort();
    MCAPI virtual int         readInt();
    MCAPI virtual int64_t     readLongLong();
    virtual bool              readBytes(void*, std::size_t) = 0;
    virtual std::size_t       numBytesLeft() const          = 0;
};

class BytesDataOutput : public IDataOutput {
public:
    inline BytesDataOutput() {
    }
    inline virtual ~BytesDataOutput() {
    }
    MCAPI virtual void writeString(gsl::cstring_span<>);
    MCAPI virtual void writeLongString(gsl::cstring_span<>);
    MCAPI virtual void writeFloat(float);
    MCAPI virtual void writeDouble(double);
    MCAPI virtual void writeByte(char);
    MCAPI virtual void writeShort(short);
    MCAPI virtual void writeInt(int);
    MCAPI virtual void writeLongLong(int64_t);
    virtual void       writeBytes(void const*, std::size_t) = 0;
};

class ReadOnlyBinaryStream;

class BinaryDataInput : public BytesDataInput {
public:
    ReadOnlyBinaryStream& stream;
    inline BinaryDataInput(ReadOnlyBinaryStream& stream)
        : stream(stream) {
    }
    MCAPI virtual ~BinaryDataInput();
    MCAPI virtual std::string readString();
    MCAPI virtual std::string readLongString();
    MCAPI virtual float       readFloat();
    MCAPI virtual double      readDouble();
    MCAPI virtual char        readByte();
    MCAPI virtual short       readShort();
    MCAPI virtual int         readInt();
    MCAPI virtual int64_t     readLongLong();
    MCAPI virtual bool        readBytes(void*, std::size_t);
    MCAPI virtual std::size_t numBytesLeft() const;
};

class BinaryStream;

class BinaryDataOutput : public BytesDataOutput {
public:
    BinaryStream& stream;
    inline BinaryDataOutput(BinaryStream& stream)
        : stream(stream) {
    }
    MCAPI virtual ~BinaryDataOutput();
    MCAPI virtual void writeString(gsl::cstring_span<>);
    MCAPI virtual void writeLongString(gsl::cstring_span<>);
    MCAPI virtual void writeFloat(float);
    MCAPI virtual void writeDouble(double);
    MCAPI virtual void writeByte(char);
    MCAPI virtual void writeShort(short);
    MCAPI virtual void writeInt(int);
    MCAPI virtual void writeLongLong(int64_t);
    MCAPI virtual void writeBytes(void const*, std::size_t);
};

class StringByteInput : public BytesDataInput {
public:
    size_t      pos, total;
    char const* buffer;
    inline StringByteInput(gsl::cstring_span<> span)
        : pos(0)
        , total(span.size())
        , buffer(span.data()) {
    }
    MCAPI virtual ~StringByteInput();
    MCAPI virtual bool        readBytes(void*, std::size_t);
    MCAPI virtual std::size_t numBytesLeft() const;
};

class SimpleStringByteInput : public BytesDataInput {
    std::string_view buffer;

public:
    inline SimpleStringByteInput(std::string_view buffer)
        : buffer(buffer) {
    }
    inline bool readBytes(void* out, std::size_t length) override {
        if (buffer.size() < length)
            return false;
        memcpy(out, buffer.data(), length);
        buffer.remove_prefix(length);
        return true;
    }
    inline std::size_t numBytesLeft() const override {
        return buffer.size();
    }
};

class StringByteOutput : public BytesDataOutput {
public:
    std::string& str;
    inline StringByteOutput(std::string& str)
        : str(str) {
    }
    MCAPI virtual ~StringByteOutput();
    MCAPI virtual void writeBytes(void const*, std::size_t);
};

class SimpleStringByteOutput : public BytesDataOutput {
    std::string buffer;

public:
    inline SimpleStringByteOutput(){};
    inline void writeBytes(const void* inp, std::size_t length) override {
        buffer += std::string_view{(char const*)inp, length};
    }

    inline std::string const& getRef() const {
        return buffer;
    }
    inline std::string get() {
        return std::move(buffer);
    }
};

class BigEndianStringByteInput : public StringByteInput {
public:
    inline BigEndianStringByteInput(gsl::cstring_span<> span)
        : StringByteInput(span) {
    }
    MCAPI virtual ~BigEndianStringByteInput();
    MCAPI virtual float   readFloat();
    MCAPI virtual double  readDouble();
    MCAPI virtual char    readByte();
    MCAPI virtual short   readShort();
    MCAPI virtual int     readInt();
    MCAPI virtual int64_t readLongLong();
    MCAPI virtual bool    readBytes(void*, std::size_t);
    MCAPI bool            readBigEndinanBytes(void*, std::size_t);
};

class BigEndianStringByteOutput : public StringByteOutput {
public:
    inline BigEndianStringByteOutput(std::string& str)
        : StringByteOutput(str) {
    }
    MCAPI virtual ~BigEndianStringByteOutput();
    MCAPI virtual void writeFloat(float);
    MCAPI virtual void writeDouble(double);
    MCAPI virtual void writeByte(char);
    MCAPI virtual void writeShort(short);
    MCAPI virtual void writeInt(int);
    MCAPI virtual void writeLongLong(int64_t);
    MCAPI virtual void writeReverseBytes(void const*, std::size_t);
};

namespace RakNet {
class BitStream;
}

class RakDataInput : public BytesDataInput {
public:
    RakNet::BitStream& stream;
    inline RakDataInput(RakNet::BitStream& stream)
        : stream(stream) {
    }
    MCAPI virtual ~RakDataInput();
    MCAPI virtual bool        readBytes(void*, std::size_t);
    MCAPI virtual std::size_t numBytesLeft() const;
};

class RakDataOutput : public BytesDataOutput {
public:
    RakNet::BitStream& stream;
    inline RakDataOutput(RakNet::BitStream& stream)
        : stream(stream) {
    }
    MCAPI virtual ~RakDataOutput();
    MCAPI virtual void writeBytes(void const*, std::size_t);
};