#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/resources/BaseGameVersion.h"
#include "mc/world/level/PackInstanceId.h"
#include "mc/world/level/storage/ExperimentStorage.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ResourcePackStackPacket : public ::Packet {

public:
    std::vector<PackInstanceId> mAddOnIdsAndVersions;       // this+0x30
    std::vector<PackInstanceId> mTexturePackIdsAndVersions; // this+0x48
    BaseGameVersion             mBaseGameVersion;           // this+0x60
    bool                        mTexturePackRequired;       // this+0xD8
    ExperimentStorage           mExperiments;               // this+0xE0

    // prevent constructor by default
    ResourcePackStackPacket& operator=(ResourcePackStackPacket const&) = delete;
    ResourcePackStackPacket(ResourcePackStackPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ResourcePackStackPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ResourcePackStackPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ResourcePackStackPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ResourcePackStackPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKSTACKPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ResourcePackStackPacket();
#endif
    /**
     * @symbol ??0ResourcePackStackPacket\@\@QEAA\@XZ
     */
    MCAPI ResourcePackStackPacket();
    /**
     * @symbol
     * ??0ResourcePackStackPacket\@\@QEAA\@V?$vector\@UPackInstanceId\@\@V?$allocator\@UPackInstanceId\@\@\@std\@\@\@std\@\@0AEBVBaseGameVersion\@\@_NAEBVExperiments\@\@\@Z
     */
    MCAPI
    ResourcePackStackPacket(std::vector<struct PackInstanceId>, std::vector<struct PackInstanceId>, class BaseGameVersion const&, bool, class Experiments const&);
    // NOLINTEND
};
