#pragma once
#include <stl/useful.h>
#include <string>
#include <string_view>
#include "loader/Loader.h"
using std::string_view;
class BinaryStream {
  public:
    std::string &getRaw() {  // BinaryStream::getAndReleaseData
        return *dAccess<std::string *, 96>(this);
    }
};
class Packet {
  public:
    u32 unk2            = 2;  // 8
    u32 reliableOrdered = 1;  // 12
    u8 clientSubId      = 0;  // 16
    u64 unk24_0         = 0;  // 24
    u64 unk24_1         = 0;  // 32
    u32 compressible    = 0;  // 40
    inline Packet(unsigned compress) : compressible(compress) {}
    inline Packet() {}
    inline virtual ~Packet() {}
    virtual int getId() const                = 0;
    virtual std::string getName() const      = 0;
    virtual void write(BinaryStream &) const = 0;
    virtual void dummyread()                 = 0;
    virtual bool disallowBatching() const    = 0;
};
static_assert(sizeof(Packet) == 48);

template <int pid, bool batching = true, bool compress = true>
class MyPkt : public Packet {
  public:
    string_view view;
    MyPkt() { compressible = compress; }
    MyPkt(string_view sv) : view(sv) { compressible = compress; }
    inline virtual ~MyPkt() {}
    virtual int getId() const { return pid; }
    virtual std::string getName() const { return "MyPkt"; }
    virtual void write(BinaryStream &bs) const { bs.getRaw().append(view); }
    virtual void dummyread() {}
    virtual bool disallowBatching() const { return !batching; }
};
static_assert(offsetof(MyPkt<0>, view) == 48);
