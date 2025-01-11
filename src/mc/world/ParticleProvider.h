#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/world/actor/ParticleType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class CompoundTag;
class HashedString;
class MolangVariableMap;
class Particle;
class Vec3;
struct BreakingItemParticleData;
struct ResolvedItemIconInfo;
// clang-format on

class ParticleProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk35e01e;
    ::ll::UntypedStorage<8, 128> mUnk9deb54;
    ::ll::UntypedStorage<8, 128> mUnk876d92;
    ::ll::UntypedStorage<8, 128> mUnk499051;
    ::ll::UntypedStorage<8, 128> mUnka1cafa;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleProvider& operator=(ParticleProvider const&);
    ParticleProvider(ParticleProvider const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleProvider();

    MCAPI void addBreakingItemParticleEffect(
        ::Vec3 const&                     pos,
        ::BreakingItemParticleData const& data,
        ::ResolvedItemIconInfo const&     textureInfo
    );

    MCAPI ::Particle* addParticle(
        ::ParticleType       type,
        ::Vec3 const&        pos,
        ::Vec3 const&        dir,
        int                  data,
        ::CompoundTag const* tag,
        bool                 isGlobal
    );

    MCAPI void addParticleEffect(
        ::HashedString const&      effect,
        ::Vec3 const&              emitterPosition,
        ::MolangVariableMap const& molangVariables
    );

    MCAPI void addTerrainParticleEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             intensity,
        float             velocityScalar,
        float             emitterRadius
    );

    MCAPI void addTerrainSlideEffect(
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Vec3 const&     emitterPosition,
        float             intensity,
        float             velocityScalar,
        float             emitterRadius
    );

    MCAPI ::Bedrock::PubSub::Connector<
        void(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&)>&
    getAddBreakingItemParticleEffectConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float)>&
    getAddTerrainParticleEffectConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float)>&
    getAddTerrainSlideEffectConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::ParticleType, ::Vec3 const&, ::Vec3 const&, int)>&
    getSendServerLegacyParticleConnector();

    MCAPI void sendServerLegacyParticle(::ParticleType id, ::Vec3 const& pos, ::Vec3 const& dir, int data);

    MCAPI ~ParticleProvider();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
