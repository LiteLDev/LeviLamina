#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class Tessellator;
class Vec3;
struct BlockActorRenderData;
namespace mce { class Color; }
namespace mce { class TextureGroup; }
// clang-format on

class BeaconRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>  mBeaconTexture;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mBeaconMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mBeaconTransparentMaterial;
    // NOLINTEND

public:
    // prevent constructor by default
    BeaconRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BeaconRenderer() /*override*/ = default;

    virtual void
    render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BeaconRenderer(::std::shared_ptr<::mce::TextureGroup> textureGroup);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    tessellateAlphaBeamSegment(::Tessellator& t, ::Vec3 const& pos, float height, ::mce::Color const& c, float time);

    MCAPI static void tessellateOpaqueBeamSegment(
        ::Tessellator&      t,
        ::Vec3 const&       pos,
        float               height,
        float               vTop,
        ::mce::Color const& c,
        float               time,
        float               scale
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::mce::TextureGroup> textureGroup);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
