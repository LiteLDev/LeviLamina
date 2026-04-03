#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/VisualTree.h"
#include "mc/client/gui/controls/renderers/StructureVolumeRenderer.h"
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"

// auto generated forward declare list
// clang-format off
class MinecraftUIRenderContext;
class ScreenContext;
class UIControl;
class UIScene;
namespace dragon { class ResolvedImageResource; }
// clang-format on

class RenderDragonOffscreenStructureVolumeRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 704, ::StructureVolumeRenderer>                                    mStructureVolumeRenderer;
    ::ll::TypedStorage<8, 240, ::VisualTree>                                                 mVisualTree;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::UIControl>>                                 mUIControl;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MinecraftUIRenderContext>>                  mRenderContext;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIScene>>                                  mUIScene;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScreenContext>>                             mScreenContext;
    ::ll::TypedStorage<8, 24, ::mce::ClientResourcePointer<::dragon::ResolvedImageResource>> mTargetImage;
    // NOLINTEND
};
