#pragma once

#include "../NetworkBlockPosition.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"

class ContainerOpenPacket : public ::Packet {

public:
    ContainerID          mContainerId;    // this+0x30
    ContainerType        mType;           // this+0x31
    NetworkBlockPosition mPos;            // this+0x34
    ActorUniqueID        mEntityUniqueID; // this+0x40

    // prevent constructor by default
    ContainerOpenPacket& operator=(ContainerOpenPacket const&) = delete;
    ContainerOpenPacket(ContainerOpenPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ContainerOpenPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ContainerOpenPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ContainerOpenPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ContainerOpenPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINEROPENPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContainerOpenPacket();
#endif
    /**
     * @symbol ??0ContainerOpenPacket\@\@QEAA\@XZ
     */
    MCAPI ContainerOpenPacket();
    /**
     * @symbol
     * ??0ContainerOpenPacket\@\@QEAA\@W4ContainerID\@\@W4ContainerType\@\@AEBVBlockPos\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI
    ContainerOpenPacket(enum class ContainerID, enum class ContainerType, class BlockPos const&, struct ActorUniqueID const&);
    // NOLINTEND
};
