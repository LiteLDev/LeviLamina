/**
 * @file  ItemFrameDropItemPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

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
     * @symbol __unk_destructor_0
     */
    virtual ~ItemFrameDropItemPacket();
    /**
     * @hash   -418623430
     * @vftbl  1
     * @symbol ?getId@ItemFrameDropItemPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   520243943
     * @vftbl  2
     * @symbol ?getName@ItemFrameDropItemPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -212096224
     * @vftbl  3
     * @symbol ?write@ItemFrameDropItemPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1293438880
     * @vftbl  6
     * @symbol ?_read@ItemFrameDropItemPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   42062192
     * @symbol ??0ItemFrameDropItemPacket@@QEAA@XZ
     */
    MCAPI ItemFrameDropItemPacket();

};