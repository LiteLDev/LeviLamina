#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_renderer/framebuilder/CustomSurfaceShaderMetadata.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AnimationComponent;
class BaseActorRenderContext;
class ItemStack;
class Mob;
class MolangVariableMap;
class Vec4;
namespace mce { class Color; }
// clang-format on

class ActorRenderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor*>                                         mActor;
    ::ll::TypedStorage<8, 8, ::ItemStack const*>                               mItemStack;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          position;
    ::ll::TypedStorage<4, 8, ::Vec2>                                           rotation;
    ::ll::TypedStorage<4, 8, ::Vec2>                                           mHeadRot;
    ::ll::TypedStorage<1, 1, bool>                                             glint;
    ::ll::TypedStorage<1, 1, bool>                                             mIgnoreLighting;
    ::ll::TypedStorage<1, 1, bool>                                             mIsInUI;
    ::ll::TypedStorage<4, 4, float>                                            mDeltaTime;
    ::ll::TypedStorage<8, 8, ::AnimationComponent&>                            mAnimationComponent;
    ::ll::TypedStorage<8, 8, ::MolangVariableMap&>                             mVariables;
    ::ll::TypedStorage<4, 8, ::mce::framebuilder::CustomSurfaceShaderMetadata> mCSSMetadata;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRenderData& operator=(ActorRenderData const&);
    ActorRenderData(ActorRenderData const&);
    ActorRenderData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _Level_setupShading(
        ::BaseActorRenderContext& renderContext,
        ::mce::Color const&       overlayColor,
        ::mce::Color const&       changeColor,
        ::mce::Color const&       changeColor2,
        ::Vec4 const&             uvAnim,
        float                     br,
        bool                      ignoreLighting,
        bool                      filterLighting,
        bool                      isEnchanted
    ) const;

    MCAPI void _UI_setupShading(
        ::BaseActorRenderContext& renderContext,
        ::mce::Color const&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::Vec4 const& uvAnim,
        float,
        bool,
        bool
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::std::pair<float, float>>
    getDamageOrGlidingXYRotation(::Mob const& mob, float actorFrameAlpha, bool isFirstPersonPlayer);

    MCAPI static ::std::optional<::std::pair<float, float>> getNamedRotationAndOffset(::Mob const& mob);
    // NOLINTEND
};
