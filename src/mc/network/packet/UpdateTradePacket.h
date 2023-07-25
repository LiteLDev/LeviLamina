#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class UpdateTradePacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATETRADEPACKET
public:
    UpdateTradePacket& operator=(UpdateTradePacket const&) = delete;
    UpdateTradePacket(UpdateTradePacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@UpdateTradePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@UpdateTradePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@UpdateTradePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@UpdateTradePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATETRADEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UpdateTradePacket();
#endif
    /**
     * @symbol ??0UpdateTradePacket\@\@QEAA\@XZ
     */
    MCAPI UpdateTradePacket();
    /**
     * @symbol
     * ??0UpdateTradePacket\@\@QEAA\@W4ContainerID\@\@W4ContainerType\@\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAVCompoundTag\@\@AEBUActorUniqueID\@\@4H_N5\@Z
     */
    MCAPI UpdateTradePacket(
        enum class ContainerID,
        enum class ContainerType,
        int,
        std::string const&,
        class CompoundTag&&,
        struct ActorUniqueID const&,
        struct ActorUniqueID const&,
        int,
        bool,
        bool
    );
};
