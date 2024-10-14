#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/BiomeDefinitionListPacket.h"
#include "mc/platform/Result.h"

class CompressedBiomeDefinitionListPacket : public ::BiomeDefinitionListPacket {
public:
    // prevent constructor by default
    CompressedBiomeDefinitionListPacket& operator=(CompressedBiomeDefinitionListPacket const&);
    CompressedBiomeDefinitionListPacket(CompressedBiomeDefinitionListPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompressedBiomeDefinitionListPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 5
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    MCAPI CompressedBiomeDefinitionListPacket();

    MCAPI explicit CompressedBiomeDefinitionListPacket(class CompoundTag biomeData);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI class Bedrock::Result<void> read$(class ReadOnlyBinaryStream& stream);

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
