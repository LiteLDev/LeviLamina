#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/ActorShaderManager.h"

// auto generated forward declare list
// clang-format off
class Font;
class ScreenContext;
class Tessellator;
class Vec3;
struct NameTagRenderObject;
struct ViewRenderData;
namespace mce { class Color; }
namespace mce { class Mesh; }
// clang-format on

class BaseActorRenderer : public ::ActorShaderManager {
public:
    // BaseActorRenderer inner types declare
    // clang-format off
    struct NameplateBackgroundInfo;
    // clang-format on

    // BaseActorRenderer inner types define
    struct NameplateBackgroundInfo {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkde0011;
    ::ll::UntypedStorage<8, 16> mUnkac78a8;
    ::ll::UntypedStorage<8, 16> mUnkd6b348;
    ::ll::UntypedStorage<8, 16> mUnk74ffb5;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseActorRenderer& operator=(BaseActorRenderer const&);
    BaseActorRenderer(BaseActorRenderer const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseActorRenderer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseActorRenderer();

    MCNAPI ::std::vector<::NameTagRenderObject> extractRenderTextObjects(
        ::Tessellator&            tessellator,
        ::std::string const&      str,
        ::std::vector<int> const& widths,
        ::Vec3 const&             pos,
        ::mce::Color const&       color
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BaseActorRenderer::NameplateBackgroundInfo
    _makeTextBackground(::Tessellator& tessellator, ::std::string const& str, ::std::vector<int> const& widths);

    MCNAPI static void renderText(
        ::ScreenContext&             screenContext,
        ::ViewRenderData const&      viewData,
        ::NameTagRenderObject const& tagData,
        ::Font&                      font,
        ::mce::Mesh const&           nameplateBackgroundMesh
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::Color const& NAME_TAG_BACKGROUND_COLOR();

    MCNAPI static ::mce::Color const& NAME_TAG_BACKGROUND_COLOR_EDU();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
