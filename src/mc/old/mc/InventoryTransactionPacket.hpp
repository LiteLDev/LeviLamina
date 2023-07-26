/**
 * @file  InventoryTransactionPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "ComplexInventoryTransaction.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class InventoryTransactionPacket.
 *
 */
class InventoryTransactionPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    TypedClientNetId<struct ItemStackRequestIdTag, int, 0> requestId;            //48
    std::vector<std::pair<ContainerEnumName, std::vector<unsigned char>>> slots; //64
    std::unique_ptr<ComplexInventoryTransaction> transaction;                    //88
    bool isClientSide;                                                           //96

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYTRANSACTIONPACKET
public:
    class InventoryTransactionPacket& operator=(class InventoryTransactionPacket const &) = delete;
    InventoryTransactionPacket(class InventoryTransactionPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~InventoryTransactionPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@InventoryTransactionPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@InventoryTransactionPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@InventoryTransactionPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@InventoryTransactionPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0InventoryTransactionPacket\@\@QEAA\@XZ
     */
    MCAPI InventoryTransactionPacket();
    /**
     * @symbol  ??0InventoryTransactionPacket\@\@QEAA\@V?$unique_ptr\@VComplexInventoryTransaction\@\@U?$default_delete\@VComplexInventoryTransaction\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI InventoryTransactionPacket(std::unique_ptr<class ComplexInventoryTransaction>, bool);
    /**
     * @symbol  ?postLoadItems\@InventoryTransactionPacket\@\@QEBAXAEAVBlockPalette\@\@_N\@Z
     */
    MCAPI void postLoadItems(class BlockPalette &, bool) const;

};