/**
 * @file  SetLastHurtByPacket.hpp
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
 * @brief MC class SetLastHurtByPacket.
 *
 */
class SetLastHurtByPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETLASTHURTBYPACKET
public:
    class SetLastHurtByPacket& operator=(class SetLastHurtByPacket const &) = delete;
    SetLastHurtByPacket(class SetLastHurtByPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@SetLastHurtByPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@SetLastHurtByPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SetLastHurtByPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@SetLastHurtByPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETLASTHURTBYPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SetLastHurtByPacket();
#endif
    /**
     * @symbol ??0SetLastHurtByPacket\@\@QEAA\@W4ActorType\@\@\@Z
     */
    MCAPI SetLastHurtByPacket(enum class ActorType);
    /**
     * @symbol ??0SetLastHurtByPacket\@\@QEAA\@XZ
     */
    MCAPI SetLastHurtByPacket();

};
