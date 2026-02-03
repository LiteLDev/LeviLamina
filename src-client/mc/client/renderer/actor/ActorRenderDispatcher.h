#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderer;
class BaseActorRenderContext;
class DataDrivenRenderer;
class Font;
class HashedString;
class ResourceLoadManager;
class ResourcePackManager;
class Tessellator;
class Vec2;
class Vec3;
struct ActorResourceDefinition;
struct ActorResourceDefinitionGroup;
struct BlockTessellator;
struct GeometryGroup;
struct NameTagRenderObject;
namespace mce { class Color; }
namespace mce { class TextureGroup; }
// clang-format on

class ActorRenderDispatcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::shared_ptr<::ActorRenderer>>>
        mNonDataDrivenRenderers;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::shared_ptr<::DataDrivenRenderer>>>
        mDataDrivenRenderers;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::function<void(
            ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const&,
            ::std::shared_ptr<::mce::TextureGroup>
        )>>>
                                            mGameSpecificRegistrationCallbacks;
    ::ll::TypedStorage<1, 1, ::SubClientId> mClientSubId;
    ::ll::TypedStorage<8, 8, int64 const>   mResourceLoadTimeStamp;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRenderDispatcher();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorRenderDispatcher() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorRenderDispatcher(::SubClientId clientId);

    MCAPI ::std::vector<::NameTagRenderObject> extractRenderTextObjects(
        ::Font&              font,
        ::Tessellator&       tessellator,
        ::Actor&             actor,
        ::std::string const& str,
        ::Vec3               camTargetPos,
        float                a,
        ::mce::Color         color
    );

    MCAPI ::std::shared_ptr<::DataDrivenRenderer> getDataDrivenRenderer(::HashedString const& rendererName) const;

    MCAPI ::std::shared_ptr<::ActorRenderer> getRenderer(::Actor const& actor) const;

    MCAPI ::std::shared_ptr<::ActorRenderer> getRenderer(::HashedString const& rendererName) const;

    MCAPI bool hasWaterHole(::Actor& actor) const;

    MCAPI void initializeEntityRenderers(
        ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> const&                geometryGroup,
        ::std::shared_ptr<::mce::TextureGroup>                               textureGroup,
        ::BlockTessellator&                                                  commonBlockRenderer,
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const& entityResourceDefGroup,
        ::ResourcePackManager&                                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>                 resourceLoadManager,
        bool                                                                 supportsNewVertexFormat
    );

    MCAPI bool initializePlayerRenderer(
        ::std::shared_ptr<::ActorResourceDefinition> resources,
        ::std::shared_ptr<::mce::TextureGroup>       textureGroup
    );

    MCAPI void render(::BaseActorRenderContext& entityRenderContext, ::Actor& entity, bool ignoreLighting);

    MCAPI void render(
        ::BaseActorRenderContext& entityRenderContext,
        ::Actor&                  entity,
        ::Vec3 const&             pos,
        ::Vec2 const&             rot,
        bool                      ignoreLighting
    );

    MCAPI void render(
        ::BaseActorRenderContext& entityRenderContext,
        ::Actor&                  entity,
        ::Vec3 const&             cameraTargetPos,
        ::Vec3 const&             pos,
        ::Vec2 const&             rot,
        bool                      ignoreLighting
    );

    MCAPI void renderEffects(::BaseActorRenderContext& actorRenderContext, ::Actor& actor);

    MCAPI void
    renderWaterHole(::BaseActorRenderContext& actorRenderContext, ::Actor& actor, ::Vec3 const& cameraTargetPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SubClientId clientId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
