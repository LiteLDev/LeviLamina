#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class SetActorLinkPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETACTORLINKPACKET
public:
    SetActorLinkPacket& operator=(SetActorLinkPacket const&) = delete;
    SetActorLinkPacket(SetActorLinkPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@SetActorLinkPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SetActorLinkPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SetActorLinkPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SetActorLinkPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETACTORLINKPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SetActorLinkPacket();
#endif
    /**
     * @symbol ??0SetActorLinkPacket\@\@QEAA\@XZ
     */
    MCAPI SetActorLinkPacket();
    /**
     * @symbol ??0SetActorLinkPacket\@\@QEAA\@AEBUActorLink\@\@\@Z
     */
    MCAPI SetActorLinkPacket(struct ActorLink const&);
};
