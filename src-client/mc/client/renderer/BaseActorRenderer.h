#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/ActorShaderManager.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

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
    struct NameplateBackgroundInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>> mesh;
        ::ll::TypedStorage<4, 4, int>                             width;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~NameplateBackgroundInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mNameTagBackgroundMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mNameTagTextMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDepthTestedNameTagMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDepthTestedNameTextMat;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseActorRenderer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseActorRenderer();

    MCAPI ::std::vector<::NameTagRenderObject> extractRenderTextObjects(
        ::Tessellator&            tessellator,
        ::std::string const&      str,
        ::std::vector<int> const& widths,
        ::Vec3 const&             pos,
        ::mce::Color const&       color,
        float                     scale
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BaseActorRenderer::NameplateBackgroundInfo
    _makeTextBackground(::Tessellator& tessellator, ::std::string const& str, ::std::vector<int> const& widths);

    MCAPI static void renderText(
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
    MCAPI static ::mce::Color const& NAME_TAG_BACKGROUND_COLOR();

    MCAPI static ::mce::Color const& NAME_TAG_BACKGROUND_COLOR_EDU();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
