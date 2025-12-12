#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BinaryStream;
class Experiments;
class ReadOnlyBinaryStream;
struct PackInstanceId;
// clang-format on

class ResourcePackStackPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk54136c;
    ::ll::UntypedStorage<8, 24> mUnkca634f;
    ::ll::UntypedStorage<8, 32> mUnk9f713b;
    ::ll::UntypedStorage<1, 1>  mUnk7a05e9;
    ::ll::UntypedStorage<8, 72> mUnk74df93;
    ::ll::UntypedStorage<1, 1>  mUnkfdc3d0;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackStackPacket& operator=(ResourcePackStackPacket const&);
    ResourcePackStackPacket(ResourcePackStackPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~ResourcePackStackPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourcePackStackPacket();

    MCAPI ResourcePackStackPacket(
        ::std::vector<::PackInstanceId> addOnIdsAndVersions,
        ::std::vector<::PackInstanceId> texturePackIdsAndVersions,
        ::BaseGameVersion const&        baseGameVersion,
        bool                            texturePackRequired,
        ::Experiments const&            experiments,
        bool                            includeEditorPacks
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(
        ::std::vector<::PackInstanceId> addOnIdsAndVersions,
        ::std::vector<::PackInstanceId> texturePackIdsAndVersions,
        ::BaseGameVersion const&        baseGameVersion,
        bool                            texturePackRequired,
        ::Experiments const&            experiments,
        bool                            includeEditorPacks
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
