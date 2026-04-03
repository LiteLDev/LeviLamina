#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkSource;
class IClientInstance;
class LocalPlayer;
class ScreenContext;
class StructureSettings;
class StructureTemplate;
class StructureVolumeRenderer;
class UIScene;
class Vec2;
namespace cg { class ImageBuffer; }
namespace dragon { struct ResolvedImageResource; }
// clang-format on

class EditorThumbnailRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIScene>>                                  mUIScene;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StructureVolumeRenderer>>                  mStructureVolumeRenderer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScreenContext>>                             mScreenContext;
    ::ll::TypedStorage<8, 24, ::mce::ClientResourcePointer<::dragon::ResolvedImageResource>> mTargetImage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkSource>>                               mChunkSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockSource>>                               mBlockSource;
    ::ll::TypedStorage<8, 32, ::std::string>                                                 mLabel;
    ::ll::TypedStorage<8, 8, uint64>                                                         mRenderCounter;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorThumbnailRenderer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorThumbnailRenderer(::IClientInstance& clientInstance);

    MCAPI void _buildBlockAndChunkSources(
        ::LocalPlayer*             player,
        ::StructureTemplate const& structure,
        ::StructureSettings&       structureSettings
    );

    MCAPI void capture(
        uint                                       screenshotWidth,
        uint                                       screenshotHeight,
        ::IClientInstance&                         clientInstance,
        ::StructureTemplate const&                 structure,
        ::std::function<void(::cg::ImageBuffer&&)> callback,
        ::Vec2                                     rotation
    );

    MCAPI ~EditorThumbnailRenderer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IClientInstance& clientInstance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
