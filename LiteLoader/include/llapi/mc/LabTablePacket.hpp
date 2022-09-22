/**
 * @file  LabTablePacket.hpp
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
 * @brief MC class LabTablePacket.
 *
 */
class LabTablePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LABTABLEPACKET
public:
    class LabTablePacket& operator=(class LabTablePacket const &) = delete;
    LabTablePacket(class LabTablePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LabTablePacket();
    /**
     * @hash   1361718613
     * @vftbl  1
     * @symbol ?getId@LabTablePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -1774199806
     * @vftbl  2
     * @symbol ?getName@LabTablePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1346928539
     * @vftbl  3
     * @symbol ?write@LabTablePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1904716117
     * @vftbl  6
     * @symbol ?_read@LabTablePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1290216443
     * @symbol ??0LabTablePacket@@QEAA@XZ
     */
    MCAPI LabTablePacket();
    /**
     * @hash   -1464093100
     * @symbol ??0LabTablePacket@@QEAA@W4Type@0@AEBVBlockPos@@@Z
     */
    MCAPI LabTablePacket(enum LabTablePacket::Type, class BlockPos const &);
    /**
     * @hash   1656568931
     * @symbol ??0LabTablePacket@@QEAA@AEBVBlockPos@@W4LabTableReactionType@@@Z
     */
    MCAPI LabTablePacket(class BlockPos const &, enum LabTableReactionType);

};