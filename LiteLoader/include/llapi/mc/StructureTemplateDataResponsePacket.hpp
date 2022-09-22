/**
 * @file  StructureTemplateDataResponsePacket.hpp
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
 * @brief MC class StructureTemplateDataResponsePacket.
 *
 */
class StructureTemplateDataResponsePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATEDATARESPONSEPACKET
public:
    class StructureTemplateDataResponsePacket& operator=(class StructureTemplateDataResponsePacket const &) = delete;
    StructureTemplateDataResponsePacket(class StructureTemplateDataResponsePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~StructureTemplateDataResponsePacket();
    /**
     * @hash   -1125787874
     * @vftbl  1
     * @symbol ?getId@StructureTemplateDataResponsePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   1186550219
     * @vftbl  2
     * @symbol ?getName@StructureTemplateDataResponsePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   650031164
     * @vftbl  3
     * @symbol ?write@StructureTemplateDataResponsePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1518145876
     * @vftbl  6
     * @symbol ?_read@StructureTemplateDataResponsePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -412187380
     * @symbol ??0StructureTemplateDataResponsePacket@@QEAA@XZ
     */
    MCAPI StructureTemplateDataResponsePacket();
    /**
     * @hash   -3717586
     * @symbol ??0StructureTemplateDataResponsePacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@2@W4StructureTemplateResponseType@@@Z
     */
    MCAPI StructureTemplateDataResponsePacket(std::string const &, std::unique_ptr<class CompoundTag>, enum StructureTemplateResponseType);
    /**
     * @hash   1900319364
     * @symbol ??4StructureTemplateDataResponsePacket@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class StructureTemplateDataResponsePacket & operator=(class StructureTemplateDataResponsePacket &&);

};