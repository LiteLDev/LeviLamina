/**
 * @file  ItemFrameDropItemPacket.hpp
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
 * @brief MC class ItemFrameDropItemPacket.
 *
 */
class ItemFrameDropItemPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMFRAMEDROPITEMPACKET
public:
    class ItemFrameDropItemPacket& operator=(class ItemFrameDropItemPacket const &) = delete;
    ItemFrameDropItemPacket(class ItemFrameDropItemPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemFrameDropItemPacket();
    /**
     * @hash   -1346657286
     * @vftbl  1
     * @symbol  ?getId\@ItemFrameDropItemPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -407789913
     * @vftbl  2
     * @symbol  ?getName\@ItemFrameDropItemPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1140130080
     * @vftbl  3
     * @symbol  ?write\@ItemFrameDropItemPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   2073494560
     * @vftbl  6
     * @symbol  ?_read\@ItemFrameDropItemPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -885971664
     * @symbol  ??0ItemFrameDropItemPacket\@\@QEAA\@XZ
     */
    MCAPI ItemFrameDropItemPacket();

};