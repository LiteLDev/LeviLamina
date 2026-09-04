#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BaseGameVersion.h"
#include "mc/world/level/PackInstanceId.h"
#include "mc/world/level/storage/Experiments.h"

struct ResourcePackStackPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PackInstanceId>> mTexturePackIdsAndVersions;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>               mBaseGameVersion;
    ::ll::TypedStorage<1, 1, bool>                             mTexturePackRequired;
    ::ll::TypedStorage<8, 72, ::Experiments>                   mExperiments;
    ::ll::TypedStorage<1, 1, bool>                             mIncludeEditorPacks;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackStackPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourcePackStackPacketPayload(
        ::std::vector<::PackInstanceId> texturePackIdsAndVersions,
        ::BaseGameVersion const&        baseGameVersion,
        bool                            texturePackRequired,
        ::Experiments const&            experiments,
        bool                            includeEditorPacks
    );

    MCAPI ~ResourcePackStackPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
};
