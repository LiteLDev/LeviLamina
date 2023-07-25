#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class SetActorDataPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETACTORDATAPACKET
public:
    SetActorDataPacket& operator=(SetActorDataPacket const&) = delete;
    SetActorDataPacket(SetActorDataPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@SetActorDataPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SetActorDataPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SetActorDataPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SetActorDataPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETACTORDATAPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SetActorDataPacket();
#endif
    /**
     * @symbol ??0SetActorDataPacket\@\@QEAA\@XZ
     */
    MCAPI SetActorDataPacket();
    /**
     * @symbol
     * ??0SetActorDataPacket\@\@QEAA\@VActorRuntimeID\@\@AEAVSynchedActorDataEntityWrapper\@\@PEAVPropertyComponent\@\@_K_N\@Z
     */
    MCAPI SetActorDataPacket(
        class ActorRuntimeID,
        class SynchedActorDataEntityWrapper&,
        class PropertyComponent*,
        unsigned __int64,
        bool
    );
};
