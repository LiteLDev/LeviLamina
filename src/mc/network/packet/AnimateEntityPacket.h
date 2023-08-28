#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/molang/MolangVersion.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

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
    AnimateEntityPacket& operator=(AnimateEntityPacket const&) = delete;
    AnimateEntityPacket(AnimateEntityPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@AnimateEntityPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@AnimateEntityPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@AnimateEntityPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@AnimateEntityPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANIMATEENTITYPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AnimateEntityPacket();
#endif
    /**
     * @symbol ??0AnimateEntityPacket\@\@QEAA\@XZ
     */
    MCAPI AnimateEntityPacket();
    /**
     * @symbol
     * ??0AnimateEntityPacket\@\@QEAA\@AEBV?$vector\@VActorRuntimeID\@\@V?$allocator\@VActorRuntimeID\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@1M1W4MolangVersion\@\@1\@Z
     */
    MCAPI
    AnimateEntityPacket(std::vector<class ActorRuntimeID> const&, std::string const&, std::string const&, float, std::string const&, enum class MolangVersion, std::string const&);
    // NOLINTEND
};
