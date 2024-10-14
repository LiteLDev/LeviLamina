#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/CompoundTag.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class BiomeDefinitionListPacket : public ::Packet {
public:
    CompoundTag mBiomeData; // this+0x30

    // prevent constructor by default
    BiomeDefinitionListPacket& operator=(BiomeDefinitionListPacket const&);
    BiomeDefinitionListPacket(BiomeDefinitionListPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BiomeDefinitionListPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 5
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI BiomeDefinitionListPacket();

    MCAPI explicit BiomeDefinitionListPacket(class CompoundTag biomeData);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI class Bedrock::Result<void> read$(class ReadOnlyBinaryStream& stream);

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
