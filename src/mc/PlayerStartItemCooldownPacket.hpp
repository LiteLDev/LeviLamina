/**
 * @file  PlayerStartItemCooldownPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerStartItemCooldownPacket.
 *
 */
class PlayerStartItemCooldownPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSTARTITEMCOOLDOWNPACKET
public:
    class PlayerStartItemCooldownPacket& operator=(class PlayerStartItemCooldownPacket const &) = delete;
    PlayerStartItemCooldownPacket(class PlayerStartItemCooldownPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PlayerStartItemCooldownPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@PlayerStartItemCooldownPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@PlayerStartItemCooldownPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@PlayerStartItemCooldownPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@PlayerStartItemCooldownPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0PlayerStartItemCooldownPacket\@\@QEAA\@XZ
     */
    MCAPI PlayerStartItemCooldownPacket();
    /**
     * @symbol  ??0PlayerStartItemCooldownPacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI PlayerStartItemCooldownPacket(std::string const &, int);

};