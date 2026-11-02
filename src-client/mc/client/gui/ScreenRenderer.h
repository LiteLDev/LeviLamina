#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
class Tessellator;
class Vec2;
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
    class QuadBuffer;
    // clang-format on

    // ScreenRenderer inner types define
    enum class ScreenMaterial : int {
        Blit                   = 0,
        Fill                   = 1,
        FillGradient           = 2,
        ColorBlit              = 3,
        ColorBlitBlur          = 4,
        BlitCurrentShaderColor = 5,
        StencilFill            = 6,
        ScreenMatCount         = 7,
    };

    class QuadBuffer : public ::std::vector<::Vec2> {
    public:
        // prevent constructor by default
        QuadBuffer();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit QuadBuffer(uint64 estimatedQuadCount);

        MCNAPI ~QuadBuffer();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(uint64 estimatedQuadCount);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

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

    MCAPI void
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

    MCAPI static ::ScreenRenderer& singleton();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::mce::MaterialPtr[]> mScreenMaterials();

    MCNAPI static ::std::unique_ptr<::ScreenRenderer>& singletonPtr();
    // NOLINTEND
};
