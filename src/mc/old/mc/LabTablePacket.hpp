/**
 * @file  LabTablePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~LabTablePacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@LabTablePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@LabTablePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@LabTablePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@LabTablePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0LabTablePacket\@\@QEAA\@XZ
     */
    MCAPI LabTablePacket();
    /**
     * @symbol  ??0LabTablePacket\@\@QEAA\@W4Type\@0\@AEBVBlockPos\@\@\@Z
     */
    MCAPI LabTablePacket(enum class LabTablePacket::Type, class BlockPos const &);
    /**
     * @symbol  ??0LabTablePacket\@\@QEAA\@AEBVBlockPos\@\@W4LabTableReactionType\@\@\@Z
     */
    MCAPI LabTablePacket(class BlockPos const &, enum class LabTableReactionType);

};