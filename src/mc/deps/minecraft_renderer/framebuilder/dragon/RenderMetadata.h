#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/CustomSurfaceShaderMetadata.h"
#include "mc/deps/minecraft_renderer/resources/UIActorOffscreenCaptureDescription.h"
#include "mc/deps/minecraft_renderer/resources/UIMeshOffscreenCaptureDescription.h"
#include "mc/deps/minecraft_renderer/resources/UIStructureVolumeOffscreenCaptureDescription.h"
#include "mc/deps/minecraft_renderer/resources/UIThumbnailMeshOffscreenCaptureDescription.h"

namespace dragon {

struct RenderMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64 const>                                            mID;
    ::ll::TypedStorage<4, 8, ::mce::framebuilder::CustomSurfaceShaderMetadata const> mCSSMetadata;
    ::ll::TypedStorage<1, 1, bool const>                                             mIsItem;
    ::ll::TypedStorage<
        8,
        48,
        ::std::variant<
            ::std::monostate,
            ::UIActorOffscreenCaptureDescription,
            ::UIThumbnailMeshOffscreenCaptureDescription,
            ::UIMeshOffscreenCaptureDescription,
            ::UIStructureVolumeOffscreenCaptureDescription>>
        mOffscreenCaptureDescription;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::dragon::RenderMetadata const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI_C void $dtor();
    // NOLINTEND
};

} // namespace dragon
