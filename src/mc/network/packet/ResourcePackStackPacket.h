#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"
#include "mc/util/BaseGameVersion.h"
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
