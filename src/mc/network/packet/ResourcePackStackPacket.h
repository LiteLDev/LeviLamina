#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/resources/BaseGameVersion.h"
#include "mc/world/level/storage/ExperimentStorage.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Experiments;
class ReadOnlyBinaryStream;
struct PackInstanceId;
// clang-format on

class ResourcePackStackPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PackInstanceId>> mAddOnIdsAndVersions;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackInstanceId>> mTexturePackIdsAndVersions;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>               mBaseGameVersion;
    ::ll::TypedStorage<1, 1, bool>                             mTexturePackRequired;
    ::ll::TypedStorage<8, 72, ::ExperimentStorage>             mExperiments;
    ::ll::TypedStorage<1, 1, bool>                             mIncludeEditorPacks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~ResourcePackStackPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackStackPacket();

    MCNAPI ResourcePackStackPacket(
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
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::MinecraftPacketIds $getId() const;

    MCNAPI ::std::string $getName() const;

    MCNAPI void $write(::BinaryStream& stream) const;

    MCNAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
