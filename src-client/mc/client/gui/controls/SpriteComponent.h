#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ClipDirection.h"
#include "mc/client/gui/SliceSize.h"
#include "mc/client/gui/TileDirection.h"
#include "mc/client/gui/UITextureInfoPtr.h"
#include "mc/client/gui/controls/RenderableComponent.h"
#include "mc/client/gui/controls/UIMaterialType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core_graphics/ImageDescription.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class UIComponent;
class UIControl;
class UIRenderContext;
namespace Core { class PathView; }
// clang-format on

class SpriteComponent : public ::RenderableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                mResourceLocation;
    ::ll::TypedStorage<8, 96, ::UITextureInfoPtr>                mUITextureInfo;
    ::ll::TypedStorage<8, 96, ::UITextureInfoPtr>                mBackCompatUITexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                 mTexture;
    ::ll::TypedStorage<4, 20, ::cg::ImageDescription>            mCachedImageDescription;
    ::ll::TypedStorage<4, 4, ::UIMaterialType>                   mUIMaterialType;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                        mUV;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                        mUVSize;
    ::ll::TypedStorage<4, 16, ::mce::Color>                      mColor;
    ::ll::TypedStorage<4, 16, ::ui::SliceSize>                   mNineSliceSize;
    ::ll::TypedStorage<1, 1, ::ui::ClipDirection>                mClipDirection;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                        mTiledScale;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                        mInvTextureSize;
    ::ll::TypedStorage<4, 4, ::ui::TileDirection>                mTiled;
    ::ll::TypedStorage<4, 4, float>                              mClipRatio;
    bool                                                         mClipPixelPerfect             : 1;
    bool                                                         mHasNineSlice                 : 1;
    bool                                                         mPixelPerfect                 : 1;
    bool                                                         mKeepRatio                    : 1;
    bool                                                         mFilled                       : 1;
    bool                                                         mEnableGrayscale              : 1;
    bool                                                         mEnableBilinear               : 1;
    bool                                                         mTriggerDebugLog              : 1;
    bool                                                         mForceReloadTexture           : 1;
    bool                                                         mTextureHasChanged            : 1;
    bool                                                         mAllowDebugTextureReplacement : 1;
    bool                                                         mColorCorrected               : 1;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mZipFolder;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SpriteComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl&) const /*override*/;

    virtual void reset() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void render(::UIRenderContext& context);

    MCAPI void setResourceLocation(::ResourceLocation const& resourceLocation);

    MCAPI void setZipFolder(::Core::PathView zipFolder);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
