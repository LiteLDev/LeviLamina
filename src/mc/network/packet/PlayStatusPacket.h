#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/PlayStatus.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class PlayStatusPacket : public ::Packet {

public:
    PlayStatus status;
    // prevent constructor by default
    PlayStatusPacket& operator=(PlayStatusPacket const&) = delete;
    PlayStatusPacket(PlayStatusPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@PlayStatusPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@PlayStatusPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@PlayStatusPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@PlayStatusPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYSTATUSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlayStatusPacket();
#endif
    /**
     * @symbol ??0PlayStatusPacket\@\@QEAA\@W4PlayStatus\@\@\@Z
     */
    MCAPI PlayStatusPacket(enum class PlayStatus);
    /**
     * @symbol ??0PlayStatusPacket\@\@QEAA\@XZ
     */
    MCAPI PlayStatusPacket();
    // NOLINTEND
};
