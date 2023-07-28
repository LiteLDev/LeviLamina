#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/events/ActorEvent.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/ActorRuntimeID.h"

class ActorEventPacket : public ::Packet {

public:
    class ActorRuntimeID  mRuntimeId;
    enum class ActorEvent mEventId;
    int                   mData;

    // prevent constructor by default
    ActorEventPacket& operator=(ActorEventPacket const&) = delete;
    ActorEventPacket(ActorEventPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@ActorEventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ActorEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@ActorEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ActorEventPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTOREVENTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorEventPacket(); // NOLINT
#endif
    /**
     * @symbol ??0ActorEventPacket\@\@QEAA\@VActorRuntimeID\@\@W4ActorEvent\@\@H\@Z
     */
    MCAPI ActorEventPacket(class ActorRuntimeID, enum class ActorEvent, int); // NOLINT
    /**
     * @symbol ??0ActorEventPacket\@\@QEAA\@XZ
     */
    MCAPI ActorEventPacket(); // NOLINT
};
