#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseActorRenderContext;
class BlockPos;
class BlockSource;
class LightTexture;
class ResourceLocation;
class ScreenContext;
class Vec2;
class Vec4;
struct Brightness;
struct BrightnessPair;
struct TextureUVCoordinateSet;
namespace mce { class Color; }
namespace mce { class RenderContext; }
namespace mce { struct ActorConstants; }
// clang-format on

class ActorShaderManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mEntityMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mTransparentEntityMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mStaticMaterial;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorShaderManager();

    virtual ::mce::Color _getOverlayColor(::Actor& actor, float a) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::mce::MaterialPtr& getEntityMaterial();

    MCAPI ::mce::MaterialPtr& getStaticMaterial();

    MCAPI ::mce::MaterialPtr& getTransparentEntityMaterial();

    MCAPI void setupFoilShaderParameters(
        ::ScreenContext&          screenContext,
        ::BaseActorRenderContext& entityContext,
        ::Actor&                  entity,
        ::mce::Color const&       changeColor,
        ::mce::Color const&       changeColor2,
        ::Vec2 const&             uvScale,
        float                     a,
        ::Brightness              lightEmission,
        bool                      allowOverlay
    ) const;

    MCAPI void setupFoilShaderParameters(
        ::ScreenContext&          screenContext,
        ::BaseActorRenderContext& entityContext,
        ::Actor&                  entity,
        ::mce::Color const&       overlayColor,
        ::mce::Color const&       changeColor,
        ::mce::Color const&       changeColor2,
        ::Vec2 const&             uvScale,
        ::Vec4 const&             uvAnim,
        float                     br,
        ::Brightness              lightEmission,
        bool                      allowOverlay
    ) const;

    MCAPI void setupShaderParameters(
        ::ScreenContext&          screenContext,
        ::BaseActorRenderContext& entityContext,
        ::Actor&                  actor,
        float                     a
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::mce::Color getOverlayColor(::Actor& actor, float);

    MCAPI static void setEntityConstants(
        ::mce::ActorConstants& entityConstants,
        ::mce::RenderContext&  renderContext,
        ::mce::Color const&    blockLightColor,
        ::Vec2 const&          tileLightColorUV,
        ::mce::Color const&    overlay,
        ::mce::Color const&    changeColor,
        ::mce::Color const&    changeColor2,
        ::mce::Color const&    glintColor,
        ::Vec2 const&          glintUVScale,
        ::Vec4 const&          uvAnim,
        float                  uvOffset1,
        float                  uvOffset2,
        float                  uvRot1,
        float                  uvRot2
    );

    MCAPI static void setupFoilShaderParameters(::ScreenContext& screenContext, ::TextureUVCoordinateSet const& icon);

    MCAPI static void setupFoilShaderParameters(
        ::ScreenContext&    screenContext,
        ::mce::Color const& overlay,
        ::mce::Color const& changeColor,
        ::mce::Color const& changeColor2,
        ::Vec2 const&       uvScale
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&    screenContext,
        float               br,
        ::mce::Color const& overlayColor,
        bool                dimensionHasCeiling
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&    screenContext,
        ::mce::Color const& overlay,
        ::mce::Color const& changeColor,
        ::mce::Color const& changeColor2
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&          screenContext,
        ::BaseActorRenderContext& entityContext,
        ::Actor&                  actor,
        ::mce::Color const&       overlay,
        float,
        ::Brightness lightEmission
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&          screenContext,
        ::BaseActorRenderContext& entityContext,
        ::Actor&                  actor,
        ::mce::Color const&       overlay,
        float,
        ::Vec4 const& uvAnim
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&        screenContext,
        ::BlockSource&          source,
        ::BrightnessPair const& lightColorUV,
        float,
        bool            ignoreLighting,
        ::LightTexture& lightTexture,
        ::Vec2 const&   uvScale,
        ::Vec4 const&   uvAnim
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&  screenContext,
        ::BlockSource&    source,
        ::BlockPos const& pos,
        float             a,
        bool              ignoreLighting,
        ::LightTexture&   lightTexture,
        ::Vec2 const&     uvScale,
        ::Vec4 const&     uvAnim
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&          screenContext,
        ::BaseActorRenderContext& entityContext,
        ::Actor&                  entity,
        ::mce::Color const&       overlay,
        ::mce::Color const&       changeColor,
        ::mce::Color const&       changeColor2,
        ::Vec4 const&             uvAnim,
        float                     br,
        float,
        bool isEnchanted
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&    screenContext,
        ::BlockSource&      source,
        ::BlockPos const&   pos,
        ::mce::Color const& changeColor,
        ::mce::Color const& changeColor2,
        float,
        ::LightTexture& lightTexture,
        ::Vec2 const&   uvScale,
        bool            ignoreLighting,
        ::Brightness    lightEmission
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&    screenContext,
        ::mce::Color const& overlay,
        ::mce::Color const& changeColor,
        ::mce::Color const& changeColor2,
        ::mce::Color const& glintColor,
        float               uvOffset1,
        float               uvOffset2,
        float               uvRot1,
        float               uvRot2,
        ::Vec2 const&       glintUVScale,
        ::Vec4 const&       uvAnim,
        float
    );

    MCAPI static void setupShaderParameters(
        ::ScreenContext&          screenContext,
        ::BaseActorRenderContext& entityContext,
        ::Actor&                  entity,
        ::mce::Color const&       overlay,
        ::mce::Color const&       changeColor,
        ::mce::Color const&       changeColor2,
        ::mce::Color const&       glintColor,
        float                     uvOffset1,
        float                     uvOffset2,
        float                     uvRot1,
        float                     uvRot2,
        ::Vec2 const&             glintUVScale,
        ::Vec4 const&             uvAnim,
        float                     br,
        ::Brightness              lightEmission
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ResourceLocation const& GLINT_ACTOR_TEXTURE_LOCATION();

    MCAPI static ::ResourceLocation const& GLINT_ITEM_TEXTURE_LOCATION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::Color $_getOverlayColor(::Actor& actor, float a) const;
    // NOLINTEND
};
