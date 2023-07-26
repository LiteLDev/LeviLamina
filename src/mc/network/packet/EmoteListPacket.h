#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class EmoteListPacket : public ::Packet {

public:
    // prevent constructor by default
    EmoteListPacket& operator=(EmoteListPacket const&) = delete;
    EmoteListPacket(EmoteListPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@EmoteListPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@EmoteListPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@EmoteListPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@EmoteListPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EMOTELISTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EmoteListPacket(); // NOLINT
#endif
    /**
     * @symbol ??0EmoteListPacket\@\@QEAA\@VActorRuntimeID\@\@\@Z
     */
    MCAPI EmoteListPacket(class ActorRuntimeID); // NOLINT
    /**
     * @symbol ??0EmoteListPacket\@\@QEAA\@XZ
     */
    MCAPI EmoteListPacket(); // NOLINT
    /**
     * @symbol ?MAX_EMOTE_PIECE_IDS\@EmoteListPacket\@\@2HB
     */
    MCAPI static int const MAX_EMOTE_PIECE_IDS; // NOLINT
};
