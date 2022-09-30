/**
 * @file  ItemStackResponsePacket.hpp
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
 * @brief MC class ItemStackResponsePacket.
 *
 */
class ItemStackResponsePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKRESPONSEPACKET
public:
    class ItemStackResponsePacket& operator=(class ItemStackResponsePacket const &) = delete;
    ItemStackResponsePacket(class ItemStackResponsePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ItemStackResponsePacket();
    /**
     * @hash   -2141454800
     * @vftbl  1
     * @symbol ?getId@ItemStackResponsePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1854519517
     * @vftbl  2
     * @symbol ?getName@ItemStackResponsePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1420385098
     * @vftbl  3
     * @symbol ?write@ItemStackResponsePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1617508106
     * @vftbl  6
     * @symbol ?_read@ItemStackResponsePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   361538682
     * @symbol ??0ItemStackResponsePacket@@QEAA@XZ
     */
    MCAPI ItemStackResponsePacket();
    /**
     * @hash   -2116693173
     * @symbol ??0ItemStackResponsePacket@@QEAA@$$QEAV?$vector@UItemStackResponseInfo@@V?$allocator@UItemStackResponseInfo@@@std@@@std@@@Z
     */
    MCAPI ItemStackResponsePacket(std::vector<struct ItemStackResponseInfo> &&);
    /**
     * @hash   -1923544336
     * @symbol ?getResponses@ItemStackResponsePacket@@QEBAAEBV?$vector@UItemStackResponseInfo@@V?$allocator@UItemStackResponseInfo@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct ItemStackResponseInfo> const & getResponses() const;

};