/**
 * @file  SpawnParticleEffectPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnParticleEffectPacket.
 *
 */
class SpawnParticleEffectPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNPARTICLEEFFECTPACKET
public:
    class SpawnParticleEffectPacket& operator=(class SpawnParticleEffectPacket const &) = delete;
    SpawnParticleEffectPacket(class SpawnParticleEffectPacket const &) = delete;
#endif

public:
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
     * @symbol ?getName\@SpawnParticleEffectPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SpawnParticleEffectPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@SpawnParticleEffectPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPAWNPARTICLEEFFECTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SpawnParticleEffectPacket();
#endif
    /**
     * @symbol ??0SpawnParticleEffectPacket\@\@QEAA\@AEBVVec3\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@EV?$optional\@VMolangVariableMap\@\@\@3\@\@Z
     */
    MCAPI SpawnParticleEffectPacket(class Vec3 const &, std::string const &, unsigned char, class std::optional<class MolangVariableMap>);
    /**
     * @symbol ??0SpawnParticleEffectPacket\@\@QEAA\@XZ
     */
    MCAPI SpawnParticleEffectPacket();

};
