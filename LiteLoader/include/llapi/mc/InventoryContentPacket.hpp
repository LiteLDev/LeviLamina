/**
 * @file  MC/InventoryContentPacket.hpp
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
 * @brief MC class InventoryContentPacket.
 *
 */
class InventoryContentPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYCONTENTPACKET
public:
    class InventoryContentPacket& operator=(class InventoryContentPacket const &) = delete;
    InventoryContentPacket(class InventoryContentPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~InventoryContentPacket();
    /**
     * @hash   -281605719
     * @vftbl  1
     * @symbol ?getId@InventoryContentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -798672810
     * @vftbl  2
     * @symbol ?getName@InventoryContentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1878301713
     * @vftbl  3
     * @symbol ?write@InventoryContentPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   848915025
     * @vftbl  6
     * @symbol ?_read@InventoryContentPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1695297137
     * @symbol ??0InventoryContentPacket@@QEAA@XZ
     */
    MCAPI InventoryContentPacket();
    /**
     * @hash   -475302927
     * @symbol ??0InventoryContentPacket@@QEAA@W4ContainerID@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
     */
    MCAPI InventoryContentPacket(enum ContainerID, std::vector<class ItemStack> const &);
    /**
     * @hash   124453984
     * @symbol ?fromPlayerInventoryId@InventoryContentPacket@@SA?AV1@W4ContainerID@@AEAVPlayer@@@Z
     */
    MCAPI static class InventoryContentPacket fromPlayerInventoryId(enum ContainerID, class Player &);

};