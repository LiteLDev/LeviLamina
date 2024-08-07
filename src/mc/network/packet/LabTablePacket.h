#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/LabTableReactionType.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/LabTableReactionType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class LabTablePacket : public ::Packet {
public:
    // LabTablePacket inner types define
    enum class Type : uchar {
        StartCombine  = 0x0,
        StartReaction = 0x1,
        Reset         = 0x2,
    };

public:
    Type                 mType;     // this+0x30
    BlockPos             mPos;      // this+0x34
    LabTableReactionType mReaction; // this+0x40

    // prevent constructor by default
    LabTablePacket& operator=(LabTablePacket const&);
    LabTablePacket(LabTablePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LabTablePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI LabTablePacket();

    MCAPI LabTablePacket(class BlockPos const& pos, ::LabTableReactionType reaction);

    MCAPI LabTablePacket(::LabTablePacket::Type type, class BlockPos const& pos);

    // NOLINTEND
};
