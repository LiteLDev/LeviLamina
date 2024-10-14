#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorUniqueID.h"
#include "mc/world/level/storage/PhotoType.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

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
    PhotoTransferPacket& operator=(PhotoTransferPacket const&);
    PhotoTransferPacket(PhotoTransferPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PhotoTransferPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI PhotoTransferPacket();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
