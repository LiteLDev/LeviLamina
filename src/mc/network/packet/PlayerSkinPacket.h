#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/UUID.h"
#include "mc/world/actor/player/SerializedSkin.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class PlayerSkinPacket : public ::Packet {

public:
    mce::UUID      mUUID;
    SerializedSkin mSkin;
    std::string    mLocalizedNewSkinName;
    std::string    mLocalizedOldSkinName;
    // prevent constructor by default
    PlayerSkinPacket& operator=(PlayerSkinPacket const&) = delete;
    PlayerSkinPacket(PlayerSkinPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@PlayerSkinPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@PlayerSkinPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@PlayerSkinPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 4
     * @symbol
     * ?read\@PlayerSkinPacket\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> read(class ReadOnlyBinaryStream&);
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@PlayerSkinPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERSKINPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlayerSkinPacket();
#endif
    /**
     * @symbol ??0PlayerSkinPacket\@\@QEAA\@XZ
     */
    MCAPI PlayerSkinPacket();
    // NOLINTEND
};
