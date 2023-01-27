/**
 * @file  MobEffectPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Packet.hpp"

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
     * @hash   1418562725
     * @vftbl  1
     * @symbol  ?getId\@MobEffectPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   71984978
     * @vftbl  2
     * @symbol  ?getName\@MobEffectPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1918034459
     * @vftbl  3
     * @symbol  ?write\@MobEffectPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   849757189
     * @vftbl  6
     * @symbol  ?_read\@MobEffectPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -54447467
     * @symbol  ??0MobEffectPacket\@\@QEAA\@XZ
     */
    MCAPI MobEffectPacket();
    /**
     * @hash   -860960232
     * @symbol  ??0MobEffectPacket\@\@QEAA\@VActorRuntimeID\@\@W4Event\@0\@HHH_N\@Z
     */
    MCAPI MobEffectPacket(class ActorRuntimeID, enum class MobEffectPacket::Event, int, int, int, bool);

};