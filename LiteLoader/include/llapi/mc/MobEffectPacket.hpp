/**
 * @file  MobEffectPacket.hpp
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@MobEffectPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@MobEffectPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@MobEffectPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@MobEffectPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOBEFFECTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MobEffectPacket();
#endif
    /**
     * @symbol ??0MobEffectPacket\@\@QEAA\@VActorRuntimeID\@\@W4Event\@0\@HHH_N\@Z
     */
    MCAPI MobEffectPacket(class ActorRuntimeID, enum class MobEffectPacket::Event, int, int, int, bool);
    /**
     * @symbol ??0MobEffectPacket\@\@QEAA\@XZ
     */
    MCAPI MobEffectPacket();

};
