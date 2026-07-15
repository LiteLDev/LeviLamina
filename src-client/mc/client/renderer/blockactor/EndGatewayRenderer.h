#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
struct BlockActorRenderData;
// clang-format on

class EndGatewayRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short>               mWorldHeight;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>  mBeaconTexture;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mBeaconMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mBeaconTransparentMaterial;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&) /*override*/;

    virtual void
    renderAlpha(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
