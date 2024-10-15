#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/registry/TrimMaterial.h"
#include "mc/world/item/registry/TrimPattern.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class TrimDataPacket : public ::Packet {
public:
    std::vector<TrimPattern>  mTrimPatterns;  // this+0x30
    std::vector<TrimMaterial> mTrimMaterials; // this+0x48

    // prevent constructor by default
    TrimDataPacket& operator=(TrimDataPacket const&);
    TrimDataPacket(TrimDataPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TrimDataPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI TrimDataPacket();

    MCAPI static class TrimDataPacket prepareFromRegistries(
        class TrimPatternRegistry const&  patternRegistry,
        class TrimMaterialRegistry const& materialRegistry
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
