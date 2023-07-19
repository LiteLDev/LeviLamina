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

    virtual class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&) {
        throw("TODO");
    }
    virtual bool disallowBatching() const {
        return !batching;
    }
    virtual bool isValid() const {
        throw("TODO");
    }

    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&) override {
        throw("TODO in MyPkt::_read()");
        //return ExtendedStreamReadResult{(enum StreamReadResult)0, ""};
    }
};