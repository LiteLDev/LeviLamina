/**
 * @file  LabTablePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Packet.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~LabTablePacket();
    /**
     * @hash   432792949
     * @vftbl  1
     * @symbol  ?getId\@LabTablePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1591841826
     * @vftbl  2
     * @symbol  ?getName\@LabTablePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   2019113093
     * @vftbl  3
     * @symbol  ?write\@LabTablePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   975790453
     * @vftbl  6
     * @symbol  ?_read\@LabTablePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   2075825189
     * @symbol  ??0LabTablePacket\@\@QEAA\@XZ
     */
    MCAPI LabTablePacket();
    /**
     * @hash   1901948532
     * @symbol  ??0LabTablePacket\@\@QEAA\@W4Type\@0\@AEBVBlockPos\@\@\@Z
     */
    MCAPI LabTablePacket(enum class LabTablePacket::Type, class BlockPos const &);
    /**
     * @hash   727643267
     * @symbol  ??0LabTablePacket\@\@QEAA\@AEBVBlockPos\@\@W4LabTableReactionType\@\@\@Z
     */
    MCAPI LabTablePacket(class BlockPos const &, enum class LabTableReactionType);

};