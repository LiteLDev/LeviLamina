#pragma once
#include "llapi/mc/BinaryStream.hpp"
#include "llapi/mc/Packet.hpp"

template <int pid, bool batching = true, bool compress = true>
class NetworkPacket : public Packet {
public:
    std::string_view view;
    NetworkPacket() {
        incompressible = compress;
    }
    NetworkPacket(std::string_view sv)
    : view(sv) {
        incompressible = compress;
    }
    inline virtual ~NetworkPacket() {
    }

    virtual enum MinecraftPacketIds getId() const {
        return (enum MinecraftPacketIds)pid;
    }
    virtual std::string getName() const {
        return "MyPkt";
    }
    virtual void write(BinaryStream& bs) const {
        bs.getRaw().append(view);
    }
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&) override {
        throw("TODO in MyPkt::_read()");
        return (enum StreamReadResult)0;
    }
    virtual void dummyread() {
        throw("TODO in MyPkt::dummyread()");
    }
    virtual bool disallowBatching() const {
        return !batching;
    }
};