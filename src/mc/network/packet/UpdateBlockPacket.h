#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class UpdateBlockPacket : public ::Packet {
public:
    enum class BlockLayer : uint {
        Standard = 0,
        Extra    = 1,
        Count    = 2,
    };
    enum class BlockUpdateFlag : uchar {
        None                = 0,
        Neighbors           = 1 << 0,
        Network             = 1 << 1,
        NoGraphic           = 1 << 2,
        Priority            = 1 << 3,
        ForceNoticeListener = 1 << 4,
        All                 = Neighbors | Network, // default value
        AllPriority         = All | Priority,
    };

    static const bool          SHARE_WITH_HANDLER = true; // constant
    class NetworkBlockPosition mPos;                      // this+0x30
    BlockLayer                 mLayer;                    // this+0x3C
    BlockUpdateFlag            mUpdateFlags;              // this+0x40
    uint                       mRuntimeId;                // this+0x44

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateBlockPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI UpdateBlockPacket();

    MCAPI UpdateBlockPacket(class BlockPos const& pos, uint layer, uint runtimeId, uchar updateFlags);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(class BlockPos const& pos, uint layer, uint runtimeId, uchar updateFlags);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
