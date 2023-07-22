/**
 * @file  MobEffectPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MobEffectPacket.
 *
 */
class MobEffectPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECTPACKET
public:
    class MobEffectPacket& operator=(class MobEffectPacket const &) = delete;
    MobEffectPacket(class MobEffectPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MobEffectPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@MobEffectPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@MobEffectPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@MobEffectPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@MobEffectPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0MobEffectPacket\@\@QEAA\@XZ
     */
    MCAPI MobEffectPacket();
    /**
     * @symbol  ??0MobEffectPacket\@\@QEAA\@VActorRuntimeID\@\@W4Event\@0\@HHH_N\@Z
     */
    MCAPI MobEffectPacket(class ActorRuntimeID, enum class MobEffectPacket::Event, int, int, int, bool);

};