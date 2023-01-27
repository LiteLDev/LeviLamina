/**
 * @file  PlayerEnchantOptionsPacket.hpp
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
 * @brief MC class PlayerEnchantOptionsPacket.
 *
 */
class PlayerEnchantOptionsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERENCHANTOPTIONSPACKET
public:
    class PlayerEnchantOptionsPacket& operator=(class PlayerEnchantOptionsPacket const &) = delete;
    PlayerEnchantOptionsPacket(class PlayerEnchantOptionsPacket const &) = delete;
    PlayerEnchantOptionsPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PlayerEnchantOptionsPacket();
    /**
     * @hash   -644790304
     * @vftbl  1
     * @symbol  ?getId\@PlayerEnchantOptionsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   670811853
     * @vftbl  2
     * @symbol  ?getName\@PlayerEnchantOptionsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -491040918
     * @vftbl  3
     * @symbol  ?write\@PlayerEnchantOptionsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1128409606
     * @vftbl  6
     * @symbol  ?_read\@PlayerEnchantOptionsPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);

};