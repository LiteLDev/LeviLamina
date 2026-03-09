#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/BaseActorRenderer.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class BlockActor;
class ClientPBRTextureData;
class Model;
class ScreenContext;
class Tessellator;
class Vec3;
struct ActorTextureInfo;
struct BlockActorRenderData;
struct NameTagRenderObject;
struct PBRTexturePtrs;
namespace dragon { struct RenderMetadata; }
namespace mce { class MaterialPtr; }
namespace mce { struct ClientTexture; }
// clang-format on

class BlockActorRenderer : public ::BaseActorRenderer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockActorRenderer() /*override*/;

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&) = 0;

    virtual void renderAlpha(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData);

    virtual ::std::vector<::NameTagRenderObject> extractText(
        ::Tessellator&            tessellator,
        ::BlockActor&             entity,
        ::std::string const&      str,
        ::std::vector<int> const& widths,
        ::Vec3                    camTargetPos
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _renderModel(
        ::ScreenContext&                screenContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::Model&                        model,
        ::ClientPBRTextureData const&   actorTextureData
    ) const;

    MCAPI void _renderModel(
        ::ScreenContext&                screenContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::Model&                        model,
        ::ActorTextureInfo const&       actorTextureInfo
    ) const;

    MCAPI void _renderModel(
        ::ScreenContext&                screenContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::Model&                        model,
        ::mce::ClientTexture const&     texture
    ) const;

    MCAPI void _renderModel(
        ::ScreenContext&                screenContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::Model&                        model,
        ::ClientPBRTextureData const&   actorTextureData,
        ::mce::MaterialPtr const&       forcedMaterial
    ) const;

    MCAPI void _renderModel(
        ::ScreenContext&                screenContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::Model&                        model,
        ::ActorTextureInfo const&       actorTextureInfo,
        ::mce::MaterialPtr const&       forcedMaterial,
        ::mce::ClientTexture const&     forcedTexture
    ) const;

    MCAPI void _renderModel(
        ::ScreenContext&                screenContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::Model&                        model,
        ::PBRTexturePtrs const&         actorTexturePtrs,
        ::mce::MaterialPtr const&       forcedMaterial,
        ::mce::ClientTexture const&     forcedTexture
    ) const;

    MCAPI void _renderModel(
        ::ScreenContext&                screenContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::Model&                        model,
        ::mce::ClientTexture const&     texture,
        ::mce::MaterialPtr const&       forcedMaterial,
        ::mce::ClientTexture const&     forcedTexture
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $renderAlpha(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData);

    MCAPI ::std::vector<::NameTagRenderObject> $extractText(
        ::Tessellator&            tessellator,
        ::BlockActor&             entity,
        ::std::string const&      str,
        ::std::vector<int> const& widths,
        ::Vec3                    camTargetPos
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
