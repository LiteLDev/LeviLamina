#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/network/packet/Packet.h"

class UpdateBlockPacket : public ::Packet {

public:
    enum class Layer : unsigned int {
        Standard = 0,
        Extra    = 1,
        Count    = 2,
    };
    enum class Flags : unsigned char {
        None        = 0,
        Neighbors   = 1 << 0,
        Network     = 1 << 1,
        NoGraphic   = 1 << 2,
        Priority    = 1 << 3,
        All         = Neighbors | Network, // default value in BDS
        AllPriority = All | Priority,
    };

    static const bool          SHARE_WITH_HANDLER = true; // constant
    class NetworkBlockPosition mPos;                      // this+0x30
    enum class Layer           mLayer;                    // this+0x3C
    enum class Flags           mUpdateFlags;              // this+0x40
    unsigned int               mRuntimeId;                // this+0x44

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@UpdateBlockPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@UpdateBlockPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@UpdateBlockPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@UpdateBlockPacket\@\@MEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATEBLOCKPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UpdateBlockPacket();
#endif
    /**
     * @symbol ??0UpdateBlockPacket\@\@QEAA\@AEBVBlockPos\@\@IIE\@Z
     */
    MCAPI UpdateBlockPacket(class BlockPos const&, unsigned int, unsigned int, unsigned char);
    /**
     * @symbol ??0UpdateBlockPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateBlockPacket();
    // NOLINTEND
};
