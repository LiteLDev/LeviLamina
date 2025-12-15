#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
namespace mce { class MaterialPtr; }
namespace mce { class RenderContext; }
namespace mce { struct ActorConstants; }
// clang-format on

class ActorShaderManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9a9efa;
    ::ll::UntypedStorage<8, 16> mUnk15cfc5;
    ::ll::UntypedStorage<8, 16> mUnk12e716;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorShaderManager& operator=(ActorShaderManager const&);
    ActorShaderManager(ActorShaderManager const&);
    ActorShaderManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorShaderManager();

    virtual ::mce::Color _getOverlayColor(::Actor& actor, float a) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::mce::MaterialPtr& getEntityMaterial();

    MCNAPI ::mce::MaterialPtr& getStaticMaterial();

    MCNAPI ::mce::MaterialPtr& getTransparentEntityMaterial();

    MCNAPI void setupFoilShaderParameters(
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

    MCNAPI void setupFoilShaderParameters(
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

    MCNAPI void setupShaderParameters(
        ::ScreenContext&          screenContext,
        ::BaseActorRenderContext& entityContext,
        ::Actor&                  actor,
        float                     a
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::mce::Color getOverlayColor(::Actor& actor, float);

    MCNAPI static void setEntityConstants(
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

    MCNAPI static void setupFoilShaderParameters(::ScreenContext& screenContext, ::TextureUVCoordinateSet const& icon);

    MCNAPI static void setupFoilShaderParameters(
        ::ScreenContext&    screenContext,
        ::mce::Color const& overlay,
        ::mce::Color const& changeColor,
        ::mce::Color const& changeColor2,
        ::Vec2 const&       uvScale
    );

    MCNAPI static void setupShaderParameters(
        ::ScreenContext&    screenContext,
        float               br,
        ::mce::Color const& overlayColor,
        bool                dimensionHasCeiling
    );

    MCNAPI static void setupShaderParameters(
        ::ScreenContext&    screenContext,
        ::mce::Color const& overlay,
        ::mce::Color const& changeColor,
        ::mce::Color const& changeColor2
    );

    MCNAPI static void setupShaderParameters(
        ::ScreenContext&          screenContext,
        ::BaseActorRenderContext& entityContext,
        ::Actor&                  actor,
        ::mce::Color const&       overlay,
        float,
        ::Brightness lightEmission
    );

    MCNAPI static void setupShaderParameters(
        ::ScreenContext&          screenContext,
        ::BaseActorRenderContext& entityContext,
        ::Actor&                  actor,
        ::mce::Color const&       overlay,
        float,
        ::Vec4 const& uvAnim
    );

    MCNAPI static void setupShaderParameters(
        ::ScreenContext&        screenContext,
        ::BlockSource&          source,
        ::BrightnessPair const& lightColorUV,
        float,
        bool            ignoreLighting,
        ::LightTexture& lightTexture,
        ::Vec2 const&   uvScale,
        ::Vec4 const&   uvAnim
    );

    MCNAPI static void setupShaderParameters(
        ::ScreenContext&  screenContext,
        ::BlockSource&    source,
        ::BlockPos const& pos,
        float             a,
        bool              ignoreLighting,
        ::LightTexture&   lightTexture,
        ::Vec2 const&     uvScale,
        ::Vec4 const&     uvAnim
    );

    MCNAPI static void setupShaderParameters(
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

    MCNAPI static void setupShaderParameters(
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

    MCNAPI static void setupShaderParameters(
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

    MCNAPI static void setupShaderParameters(
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
    MCNAPI static ::ResourceLocation const& GLINT_ACTOR_TEXTURE_LOCATION();

    MCNAPI static ::ResourceLocation const& GLINT_ITEM_TEXTURE_LOCATION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::Color $_getOverlayColor(::Actor& actor, float a) const;
    // NOLINTEND
};
