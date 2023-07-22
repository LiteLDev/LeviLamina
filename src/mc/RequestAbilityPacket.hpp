/**
 * @file  RequestAbilityPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RequestAbilityPacket.
 *
 */
class RequestAbilityPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REQUESTABILITYPACKET
public:
    class RequestAbilityPacket& operator=(class RequestAbilityPacket const &) = delete;
    RequestAbilityPacket(class RequestAbilityPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RequestAbilityPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@RequestAbilityPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@RequestAbilityPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@RequestAbilityPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@RequestAbilityPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0RequestAbilityPacket\@\@QEAA\@XZ
     */
    MCAPI RequestAbilityPacket();
    /**
     * @symbol  ??0RequestAbilityPacket\@\@QEAA\@W4AbilitiesIndex\@\@_N\@Z
     */
    MCAPI RequestAbilityPacket(enum class AbilitiesIndex, bool);
    /**
     * @symbol  ?getAbility\@RequestAbilityPacket\@\@QEBA?AW4AbilitiesIndex\@\@XZ
     */
    MCAPI enum class AbilitiesIndex getAbility() const;
    /**
     * @symbol  ?tryGetBool\@RequestAbilityPacket\@\@QEBA_NAEA_N\@Z
     */
    MCAPI bool tryGetBool(bool &) const;

};