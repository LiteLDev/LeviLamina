#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/FontHandle.h"
#include "mc/client/gui/ScreenRenderer.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/input/InputRenderContext.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class RectangleArea;
class ScreenContext;
class Tessellator;
namespace mce { class TextureGroup; }
// clang-format on

class MinecraftInputRenderContext : public ::InputRenderContext, public ::ScreenRenderer {
public:
    // MinecraftInputRenderContext inner types declare
    // clang-format off
    struct TextItem;
    // clang-format on

    // MinecraftInputRenderContext inner types define
    struct TextItem {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color>                                           mCurrentColor;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                           mFontHandle;
    ::ll::TypedStorage<8, 24, ::std::vector<::MinecraftInputRenderContext::TextItem>> mTextToDraw;
    ::ll::TypedStorage<8, 8, ::ScreenContext&>                                        mScreenContext;
    ::ll::TypedStorage<8, 8, ::Tessellator&>                                          mTessellator;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                      mTexture;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::TextureGroup>>                 mTextureGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftInputRenderContext& operator=(MinecraftInputRenderContext const&);
    MinecraftInputRenderContext(MinecraftInputRenderContext const&);
    MinecraftInputRenderContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftInputRenderContext() /*override*/;

    virtual void setColor(::mce::Color const& color) /*override*/;

    virtual void drawRect(
        ::RectangleArea const& rect,
        int                    u,
        int                    v,
        int                    uvWidth,
        int                    uvHeight,
        float                  uScale,
        float                  vScale,
        float                  px,
        float                  py
    ) const /*override*/;

    virtual ::RectangleArea measureText(::glm::vec2 const& center, ::std::string const& text) const /*override*/;

    virtual void drawText(::RectangleArea const& area, ::std::string const& text) /*override*/;

    virtual void forceRender(::std::string const& texturePath) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MinecraftInputRenderContext(
        ::ScreenContext&                       screenContext,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::FontHandle                           fontHandle
    );

    MCAPI void render(::mce::TexturePtr overrideTexture);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::ScreenContext& screenContext, ::std::shared_ptr<::mce::TextureGroup> textureGroup, ::FontHandle fontHandle);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setColor(::mce::Color const& color);

    MCAPI void $drawRect(
        ::RectangleArea const& rect,
        int                    u,
        int                    v,
        int                    uvWidth,
        int                    uvHeight,
        float                  uScale,
        float                  vScale,
        float                  px,
        float                  py
    ) const;

    MCAPI ::RectangleArea $measureText(::glm::vec2 const& center, ::std::string const& text) const;

    MCAPI void $drawText(::RectangleArea const& area, ::std::string const& text);

    MCAPI void $forceRender(::std::string const& texturePath);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
