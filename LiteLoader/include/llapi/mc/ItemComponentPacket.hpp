/**
 * @file  ItemComponentPacket.hpp
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
 * @brief MC class ItemComponentPacket.
 *
 */
class ItemComponentPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMCOMPONENTPACKET
public:
    class ItemComponentPacket& operator=(class ItemComponentPacket const &) = delete;
    ItemComponentPacket(class ItemComponentPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ItemComponentPacket();
    /**
     * @hash   -1957673508
     * @vftbl  1
     * @symbol ?getId@ItemComponentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -2080079735
     * @vftbl  2
     * @symbol ?getName@ItemComponentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1325095886
     * @vftbl  3
     * @symbol ?write@ItemComponentPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1830969027
     * @vftbl  4
     * @symbol ?readExtended@ItemComponentPacket@@UEAA?AUExtendedStreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    /**
     * @hash   1712495182
     * @vftbl  6
     * @symbol ?_read@ItemComponentPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1792501058
     * @symbol ??0ItemComponentPacket@@QEAA@XZ
     */
    MCAPI ItemComponentPacket();

};