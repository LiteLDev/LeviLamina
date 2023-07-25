#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class NpcDialoguePacket : public ::Packet {
public:
    // NpcDialoguePacket inner types declare
    // clang-format off

    // clang-format on

    // NpcDialoguePacket inner types define
    enum class NpcDialogueActionType {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCDIALOGUEPACKET
public:
    NpcDialoguePacket& operator=(NpcDialoguePacket const&) = delete;
    NpcDialoguePacket(NpcDialoguePacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@NpcDialoguePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@NpcDialoguePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@NpcDialoguePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@NpcDialoguePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCDIALOGUEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NpcDialoguePacket();
#endif
    /**
     * @symbol ??0NpcDialoguePacket\@\@QEAA\@UActorUniqueID\@\@\@Z
     */
    MCAPI NpcDialoguePacket(struct ActorUniqueID);
    /**
     * @symbol ??0NpcDialoguePacket\@\@QEAA\@XZ
     */
    MCAPI NpcDialoguePacket();
    /**
     * @symbol
     * ?initializePacket\@NpcDialoguePacket\@\@SA_NAEAV1\@PEBVNpcDialogueStorage\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool initializePacket(class NpcDialoguePacket&, class NpcDialogueStorage const*, std::string const&);

    // private:
    /**
     * @symbol
     * ?_verifyJson\@NpcDialoguePacket\@\@AEBA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, class std::error_code> _verifyJson(std::string const&) const;

private:
};
