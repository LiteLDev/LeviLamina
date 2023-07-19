/**
 * @file  InventoryContentPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@InventoryContentPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@InventoryContentPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@InventoryContentPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@InventoryContentPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INVENTORYCONTENTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~InventoryContentPacket();
#endif
    /**
     * @symbol ??0InventoryContentPacket\@\@QEAA\@XZ
     */
    MCAPI InventoryContentPacket();
    /**
     * @symbol ??0InventoryContentPacket\@\@QEAA\@W4ContainerID\@\@AEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI InventoryContentPacket(enum class ContainerID, std::vector<class ItemStack> const &);
    /**
     * @symbol ?fromPlayerInventoryId\@InventoryContentPacket\@\@SA?AV1\@W4ContainerID\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI static class InventoryContentPacket fromPlayerInventoryId(enum class ContainerID, class Player &);

};
