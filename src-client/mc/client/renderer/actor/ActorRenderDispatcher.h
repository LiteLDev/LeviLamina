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
class GeometryGroup;
class HashedString;
class ResourceLoadManager;
class ResourcePackManager;
class Tessellator;
class Vec2;
class Vec3;
struct ActorResourceDefinition;
struct ActorResourceDefinitionGroup;
struct BlockTessellator;
struct NameTagRenderObject;
namespace mce { class Color; }
namespace mce { class TextureGroup; }
// clang-format on

class ActorRenderDispatcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkfb9bd4;
    ::ll::UntypedStorage<8, 64> mUnk29c74d;
    ::ll::UntypedStorage<8, 24> mUnkdde25c;
    ::ll::UntypedStorage<1, 1>  mUnk79be5f;
    ::ll::UntypedStorage<8, 8>  mUnk83274d;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRenderDispatcher& operator=(ActorRenderDispatcher const&);
    ActorRenderDispatcher(ActorRenderDispatcher const&);
    ActorRenderDispatcher();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorRenderDispatcher();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ActorRenderDispatcher(::SubClientId clientId);

    MCNAPI ::std::shared_ptr<::ActorRenderer> _getRenderer(::Actor& actor) const;

    MCNAPI ::std::vector<::NameTagRenderObject> extractRenderTextObjects(
        ::Font&              font,
        ::Tessellator&       tessellator,
        ::Actor&             actor,
        ::std::string const& str,
        ::Vec3               camTargetPos,
        float                a,
        ::mce::Color         color
    );

    MCNAPI ::std::shared_ptr<::DataDrivenRenderer> getDataDrivenRenderer(::HashedString const& rendererName) const;

    MCNAPI ::std::shared_ptr<::ActorRenderer> getRenderer(::Actor const& actor) const;

    MCNAPI ::std::shared_ptr<::ActorRenderer> getRenderer(::HashedString const& rendererName) const;

    MCNAPI void initializeEntityRenderers(
        ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> const&                geometryGroup,
        ::std::shared_ptr<::mce::TextureGroup>                               textureGroup,
        ::BlockTessellator&                                                  commonBlockRenderer,
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const& entityResourceDefGroup,
        ::ResourcePackManager&                                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>                 resourceLoadManager
    );

    MCNAPI bool initializePlayerRenderer(
        ::std::shared_ptr<::ActorResourceDefinition> resources,
        ::std::shared_ptr<::mce::TextureGroup>       textureGroup
    );

    MCNAPI void render(::BaseActorRenderContext& entityRenderContext, ::Actor& entity, bool ignoreLighting);

    MCNAPI void render(
        ::BaseActorRenderContext& entityRenderContext,
        ::Actor&                  entity,
        ::Vec3 const&             cameraTargetPos,
        ::Vec3 const&             pos,
        ::Vec2 const&             rot,
        bool                      ignoreLighting
    );

    MCNAPI void renderEffects(::BaseActorRenderContext& actorRenderContext, ::Actor& actor);

    MCNAPI void
    renderWaterHole(::BaseActorRenderContext& actorRenderContext, ::Actor& actor, ::Vec3 const& cameraTargetPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SubClientId clientId);
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
