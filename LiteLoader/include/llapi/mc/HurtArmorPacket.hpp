/**
 * @file  HurtArmorPacket.hpp
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
 * @brief MC class HurtArmorPacket.
 *
 */
class HurtArmorPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HURTARMORPACKET
public:
    class HurtArmorPacket& operator=(class HurtArmorPacket const &) = delete;
    HurtArmorPacket(class HurtArmorPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~HurtArmorPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@HurtArmorPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@HurtArmorPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@HurtArmorPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@HurtArmorPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0HurtArmorPacket\@\@QEAA\@XZ
     */
    MCAPI HurtArmorPacket();
    /**
     * @symbol  ??0HurtArmorPacket\@\@QEAA\@W4ActorDamageCause\@\@HV?$bitset\@$03\@std\@\@\@Z
     */
    MCAPI HurtArmorPacket(enum class ActorDamageCause, int, class std::bitset<4>);

};