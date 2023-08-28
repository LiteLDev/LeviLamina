#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/PhotoType.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class PhotoTransferPacket : public ::Packet {

public:
    std::string   mPhotoName;    // this+0x30
    std::string   mPhotoData;    // this+0x50
    std::string   mBookId;       // this+0x70
    PhotoType     mType;         // this+0x90
    PhotoType     mSourceType;   // this+0x91
    ActorUniqueID mOwnerId;      // this+0x98
    std::string   mNewPhotoName; // this+0xA0


    // prevent constructor by default
    PhotoTransferPacket& operator=(PhotoTransferPacket const&) = delete;
    PhotoTransferPacket(PhotoTransferPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@PhotoTransferPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@PhotoTransferPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@PhotoTransferPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@PhotoTransferPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PHOTOTRANSFERPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PhotoTransferPacket();
#endif
    /**
     * @symbol ??0PhotoTransferPacket\@\@QEAA\@XZ
     */
    MCAPI PhotoTransferPacket();
    // NOLINTEND
};
