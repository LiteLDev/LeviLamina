#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/level/levelgen/structure/StructureTemplateResponseType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/level/levelgen/structure/StructureTemplateResponseType.h"

class StructureTemplateDataResponsePacket : public ::Packet {
public:
    std::string                   mStructureName; // this+0x30
    std::unique_ptr<CompoundTag>  mStructureTag;  // this+0x50
    StructureTemplateResponseType mResponseType;  // this+0x58

    // prevent constructor by default
    StructureTemplateDataResponsePacket& operator=(StructureTemplateDataResponsePacket const&);
    StructureTemplateDataResponsePacket(StructureTemplateDataResponsePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureTemplateDataResponsePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI StructureTemplateDataResponsePacket();

    MCAPI StructureTemplateDataResponsePacket(
        std::string const&                 structureName,
        std::unique_ptr<class CompoundTag> structureTag,
        ::StructureTemplateResponseType    type
    );

    MCAPI class StructureTemplateDataResponsePacket& operator=(class StructureTemplateDataResponsePacket&&);

    // NOLINTEND
};
