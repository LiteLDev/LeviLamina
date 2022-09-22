/**
 * @file  ShowStoreOfferPacket.hpp
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
 * @brief MC class ShowStoreOfferPacket.
 *
 */
class ShowStoreOfferPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOWSTOREOFFERPACKET
public:
    class ShowStoreOfferPacket& operator=(class ShowStoreOfferPacket const &) = delete;
    ShowStoreOfferPacket(class ShowStoreOfferPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ShowStoreOfferPacket();
    /**
     * @hash   1247210846
     * @vftbl  1
     * @symbol ?getId@ShowStoreOfferPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   661699595
     * @vftbl  2
     * @symbol ?getName@ShowStoreOfferPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   267517372
     * @vftbl  3
     * @symbol ?write@ShowStoreOfferPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1054064716
     * @vftbl  6
     * @symbol ?_read@ShowStoreOfferPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1216133980
     * @symbol ??0ShowStoreOfferPacket@@QEAA@XZ
     */
    MCAPI ShowStoreOfferPacket();

};