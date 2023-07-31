#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class RemoveActorPacket : public ::Packet {

public:
    // prevent constructor by default
    RemoveActorPacket& operator=(RemoveActorPacket const&) = delete;
    RemoveActorPacket(RemoveActorPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@RemoveActorPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@RemoveActorPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@RemoveActorPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@RemoveActorPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REMOVEACTORPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RemoveActorPacket();
#endif
    /**
     * @symbol ??0RemoveActorPacket\@\@QEAA\@UActorUniqueID\@\@\@Z
     */
    MCAPI RemoveActorPacket(struct ActorUniqueID);
    /**
     * @symbol ??0RemoveActorPacket\@\@QEAA\@XZ
     */
    MCAPI RemoveActorPacket();
    // NOLINTEND
};
