#pragma once

#include "../dll.h"
#include <cstdint>
#include <string>
#include <ezmc/Packet/MinecraftPacketIds.h>

enum class StreamReadResult;
struct ExtendedStreamReadResult;
class BinaryStream;
class ReadOnlyBinaryStream;
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
    virtual MinecraftPacketIds getId() const              = 0;
    virtual std::string        getName() const            = 0;
    virtual void               write(BinaryStream&) const = 0;
    //Packet::_read() Wrapper
    inline virtual StreamReadResult read(ReadOnlyBinaryStream& stream) {
        return _read(stream);
    }

    MCAPI virtual ExtendedStreamReadResult readExtended(ReadOnlyBinaryStream& stream);

    inline virtual bool disallowBatching() const {
        return false;
    }

private:
    virtual StreamReadResult _read(ReadOnlyBinaryStream&) = 0;
};