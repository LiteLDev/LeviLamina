/**
 * @file  StructureBlockUpdatePacket.hpp
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
 * @brief MC class StructureBlockUpdatePacket.
 *
 */
class StructureBlockUpdatePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREBLOCKUPDATEPACKET
public:
    class StructureBlockUpdatePacket& operator=(class StructureBlockUpdatePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~StructureBlockUpdatePacket();
    /**
     * @hash   -1084976093
     * @vftbl  1
     * @symbol ?getId@StructureBlockUpdatePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -874118448
     * @vftbl  2
     * @symbol ?getName@StructureBlockUpdatePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   2072850311
     * @vftbl  3
     * @symbol ?write@StructureBlockUpdatePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1668586855
     * @vftbl  6
     * @symbol ?_read@StructureBlockUpdatePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   26671687
     * @symbol ??0StructureBlockUpdatePacket@@QEAA@XZ
     */
    MCAPI StructureBlockUpdatePacket();
    /**
     * @hash   -1172907663
     * @symbol ??0StructureBlockUpdatePacket@@QEAA@AEBV0@@Z
     */
    MCAPI StructureBlockUpdatePacket(class StructureBlockUpdatePacket const &);

};