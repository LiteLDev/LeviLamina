#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/molang/MolangVersion.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/util/molang/MolangVersion.h"

class AnimateEntityPacket : public ::Packet {
public:
    std::vector<ActorRuntimeID> mRuntimeIds;            // this+0x30
    std::string                 mAnimation;             // this+0x48
    std::string                 mNextState;             // this+0x68
    std::string                 mStopExpression;        // this+0x88
    MolangVersion               mStopExpressionVersion; // this+0xa8
    std::string                 mController;            // this+0xb0
    float                       mBlendOutTime;          // this+0xd0

    // prevent constructor by default
    AnimateEntityPacket& operator=(AnimateEntityPacket const&);
    AnimateEntityPacket(AnimateEntityPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AnimateEntityPacket@@UEAA@XZ
    virtual ~AnimateEntityPacket();

    // vIndex: 1, symbol: ?getId@AnimateEntityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AnimateEntityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@AnimateEntityPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& s) const;

    // vIndex: 8, symbol:
    // ?_read@AnimateEntityPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& s);

    // symbol: ??0AnimateEntityPacket@@QEAA@XZ
    MCAPI AnimateEntityPacket();

    // symbol:
    // ??0AnimateEntityPacket@@QEAA@AEBV?$vector@VActorRuntimeID@@V?$allocator@VActorRuntimeID@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@1M1W4MolangVersion@@1@Z
    MCAPI AnimateEntityPacket(
        std::vector<class ActorRuntimeID> const&,
        std::string const& animation,
        std::string const&,
        float              blendOutTime,
        std::string const& stopExpression,
        ::MolangVersion,
        std::string const& controller
    );

    // NOLINTEND
};
