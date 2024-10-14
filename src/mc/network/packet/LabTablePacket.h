#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/level/block/actor/LabTableReactionType.h"

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

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
