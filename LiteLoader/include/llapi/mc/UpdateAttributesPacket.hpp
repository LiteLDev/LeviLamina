/**
 * @file  MC/UpdateAttributesPacket.hpp
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
 * @brief MC class UpdateAttributesPacket.
 *
 */
class UpdateAttributesPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEATTRIBUTESPACKET
public:
    class UpdateAttributesPacket& operator=(class UpdateAttributesPacket const &) = delete;
    UpdateAttributesPacket(class UpdateAttributesPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~UpdateAttributesPacket();
    /**
     * @hash   510101894
     * @vftbl  1
     * @symbol ?getId@UpdateAttributesPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   1230886963
     * @vftbl  2
     * @symbol ?getName@UpdateAttributesPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1897496268
     * @vftbl  3
     * @symbol ?write@UpdateAttributesPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1345280468
     * @vftbl  6
     * @symbol ?_read@UpdateAttributesPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1777626524
     * @symbol ??0UpdateAttributesPacket@@QEAA@XZ
     */
    MCAPI UpdateAttributesPacket();
    /**
     * @hash   -2015496926
     * @symbol ??0UpdateAttributesPacket@@QEAA@AEBVActor@@AEBV?$vector@VAttributeInstanceHandle@@V?$allocator@VAttributeInstanceHandle@@@std@@@std@@@Z
     */
    MCAPI UpdateAttributesPacket(class Actor const &, std::vector<class AttributeInstanceHandle> const &);

};