/**
 * @file  InventorySlotPacket.hpp
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
 * @brief MC class InventorySlotPacket.
 *
 */
class InventorySlotPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYSLOTPACKET
public:
    class InventorySlotPacket& operator=(class InventorySlotPacket const &) = delete;
    InventorySlotPacket(class InventorySlotPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@InventorySlotPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@InventorySlotPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@InventorySlotPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@InventorySlotPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INVENTORYSLOTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~InventorySlotPacket();
#endif
    /**
     * @symbol ??0InventorySlotPacket\@\@QEAA\@W4ContainerID\@\@IAEBVItemStack\@\@\@Z
     */
    MCAPI InventorySlotPacket(enum class ContainerID, unsigned int, class ItemStack const &);
    /**
     * @symbol ??0InventorySlotPacket\@\@QEAA\@XZ
     */
    MCAPI InventorySlotPacket();

};
