/**
 * @file  RequestAbilityPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   1646964427
     * @vftbl  1
     * @symbol  ?getId\@RequestAbilityPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   243572088
     * @vftbl  2
     * @symbol  ?getName\@RequestAbilityPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1939095681
     * @vftbl  3
     * @symbol  ?write\@RequestAbilityPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   503124607
     * @vftbl  6
     * @symbol  ?_read\@RequestAbilityPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -551624673
     * @symbol  ??0RequestAbilityPacket\@\@QEAA\@XZ
     */
    MCAPI RequestAbilityPacket();
    /**
     * @hash   869859091
     * @symbol  ??0RequestAbilityPacket\@\@QEAA\@W4AbilitiesIndex\@\@_N\@Z
     */
    MCAPI RequestAbilityPacket(enum class AbilitiesIndex, bool);
    /**
     * @hash   -1551144892
     * @symbol  ?getAbility\@RequestAbilityPacket\@\@QEBA?AW4AbilitiesIndex\@\@XZ
     */
    MCAPI enum class AbilitiesIndex getAbility() const;
    /**
     * @hash   -1361025442
     * @symbol  ?tryGetBool\@RequestAbilityPacket\@\@QEBA_NAEA_N\@Z
     */
    MCAPI bool tryGetBool(bool &) const;

};