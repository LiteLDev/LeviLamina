#pragma once

#include "../NetworkBlockPosition.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandBlockMode.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class CommandBlockUpdatePacket : public ::Packet {

public:
    NetworkBlockPosition mBlockPos;           // this+0x30
    CommandBlockMode     mMode;               // this+0x3C
    bool                 mRedstoneMode;       // this+0x3E
    bool                 mIsConditional;      // this+0x3F
    ActorRuntimeID       mEntityId;           // this+0x40
    std::string          mCommand;            // this+0x48
    std::string          mLastOutput;         // this+0x68
    std::string          mName;               // this+0x88
    int                  mTickDelay;          // this+0xA8
    bool                 mTrackOutput;        // this+0xAC
    bool                 mExecuteOnFirstTick; // this+0xAD
    bool                 mIsBlock;            // this+0xAE

    // prevent constructor by default
    CommandBlockUpdatePacket& operator=(CommandBlockUpdatePacket const&) = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@CommandBlockUpdatePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@CommandBlockUpdatePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@CommandBlockUpdatePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@CommandBlockUpdatePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDBLOCKUPDATEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CommandBlockUpdatePacket();
#endif
    /**
     * @symbol ??0CommandBlockUpdatePacket\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CommandBlockUpdatePacket(class CommandBlockUpdatePacket const&);
    /**
     * @symbol ??0CommandBlockUpdatePacket\@\@QEAA\@XZ
     */
    MCAPI CommandBlockUpdatePacket();
    // NOLINTEND
};
