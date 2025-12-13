#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
struct PackIdVersion;
struct PackInfoData;
// clang-format on

class ResourcePacksInfoPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk117fec;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePacksInfoPacket& operator=(ResourcePacksInfoPacket const&);
    ResourcePacksInfoPacket(ResourcePacksInfoPacket const&);
    ResourcePacksInfoPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~ResourcePacksInfoPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_S ResourcePacksInfoPacket(
        bool                           resourcePackRequired,
        ::std::vector<::PackInfoData>& resourcePacks,
        bool                           hasAddonPacks,
        ::PackIdVersion const&         worldTemplateIdVersion,
        bool                           forceDisableVibrantVisuals
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_S void* $ctor(
        bool                           resourcePackRequired,
        ::std::vector<::PackInfoData>& resourcePacks,
        bool                           hasAddonPacks,
        ::PackIdVersion const&         worldTemplateIdVersion,
        bool                           forceDisableVibrantVisuals
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
