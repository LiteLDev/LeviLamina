#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/network/packet/SubChunkPacket.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/dimension/Dimension.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class SubChunkRequestPacket : public ::Packet {
public:
    DimensionType                                  mDimensionType;      // this+0x30
    std::vector<SubChunkPos>                       mSubChunkPos;        // this+0x38
    std::vector<SubChunkPacket::SubChunkPosOffset> mSubChunkPosOffsets; // this+0x50
    uint                                           mRequestCount;       // this+0x68
    SubChunkPos                                    mCenterPos;          // this+0x6C

    bool mArePositionsAbsolute; // this+0x78


    // prevent constructor by default
    SubChunkRequestPacket& operator=(SubChunkRequestPacket const&);
    SubChunkRequestPacket(SubChunkRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SubChunkRequestPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SubChunkRequestPacket();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
