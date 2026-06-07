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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ApplyAnimationContext();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ApplyAnimationContext() = default;

    virtual void fireParticleEvents(
        ::ActorSkeletalAnimation const&,
        ::std::unordered_map<::HashedString, ::HashedString> const&,
        ::BaseActorRenderContext&,
        float,
        float,
        ::RenderParams&
    ) const;

    virtual bool shouldAnimateBones(::RenderParams const&) const;

    virtual bool shouldActorRenderUpdateEffects(::BaseActorRenderContext const&) const;

    virtual bool hasParticleSystemEngine(::RenderParams const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit ApplyAnimationContext(::ApplyAnimationCache const& cache);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ApplyAnimationCache const& cache);
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
