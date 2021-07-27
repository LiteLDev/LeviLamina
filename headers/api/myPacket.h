#pragma once
#include "loader/Loader.h"
#include <stl/useful.h>
#include <string>
#include <string_view>
using std::string_view;
class StreamReadResult;
class ReadOnlyBinaryStream;
class BinaryStream {
public:
    std::string& getRaw() { // BinaryStream::getAndReleaseData
        return *dAccess<std::string*, 96>(this);
    }
};

enum class PacketReliability {
    Relible,
    RelibleOrdered
};

class Packet {
public:
    unsigned          unk2            = 2;                                 // 8
    PacketReliability reliableOrdered = PacketReliability::RelibleOrdered; // 12
    unsigned char     clientSubId     = 0;                                 // 16
    uint64_t          unk24           = 0;                                 // 24
    uint64_t          unk40           = 0;                                 // 32
    uint32_t          incompressible  = 0;                                 // 40
    inline Packet(unsigned compress)
        : incompressible(!compress) {
    }
    inline Packet() {
    }
    inline virtual ~Packet() {
    }
    virtual int         getId() const              = 0;
    virtual std::string getName() const            = 0;
    virtual void        write(BinaryStream&) const = 0;
    virtual void        dummyread()                = 0;
    virtual bool        disallowBatching() const   = 0;
};
static_assert(sizeof(Packet) == 48);

template <int pid, bool batching = true, bool compress = true>
class MyPkt : public Packet {
public:
    string_view view;
    MyPkt() {
        incompressible = compress;
    }
    MyPkt(string_view sv)
        : view(sv) {
        incompressible = compress;
    }
    inline virtual ~MyPkt() {
    }
    virtual int getId() const {
        return pid;
    }
    virtual std::string getName() const {
        return "MyPkt";
    }
    virtual void write(BinaryStream& bs) const {
        bs.getRaw().append(view);
    }
    virtual void dummyread() {
    }
    virtual bool disallowBatching() const {
        return !batching;
    }
};
static_assert(offsetof(MyPkt<0>, view) == 48);