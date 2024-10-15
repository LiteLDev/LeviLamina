#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/world/level/levelgen/structure/StructureEditorData.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class StructureBlockUpdatePacket : public ::Packet {
public:
    NetworkBlockPosition mBlockPos;      // this+0x30
    StructureEditorData  mData;          // this+0x40
    bool                 mTrigger;       // this+0xF0
    bool                 mIsWaterlogged; // this+0xF1

    // prevent constructor by default
    StructureBlockUpdatePacket& operator=(StructureBlockUpdatePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureBlockUpdatePacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI StructureBlockUpdatePacket();

    MCAPI StructureBlockUpdatePacket(class StructureBlockUpdatePacket const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class StructureBlockUpdatePacket const&);

    MCAPI void* ctor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
