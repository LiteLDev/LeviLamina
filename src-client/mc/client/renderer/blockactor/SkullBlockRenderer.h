#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class ActorResourceDefinition;
class BaseActorRenderContext;
class BaseGameVersion;
class BlockActor;
class DragonHeadModel;
class Experiments;
class HashedString;
class PiglinHeadModel;
class SkeletonHeadModel;
class Vec3;
struct BlockActorRenderData;
namespace dragon { struct RenderMetadata; }
namespace mce { class TextureGroup; }
namespace mce { struct ClientTexture; }
// clang-format on

class SkullBlockRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                      mGuiMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                      mGuiGlintMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                      mDragonGuiMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                      mDragonGuiGlintMaterial;
    ::ll::TypedStorage<8, 2240, ::ActorTextureInfo[7]>                                 mSkullTextures;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                       mGlintTexture;
    ::ll::TypedStorage<8, 56, ::std::array<::std::unique_ptr<::SkeletonHeadModel>, 7>> mSkullGeometry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DragonHeadModel>>                     mDragonHeadModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PiglinHeadModel>>                     mPiglinHeadModel;
    // NOLINTEND

public:
    // prevent constructor by default
    SkullBlockRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SkullBlockRenderer(
        ::std::shared_ptr<::ActorResourceDefinition> definition,
        ::std::shared_ptr<::mce::TextureGroup>       textureGroup,
        ::BaseGameVersion const&                     baseGameVersion,
        ::Experiments const&
    );

    MCAPI void renderInGui(
        ::BaseActorRenderContext&       renderContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::BlockActor&,
        ::HashedString const& hashedString,
        float                 x,
        float                 y,
        float                 scale,
        float                 lightMultiplier,
        bool                  isGlint
    );

    MCAPI void renderSkull(
        ::BaseActorRenderContext&       entityRenderContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::Vec3 const&                   pos,
        int                             face,
        float                           rot,
        ::HashedString const&           hashedString,
        ::mce::MaterialPtr const*       forcedMat,
        ::mce::ClientTexture const*     forcedTex,
        int                             animationValue,
        float                           isGlint,
        bool
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ActorResourceDefinition> definition,
        ::std::shared_ptr<::mce::TextureGroup>       textureGroup,
        ::BaseGameVersion const&                     baseGameVersion,
        ::Experiments const&
    );
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
