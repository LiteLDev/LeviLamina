#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particle/ParticleLayer.h"
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/container/slot_map_handle.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/util/Random.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HashedString;
class Level;
class LightTexture;
class Particle;
class ParticleSystemEngine;
class ScreenContext;
class Vec3;
struct CustomParticle;
struct ParticleLayerRenderObject;
struct ParticleRenderContext;
struct SeasonsRenderer;
namespace ParticleSystem { class ParticleEmitter; }
// clang-format on

class ParticleEngine : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ParticleEngine inner types define
    using ParticleBin = ::std::vector<::std::unique_ptr<::Particle>>;

    using ParticleTextureMap = ::std::unordered_map<::ParticleType, ::std::vector<::std::unique_ptr<::Particle>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 2376, ::std::vector<::std::unique_ptr<::Particle>>[99]> mInactiveParticlesPool;
    ::ll::TypedStorage<8, 8, ::Level&>                                            mLevel;
    ::ll::TypedStorage<8, 6336, ::std::unordered_map<::ParticleType, ::std::vector<::std::unique_ptr<::Particle>>>[99]>
                                                                                    mActiveParticles;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::CustomParticle>>>   customParticles;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::Particle>>>         mNewParticles;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::SeasonsRenderer>>        mSeasons;
    ::ll::TypedStorage<8, 8, ::LightTexture&>                                       mLightTexture;
    ::ll::TypedStorage<8, 2576, ::Random>                                           random;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                   opaqueMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                   alphaTestMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                   blendMat;
    ::ll::TypedStorage<4, 396, uint[99]>                                            maxParticleCount;
    ::ll::TypedStorage<4, 396, uint[99]>                                            particleCount;
    ::ll::TypedStorage<1, 1, bool>                                                  mTemporaryCameraActive;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ParticleType, ::HashedString>> mNewParticleSystemJsonLookup;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::ParticleType,
            ::Bedrock::slot_map_handle<::std::unique_ptr<::ParticleSystem::ParticleEmitter>, 64, 32>>>
        mNewParticleSystemMap;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEngine& operator=(ParticleEngine const&);
    ParticleEngine(ParticleEngine const&);
    ParticleEngine();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleEngine() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleEngine(
        ::Level&                                         level,
        ::Bedrock::NotNullNonOwnerPtr<::SeasonsRenderer> seasons,
        ::LightTexture&                                  lightTexture
    );

    MCAPI ::std::unique_ptr<::Particle> _create(::ParticleType type);

    MCAPI void _emitParticleNew(
        ::ParticleSystemEngine& particleSystemEngine,
        ::ParticleType          type,
        ::Vec3 const&           pos,
        ::Vec3 const&           dir,
        int                     data
    );

    MCAPI ::ParticleLayerRenderObject _extractParticleLayer(
        ::ScreenContext&               screenContext,
        ::ParticleRenderContext const& particleRenderContext,
        ::ParticleLayer                particleLayer,
        ::mce::MaterialPtr const&      mat
    ) const;

    MCAPI void addCustomParticle(::std::unique_ptr<::CustomParticle> particle);

    MCAPI void clear();

    MCAPI ::Particle* instance(
        ::ParticleType          type,
        ::Vec3 const&           pos,
        ::Vec3 const&           dir,
        int                     data,
        ::ParticleSystemEngine* particleSystemEngine,
        ::CompoundTag const*    tag
    );

    MCAPI void tick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void render(::ScreenContext& screenContext, ::ParticleLayerRenderObject const& particleState);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Level& level, ::Bedrock::NotNullNonOwnerPtr<::SeasonsRenderer> seasons, ::LightTexture& lightTexture);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
