/**
 * @file  ItemComponentPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
     * @hash   -769958240
     */
    virtual ~ItemComponentPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@ItemComponentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1426358044
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ItemComponentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1303951817
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@ItemComponentPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   414067886
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  4
     * @symbol ?readExtended@ItemComponentPacket@@UEAA?AUExtendedStreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   920033283
     */
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    /**
     * @vftbl  6
     * @symbol ?_read@ItemComponentPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   801559438
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ItemComponentPacket@@QEAA@XZ
     * @hash   1591807262
     */
    MCAPI ItemComponentPacket();

};