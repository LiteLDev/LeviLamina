#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/world/actor/ParticleType.h"

class ParticleProvider {
public:
    // prevent constructor by default
    ParticleProvider& operator=(ParticleProvider const&);
    ParticleProvider(ParticleProvider const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ParticleProvider();

    // vIndex: 1
    virtual class Bedrock::PubSub::Connector<void(::ParticleType, class Vec3 const&, class Vec3 const&, int)>&
    getSendServerLegacyParticleConnector();

    // vIndex: 2
    virtual class Bedrock::PubSub::Connector<
        void(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float)>&
    getAddTerrainParticleEffectConnector();

    // vIndex: 3
    virtual class Bedrock::PubSub::Connector<
        void(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float)>&
    getAddTerrainSlideEffectConnector();

    // vIndex: 4
    virtual class Bedrock::PubSub::Connector<
        void(class Vec3 const&, ::ParticleType, struct ResolvedItemIconInfo const&)>&
    getAddBreakingItemParticleEffectConnector();

    MCAPI ParticleProvider();

    MCAPI void addBreakingItemParticleEffect(
        class Vec3 const&                  pos,
        ::ParticleType                     type,
        struct ResolvedItemIconInfo const& textureInfo
    );

    MCAPI class Particle* addParticle(
        ::ParticleType           type,
        class Vec3 const&        pos,
        class Vec3 const&        dir,
        int                      data,
        class CompoundTag const* tag,
        bool                     isGlobal
    );

    MCAPI void addParticleEffect(
        class HashedString const&      effect,
        class Vec3 const&              emitterPosition,
        class MolangVariableMap const& molangVariables
    );

    MCAPI void addTerrainParticleEffect(
        class BlockPos const& pos,
        class Block const&    block,
        class Vec3 const&     emitterPosition,
        float                 intensity,
        float                 velocityScalar,
        float                 emitterRadius
    );

    MCAPI void addTerrainSlideEffect(
        class BlockPos const& pos,
        class Block const&    block,
        class Vec3 const&     emitterPosition,
        float                 intensity,
        float                 velocityScalar,
        float                 emitterRadius
    );

    MCAPI void sendServerLegacyParticle(::ParticleType id, class Vec3 const& pos, class Vec3 const& dir, int data);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::PubSub::Connector<void(class Vec3 const&, ::ParticleType, struct ResolvedItemIconInfo const&)>&
    getAddBreakingItemParticleEffectConnector$();

    MCAPI class Bedrock::PubSub::Connector<
        void(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float)>&
    getAddTerrainParticleEffectConnector$();

    MCAPI class Bedrock::PubSub::Connector<
        void(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float)>&
    getAddTerrainSlideEffectConnector$();

    MCAPI class Bedrock::PubSub::Connector<void(::ParticleType, class Vec3 const&, class Vec3 const&, int)>&
    getSendServerLegacyParticleConnector$();

    // NOLINTEND
};
