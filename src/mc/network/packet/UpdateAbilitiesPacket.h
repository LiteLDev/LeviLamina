#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/SerializedAbilitiesData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class UpdateAbilitiesPacket : public ::Packet {

public:
    SerializedAbilitiesData mData;
    // prevent constructor by default
    UpdateAbilitiesPacket& operator=(UpdateAbilitiesPacket const&) = delete;
    UpdateAbilitiesPacket(UpdateAbilitiesPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@UpdateAbilitiesPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@UpdateAbilitiesPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@UpdateAbilitiesPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@UpdateAbilitiesPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATEABILITIESPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UpdateAbilitiesPacket();
#endif
    /**
     * @symbol ??0UpdateAbilitiesPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateAbilitiesPacket();
    /**
     * @symbol ??0UpdateAbilitiesPacket\@\@QEAA\@UActorUniqueID\@\@AEBVLayeredAbilities\@\@\@Z
     */
    MCAPI UpdateAbilitiesPacket(struct ActorUniqueID, class LayeredAbilities const&);
    // NOLINTEND
};
