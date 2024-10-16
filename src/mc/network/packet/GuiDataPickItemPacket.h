#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class GuiDataPickItemPacket : public ::Packet {
public:
    std::string mItemName;       // this+0x30
    std::string mItemEffectName; // this+0x50
    int         mSlot;           // this+0x70

    // prevent constructor by default
    GuiDataPickItemPacket& operator=(GuiDataPickItemPacket const&);
    GuiDataPickItemPacket(GuiDataPickItemPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GuiDataPickItemPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI GuiDataPickItemPacket();

    MCAPI GuiDataPickItemPacket(std::string const& name, std::string const& effect, int const& slot);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& name, std::string const& effect, int const& slot);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
