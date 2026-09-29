#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ActorRenderer.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class BlockPos;
class BlockSource;
class MapDecoration;
class MapItemSavedData;
class Player;
class Tessellator;
class Vec3;
struct Brightness;
namespace mce { class Color; }
namespace mce { class TextureGroup; }
// clang-format on

class MapRenderer : public ::ActorRenderer, public ::AppPlatformListener {
public:
    // MapRenderer inner types declare
    // clang-format off
    class MapInstance;
    // clang-format on

    // MapRenderer inner types define
    class MapInstance {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float const>               mArrowRotationConverter;
        ::ll::TypedStorage<8, 8, ::MapItemSavedData const&> mMapData;
        ::ll::TypedStorage<1, 1, bool>                      mDirtyTexture;
        ::ll::TypedStorage<8, 8, ::MapRenderer&>            mMapRenderer;
        ::ll::TypedStorage<8, 56, ::ResourceLocation>       mResourceLocation;
        ::ll::TypedStorage<8, 32, ::mce::TexturePtr>        mMapTexture;
        ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>       mMarkerMaterial;
        ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>       mDecorationMaterial;
        ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>       mNameTagMaterial;
        ::ll::TypedStorage<4, 8, ::Vec2>                    playerM;
        ::ll::TypedStorage<4, 4, float>                     overlap_dist;
        // NOLINTEND

    public:
        // prevent constructor by default
        MapInstance& operator=(MapInstance const&);
        MapInstance(MapInstance const&);
        MapInstance();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool _renderFaceIcon(
            ::Tessellator&,
            ::BaseActorRenderContext& renderContext,
            ::Player*                 holdingPlayer,
            ::mce::Color const&       lightColor,
            float                     scale,
            ::MapDecoration const&    dec,
            ::ActorUniqueID const&    playerID,
            int,
            bool isEduWorld
        );

        MCAPI void _renderLabel(
            ::BaseActorRenderContext& renderContext,
            ::Vec3 const&             pos,
            ::std::string const&      label,
            ::mce::Color const&       labelColor
        );

        MCAPI ~MapInstance();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    using DecorationMeshArray = ::std::array<::mce::Mesh, 30>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::TextureGroup>> mTextureGroup;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::std::unique_ptr<::MapRenderer::MapInstance>>>
                                                                    mMapInstances;
    ::ll::TypedStorage<1, 1, ::SubClientId>                         mClientId;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                    mDecorationTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                    mMapBackgroundTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                    mIconBackgroundTexture;
    ::ll::TypedStorage<8, 960, ::std::array<::mce::TexturePtr, 30>> mMarkerTextures;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                   mMapMaterial;
    ::ll::TypedStorage<8, 632, ::mce::Mesh>                         mBackgroundMesh;
    ::ll::TypedStorage<8, 632, ::mce::Mesh>                         mForegroundMesh;
    ::ll::TypedStorage<8, 18960, ::mce::Mesh[30]>                   mDecorationMeshes;
    // NOLINTEND

public:
    // prevent constructor by default
    MapRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&) /*override*/;

    virtual void onAppSuspended() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MapRenderer(::SubClientId clientId, ::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void _generateMeshes(::BaseActorRenderContext& renderContext);

    MCAPI ::MapRenderer::MapInstance& _getMapInstance(::MapItemSavedData const& data);

    MCAPI void render(
        ::BaseActorRenderContext&           renderContext,
        ::Player*                           holdingPlayer,
        ::BlockPos const&                   pos,
        ::BlockSource&                      region,
        ::MapItemSavedData const&           data,
        bool                                showOnlyFrame,
        bool                                isBasic,
        ::std::optional<bool>               ignoreLighting,
        ::std::optional<::Brightness const> lightEmission
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SubClientId clientId, ::std::shared_ptr<::mce::TextureGroup> textureGroup);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $render(::BaseActorRenderContext&, ::ActorRenderData&);

    MCAPI void $onAppSuspended();
    // NOLINTEND
};
