/**
 * @file  AddPaintingPacket.hpp
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
 * @brief MC class AddPaintingPacket.
 *
 */
class AddPaintingPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDPAINTINGPACKET
public:
    class AddPaintingPacket& operator=(class AddPaintingPacket const &) = delete;
    AddPaintingPacket(class AddPaintingPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AddPaintingPacket();
    /**
     * @hash   -697274767
     * @vftbl  1
     * @symbol ?getId@AddPaintingPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   762005790
     * @vftbl  2
     * @symbol ?getName@AddPaintingPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1806086281
     * @vftbl  3
     * @symbol ?write@AddPaintingPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -413043831
     * @vftbl  6
     * @symbol ?_read@AddPaintingPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   763415385
     * @symbol ??0AddPaintingPacket@@QEAA@XZ
     */
    MCAPI AddPaintingPacket();
    /**
     * @hash   -2084533402
     * @symbol ??0AddPaintingPacket@@QEAA@AEBVPainting@@@Z
     */
    MCAPI AddPaintingPacket(class Painting const &);

};