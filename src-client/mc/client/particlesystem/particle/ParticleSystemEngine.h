#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/ParticleRenderer.h"
#include "mc/deps/core/container/dense_slot_map.h"
#include "mc/deps/core/container/slot_map_handle.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class HashedString;
class LightTexture;
class Matrix;
class MolangVariableMap;
class ParticleEffectGroup;
class ParticleEffectInfo;
namespace ParticleSystem { class ParticleEmitter; }
// clang-format on

class ParticleSystemEngine : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ParticleSystemEngine inner types define
    using ParticleSlotMap = ::Bedrock::dense_slot_map<
        ::std::unique_ptr<::ParticleSystem::ParticleEmitter>,
        64,
        32,
        ::std::allocator<::std::unique_ptr<::ParticleSystem::ParticleEmitter>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        72,
        ::Bedrock::dense_slot_map<
            ::std::unique_ptr<::ParticleSystem::ParticleEmitter>,
            64,
            32,
            ::std::allocator<::std::unique_ptr<::ParticleSystem::ParticleEmitter>>>>
                                                                                                  mEmitterMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::ParticleSystem::ParticleEmitter*>>> mEmitterTickQueue;
    ::ll::TypedStorage<8, 64, ::ParticleRenderer>                                                 mParticleRenderer;
    ::ll::TypedStorage<1, 1, bool>                                                                mLastTickTimeValid;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                             mLastTickTime;
    ::ll::TypedStorage<8, 8, ::ParticleEffectGroup&>                                              mParticleEffectGroup;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::BlockSource>>                             mBlockSource;
    ::ll::TypedStorage<8, 8, ::LightTexture&>                                                     mLightTexture;
    ::ll::TypedStorage<4, 4096, ::std::array<::std::array<::mce::Color, 16>, 16>>                 mLightTextureData;
    ::ll::TypedStorage<4, 4, int>                                                                 mFramesToInterpolate;
    ::ll::TypedStorage<1, 1, bool>                                                                mBeingDestroyed;
    ::ll::TypedStorage<8, 8, uint64>                                                              mTotalParticleCount;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, uint64>>                       mEffectEmitterCounts;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, uint64>>                       mEffectParticleCounts;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                             mLastCameraPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleSystemEngine& operator=(ParticleSystemEngine const&);
    ParticleSystemEngine(ParticleSystemEngine const&);
    ParticleSystemEngine();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleSystemEngine() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleSystemEngine(
        ::ParticleEffectGroup& particleEffectGroup,
        ::BlockSource&         region,
        ::LightTexture&        lightTexture
    );

    MCAPI void clear();

    MCAPI ::Bedrock::slot_map_handle<::std::unique_ptr<::ParticleSystem::ParticleEmitter>, 64, 32>
    createParticleEmitter(
        ::std::shared_ptr<::ParticleEffectInfo> const& effectInfo,
        ::Matrix const&                                transform,
        ::MolangVariableMap                            molangVariableMap
    );

    MCAPI ::Bedrock::slot_map_handle<::std::unique_ptr<::ParticleSystem::ParticleEmitter>, 64, 32>
    createParticleEmitter(::HashedString const& effectName, ::Vec3 const& pos, ::MolangVariableMap molangVariableMap);

    MCAPI ::Bedrock::slot_map_handle<::std::unique_ptr<::ParticleSystem::ParticleEmitter>, 64, 32>
    createParticleEmitter(
        ::HashedString const& effectName,
        ::Matrix const&       transform,
        ::MolangVariableMap   molangVariableMap
    );

    MCAPI ::Bedrock::slot_map_handle<::std::unique_ptr<::ParticleSystem::ParticleEmitter>, 64, 32>
    createParticleEmitter(
        ::HashedString const& effectName,
        ::Actor const&        actor,
        ::HashedString const& locator,
        ::Vec3 const&         offset,
        ::MolangVariableMap   molangVariableMap
    );

    MCAPI ::ParticleSystem::ParticleEmitter* getParticleEmitter(
        ::Bedrock::slot_map_handle<::std::unique_ptr<::ParticleSystem::ParticleEmitter>, 64, 32> emitterHandle
    );

    MCAPI void tick(float a, bool paused);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ParticleEffectGroup& particleEffectGroup, ::BlockSource& region, ::LightTexture& lightTexture);
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
