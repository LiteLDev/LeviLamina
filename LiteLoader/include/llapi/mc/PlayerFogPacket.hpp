/**
 * @file  PlayerFogPacket.hpp
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
 * @brief MC class PlayerFogPacket.
 *
 */
class PlayerFogPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERFOGPACKET
public:
    class PlayerFogPacket& operator=(class PlayerFogPacket const &) = delete;
    PlayerFogPacket(class PlayerFogPacket const &) = delete;
    PlayerFogPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PlayerFogPacket();
    /**
     * @hash   -1667799623
     * @vftbl  1
     * @symbol  ?getId\@PlayerFogPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1947779174
     * @vftbl  2
     * @symbol  ?getName\@PlayerFogPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1285014529
     * @vftbl  3
     * @symbol  ?write\@PlayerFogPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1168465281
     * @vftbl  6
     * @symbol  ?_read\@PlayerFogPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1481678723
     * @symbol  ??0PlayerFogPacket\@\@QEAA\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI PlayerFogPacket(std::vector<std::string>);

};