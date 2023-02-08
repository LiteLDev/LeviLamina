/**
 * @file  PositionTrackingDBServerBroadcastPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PositionTrackingDBServerBroadcastPacket.
 *
 */
class PositionTrackingDBServerBroadcastPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSITIONTRACKINGDBSERVERBROADCASTPACKET
public:
    class PositionTrackingDBServerBroadcastPacket& operator=(class PositionTrackingDBServerBroadcastPacket const &) = delete;
    PositionTrackingDBServerBroadcastPacket(class PositionTrackingDBServerBroadcastPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PositionTrackingDBServerBroadcastPacket();
    /**
     * @hash   -1313387322
     * @vftbl  1
     * @symbol  ?getId\@PositionTrackingDBServerBroadcastPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   2095499123
     * @vftbl  2
     * @symbol  ?getName\@PositionTrackingDBServerBroadcastPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -890740684
     * @vftbl  3
     * @symbol  ?write\@PositionTrackingDBServerBroadcastPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1595789804
     * @vftbl  6
     * @symbol  ?_read\@PositionTrackingDBServerBroadcastPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   666334340
     * @symbol  ??0PositionTrackingDBServerBroadcastPacket\@\@QEAA\@XZ
     */
    MCAPI PositionTrackingDBServerBroadcastPacket();

};