#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
class Tessellator;
struct IntRectangle;
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
namespace mce { class TexturePtr; }
namespace mce { struct ClientTexture; }
namespace mce { struct ServerTexture; }
// clang-format on

class ScreenRenderer {
public:
    // ScreenRenderer inner types declare
    // clang-format off
    struct QuadBuffer;
    // clang-format on

    // ScreenRenderer inner types define
    enum class ScreenMaterial : int {};

    struct QuadBuffer {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void blit(
        ::ScreenContext&          screenContext,
        ::mce::TexturePtr const&  tex,
        ::IntRectangle const&     rect,
        ::mce::MaterialPtr const* optionalMat
    );

    MCNAPI void blit(
        ::ScreenContext& screenContext,
        ::std::variant<::std::monostate, ::mce::TexturePtr, ::mce::ClientTexture, ::mce::ServerTexture> const& texture,
        ::IntRectangle const&                                                                                  rect,
        ::mce::MaterialPtr const* optionalMat
    );

    MCNAPI void blit(
        ::ScreenContext& screenContext,
        ::std::variant<::std::monostate, ::mce::TexturePtr, ::mce::ClientTexture, ::mce::ServerTexture> const& texture,
        int                                                                                                    x,
        int                                                                                                    y,
        int                                                                                                    sx,
        int                                                                                                    sy,
        int                                                                                                    w,
        int                                                                                                    h,
        int                                                                                                    sw,
        int                                                                                                    sh,
        ::mce::MaterialPtr const* optionalMat,
        float                     us,
        float                     vs
    );

    MCNAPI void blit(
        ::ScreenContext&          screenContext,
        ::mce::TexturePtr const&  texture,
        int                       x,
        int                       y,
        int                       sx,
        int                       sy,
        int                       w,
        int                       h,
        int                       sw,
        int                       sh,
        ::mce::MaterialPtr const* optionalMat,
        float                     us,
        float                     vs
    );

    MCNAPI void blitQuadBuffer(
        ::ScreenRenderer::QuadBuffer const& quadBuffer,
        float                               quadW,
        float                               quadH,
        ::ScreenContext&                    screenContext,
        ::mce::TexturePtr const&            texture,
        ::mce::MaterialPtr const*           optionalMat
    );

    MCNAPI void
    drawRect(::ScreenContext& screenContext, int x0, int y0, int x1, int y1, ::mce::Color const& color, int thickness);

    MCNAPI void
    fill(::ScreenContext& screenContext, float x0, float y0, float x1, float y1, ::mce::Color const& color) const;

    MCNAPI void fillGradient(
        ::ScreenContext&    screenContext,
        float               x0,
        float               y0,
        float               x1,
        float               y1,
        ::mce::Color const& color1,
        ::mce::Color const& color2
    );

    MCNAPI void fillHorizontalGradient(
        ::ScreenContext&    screenContext,
        float               x0,
        float               y0,
        float               x1,
        float               y1,
        ::mce::Color const& color1,
        ::mce::Color const& color2
    );

    MCNAPI void fillStencil(::ScreenContext& screenContext, float x0, float y0, float x1, float y1) const;

    MCNAPI bool tessellateQuadBuffer(
        ::ScreenRenderer::QuadBuffer const& quadBuffer,
        float                               quadW,
        float                               quadH,
        ::Tessellator&                      tessellator,
        ::mce::TexturePtr const&            texture
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void loadMaterials();

    MCNAPI static ::ScreenRenderer& singleton();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::mce::MaterialPtr[]> mScreenMaterials();

    MCNAPI static ::std::unique_ptr<::ScreenRenderer>& singletonPtr();
    // NOLINTEND
};
