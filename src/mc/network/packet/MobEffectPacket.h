#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class MobEffectPacket : public ::Packet {
public:
    // MobEffectPacket inner types declare
    // clang-format off

    // clang-format on

    // MobEffectPacket inner types define
    enum class Event {};

public:
    // prevent constructor by default
    MobEffectPacket& operator=(MobEffectPacket const&) = delete;
    MobEffectPacket(MobEffectPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@MobEffectPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@MobEffectPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@MobEffectPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@MobEffectPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOBEFFECTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MobEffectPacket(); // NOLINT
#endif
    /**
     * @symbol ??0MobEffectPacket\@\@QEAA\@VActorRuntimeID\@\@W4Event\@0\@HHH_N\@Z
     */
    MCAPI MobEffectPacket(class ActorRuntimeID, enum class MobEffectPacket::Event, int, int, int, bool); // NOLINT
    /**
     * @symbol ??0MobEffectPacket\@\@QEAA\@XZ
     */
    MCAPI MobEffectPacket(); // NOLINT
};
