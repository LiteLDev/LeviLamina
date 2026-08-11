#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/ApplyAnimationCache.h"

// auto generated forward declare list
// clang-format off
class ActorSkeletalAnimation;
class HashedString;
class RenderParams;
class BaseActorRenderContext;
// clang-format on

class ApplyAnimationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 8, ::ApplyAnimationCache const> mCache;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ApplyAnimationContext() = default;

#ifdef LL_PLAT_S
    virtual void fireParticleEvents(
        ::ActorSkeletalAnimation const&,
        ::std::unordered_map<::HashedString, ::HashedString> const&,
        ::BaseActorRenderContext&,
        float,
        float,
        ::RenderParams&
    ) const;
#else // LL_PLAT_C
    virtual void fireParticleEvents(
        ::ActorSkeletalAnimation const&                             animationData,
        ::std::unordered_map<::HashedString, ::HashedString> const& effectsRef,
        ::BaseActorRenderContext&                                   baseActorRenderContext,
        float                                                       animTime,
        float                                                       lastAnimTime,
        ::RenderParams&                                             renderParams
    ) const;
#endif

#ifdef LL_PLAT_S
    virtual bool shouldAnimateBones(::RenderParams const&) const;
#else // LL_PLAT_C
    virtual bool shouldAnimateBones(::RenderParams const& renderParams) const;
#endif

#ifdef LL_PLAT_S
    virtual bool shouldActorRenderUpdateEffects(::BaseActorRenderContext const&) const;
#else // LL_PLAT_C
    virtual bool shouldActorRenderUpdateEffects(::BaseActorRenderContext const& context) const;
#endif

#ifdef LL_PLAT_S
    virtual bool hasParticleSystemEngine(::RenderParams const&) const;
#else // LL_PLAT_C
    virtual bool hasParticleSystemEngine(::RenderParams const& renderParams) const;
#endif

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $fireParticleEvents(
        ::ActorSkeletalAnimation const&,
        ::std::unordered_map<::HashedString, ::HashedString> const&,
        ::BaseActorRenderContext&,
        float,
        float,
        ::RenderParams&
    ) const;

    MCFOLD bool $shouldAnimateBones(::RenderParams const&) const;

    MCFOLD bool $shouldActorRenderUpdateEffects(::BaseActorRenderContext const&) const;

    MCFOLD bool $hasParticleSystemEngine(::RenderParams const&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
