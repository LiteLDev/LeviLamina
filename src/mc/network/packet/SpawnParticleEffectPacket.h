#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class SpawnParticleEffectPacket : public ::Packet {

public:
    // prevent constructor by default
    SpawnParticleEffectPacket& operator=(SpawnParticleEffectPacket const&) = delete;
    SpawnParticleEffectPacket(SpawnParticleEffectPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@SpawnParticleEffectPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SpawnParticleEffectPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SpawnParticleEffectPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SpawnParticleEffectPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPAWNPARTICLEEFFECTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SpawnParticleEffectPacket();
#endif
    /**
     * @symbol
     * ??0SpawnParticleEffectPacket\@\@QEAA\@AEBVVec3\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@EV?$optional\@VMolangVariableMap\@\@\@3\@\@Z
     */
    MCAPI
    SpawnParticleEffectPacket(class Vec3 const&, std::string const&, unsigned char, std::optional<class MolangVariableMap>);
    /**
     * @symbol ??0SpawnParticleEffectPacket\@\@QEAA\@XZ
     */
    MCAPI SpawnParticleEffectPacket();
    // NOLINTEND
};
