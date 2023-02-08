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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SpawnParticleEffectPacket();
    /**
     * @hash   1575595588
     * @vftbl  1
     * @symbol  ?getId\@SpawnParticleEffectPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -834901775
     * @vftbl  2
     * @symbol  ?getName\@SpawnParticleEffectPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1042459946
     * @vftbl  3
     * @symbol  ?write\@SpawnParticleEffectPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   542321686
     * @vftbl  6
     * @symbol  ?_read\@SpawnParticleEffectPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1321453354
     * @symbol  ??0SpawnParticleEffectPacket\@\@QEAA\@XZ
     */
    MCAPI SpawnParticleEffectPacket();
    /**
     * @hash   -1841339270
     * @symbol  ??0SpawnParticleEffectPacket\@\@QEAA\@AEBVVec3\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@EV?$optional\@VMolangVariableMap\@\@\@3\@\@Z
     */
    MCAPI SpawnParticleEffectPacket(class Vec3 const &, std::string const &, unsigned char, class std::optional<class MolangVariableMap>);

};