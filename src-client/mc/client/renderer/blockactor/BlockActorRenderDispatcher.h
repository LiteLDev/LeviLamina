#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActorRendererId.h"

// auto generated forward declare list
// clang-format off
class ActorResourceDefinitionGroup;
class BaseActorRenderContext;
class BaseGameVersion;
class Block;
class BlockActor;
class BlockActorRenderer;
class BlockPos;
class BlockSource;
class BlockTessellator;
class Experiments;
class Font;
class GeometryGroup;
class HashedString;
class ItemStack;
class ResourceLoadManager;
class ResourcePackManager;
class Tessellator;
class Vec3;
struct NameTagRenderObject;
namespace dragon { struct RenderMetadata; }
namespace mce { class MaterialPtr; }
namespace mce { class TextureGroup; }
namespace mce { struct ClientTexture; }
// clang-format on

class BlockActorRenderDispatcher {
public:
    // BlockActorRenderDispatcher inner types define
    using RendererMap = ::Bedrock::DenseEnumMap<::BlockActorRendererId, ::std::unique_ptr<::BlockActorRenderer>, 28>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        224,
        ::Bedrock::DenseEnumMap<::BlockActorRendererId, ::std::unique_ptr<::BlockActorRenderer>, 28>>
        mRenderers;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::function<void(
            ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup const> const&,
            ::std::shared_ptr<::mce::TextureGroup>
        )>>>
        mGameSpecificRegistrationCallbacks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockActorRenderDispatcher();

    MCAPI void clearEntityRenderers();

    MCAPI ::std::vector<::NameTagRenderObject> extractRenderTextObjects(
        ::Font&              font,
        ::Tessellator&       tessellator,
        ::BlockActor&        entity,
        ::std::string const& str,
        ::Vec3               camTargetPos
    );

    MCAPI ::BlockActorRenderer* getRenderer(::BlockActor& entity);

    MCAPI ::BlockActorRenderer* getRenderer(::BlockActorRendererId rendererId);

    MCAPI void initializeBlockEntityRenderers(
        ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> const&                      geometryGroup,
        ::std::shared_ptr<::mce::TextureGroup>                                     textureGroup,
        ::BlockTessellator&                                                        blockTessellator,
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup const> const& actorResourceDefinitionGroup,
        ::ResourcePackManager&                                                     resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>                       resourceLoadManager,
        ::BaseGameVersion const&                                                   baseGameVersion,
        ::Experiments const&                                                       experiments
    );

    MCAPI void registerAdditionalBlockActorRenderers(
        ::BlockActorRendererId const&           id,
        ::std::unique_ptr<::BlockActorRenderer> blockActorRenderer
    );

    MCAPI void registerGameSpecificBlockActorRendererCallback(
        ::std::function<void(
            ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup const> const&,
            ::std::shared_ptr<::mce::TextureGroup>
        )> callback
    );

    MCAPI void render(
        ::BaseActorRenderContext&                 entityRenderContext,
        ::BlockSource&                            renderSource,
        ::BlockActor&                             e,
        ::Block const&                            block,
        bool                                      renderAlphaLayer,
        ::mce::MaterialPtr const&                 forcedMat,
        ::mce::ClientTexture const*               forceTex,
        int                                       breakingAmount,
        ::std::optional<::dragon::RenderMetadata> renderMetadata
    );

    MCAPI void render(
        ::BaseActorRenderContext&                 entityRenderContext,
        ::BlockSource&                            renderSource,
        ::BlockActor&                             e,
        ::Block const&                            block,
        ::Vec3 const&                             renderPos,
        ::BlockPos const&                         worldPos,
        bool                                      renderAlphaLayer,
        ::mce::MaterialPtr const&                 forcedMat,
        ::mce::ClientTexture const*               forceTex,
        int                                       breakingAmount,
        ::std::optional<::dragon::RenderMetadata> renderMetadata
    );

    MCAPI void renderBanner(
        ::BaseActorRenderContext&       entityRenderContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::ItemStack const&              instance,
        bool                            longPole
    );

    MCAPI void renderShulkerBox(
        ::BaseActorRenderContext&       entityRenderContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::ItemStack const&              instance
    );

    MCAPI void renderSkull(
        ::BaseActorRenderContext&       entityRenderContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::Vec3 const&                   pos,
        int                             face,
        float                           rot,
        ::HashedString const&           hashedString,
        ::mce::MaterialPtr const*       forcedMat,
        ::mce::ClientTexture const*     forceTex,
        int                             breakingAmount,
        float                           animationValue,
        bool                            isGlint
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
