#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class UpdatePlayerGameTypePacket : public ::Packet {

public:
    // prevent constructor by default
    UpdatePlayerGameTypePacket& operator=(UpdatePlayerGameTypePacket const&) = delete;
    UpdatePlayerGameTypePacket(UpdatePlayerGameTypePacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@UpdatePlayerGameTypePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@UpdatePlayerGameTypePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@UpdatePlayerGameTypePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@UpdatePlayerGameTypePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATEPLAYERGAMETYPEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UpdatePlayerGameTypePacket(); // NOLINT
#endif
    /**
     * @symbol ??0UpdatePlayerGameTypePacket\@\@QEAA\@XZ
     */
    MCAPI UpdatePlayerGameTypePacket(); // NOLINT
    /**
     * @symbol ??0UpdatePlayerGameTypePacket\@\@QEAA\@W4GameType\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI UpdatePlayerGameTypePacket(enum class GameType, struct ActorUniqueID const&); // NOLINT
};
