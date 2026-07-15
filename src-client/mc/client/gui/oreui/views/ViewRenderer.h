#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ViewId.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"
#include "mc/deps/renderer/hal/TextureDescription.h"
#include "mc/deps/renderer/hal/interface/Texture.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class FramesToPaintQueue; }
namespace OreUI { class LayoutScheduler; }
namespace cohtml { class ViewRenderer; }
// clang-format on

namespace OreUI {

class ViewRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::FramesToPaintQueue&> mFramesToPaint;
    ::ll::TypedStorage<4, 4, ::OreUI::ViewId>              mViewId;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>          mBlitMaterial;
    ::ll::TypedStorage<1, 1, bool>                         mTextureIsCreated;
    ::ll::TypedStorage<8, 104, ::mce::Texture>             mTexture;
    ::ll::TypedStorage<8, 104, ::mce::Texture>             mDSTexture;
    ::ll::TypedStorage<8, 24, ::mce::ClientTexture>        mRenderDragonTexture;
    ::ll::TypedStorage<8, 24, ::mce::ClientTexture>        mRenderDragonDSTexture;
    ::ll::TypedStorage<4, 64, ::mce::TextureDescription>   mTextureDescription;
    ::ll::TypedStorage<8, 8, ::cohtml::ViewRenderer*>      mViewRenderer;
    ::ll::TypedStorage<8, 8, ::OreUI::LayoutScheduler&>    mLayoutScheduler;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewRenderer& operator=(ViewRenderer const&);
    ViewRenderer(ViewRenderer const&);
    ViewRenderer();
};

} // namespace OreUI
