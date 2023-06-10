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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@PositionTrackingDBServerBroadcastPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@PositionTrackingDBServerBroadcastPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@PositionTrackingDBServerBroadcastPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@PositionTrackingDBServerBroadcastPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POSITIONTRACKINGDBSERVERBROADCASTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PositionTrackingDBServerBroadcastPacket();
#endif
    /**
     * @symbol ??0PositionTrackingDBServerBroadcastPacket\@\@QEAA\@XZ
     */
    MCAPI PositionTrackingDBServerBroadcastPacket();

};
