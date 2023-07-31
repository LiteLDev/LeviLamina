#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class SyncActorPropertyPacket : public ::Packet {

public:
    // prevent constructor by default
    SyncActorPropertyPacket& operator=(SyncActorPropertyPacket const&) = delete;
    SyncActorPropertyPacket(SyncActorPropertyPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@SyncActorPropertyPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SyncActorPropertyPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SyncActorPropertyPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SyncActorPropertyPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SYNCACTORPROPERTYPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SyncActorPropertyPacket();
#endif
    /**
     * @symbol ??0SyncActorPropertyPacket\@\@QEAA\@XZ
     */
    MCAPI SyncActorPropertyPacket();
    /**
     * @symbol ??0SyncActorPropertyPacket\@\@QEAA\@AEBVHashedString\@\@AEBVPropertyGroupManager\@\@\@Z
     */
    MCAPI SyncActorPropertyPacket(class HashedString const&, class PropertyGroupManager const&);
    // NOLINTEND
};
