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
class BlockActorRenderer;
class BlockPos;
class BlockSource;
class BlockTessellator;
class Experiments;
class Font;
class GeometryGroup;
class IVanillaRenderBlockActorComponent;
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
    MCAPI ::std::vector<::NameTagRenderObject> extractRenderTextObjects(
        ::Font&                              font,
        ::Tessellator&                       tessellator,
        ::IVanillaRenderBlockActorComponent& renderComponent,
        ::std::string const&                 str,
        ::Vec3                               camTargetPos
    );

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

    MCAPI void registerGameSpecificBlockActorRendererCallback(
        ::std::function<void(
            ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup const> const&,
            ::std::shared_ptr<::mce::TextureGroup>
        )> callback
    );

    MCAPI void render(
        ::BaseActorRenderContext&                 entityRenderContext,
        ::BlockSource&                            renderSource,
        ::IVanillaRenderBlockActorComponent&      renderComponent,
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
        ::IVanillaRenderBlockActorComponent&      renderComponent,
        ::Block const&                            block,
        ::Vec3 const&                             renderPos,
        ::BlockPos const&                         worldPos,
        bool                                      renderAlphaLayer,
        ::mce::MaterialPtr const&                 forcedMat,
        ::mce::ClientTexture const*               forceTex,
        int                                       breakingAmount,
        ::std::optional<::dragon::RenderMetadata> renderMetadata
    );
    // NOLINTEND
};
