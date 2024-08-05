#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/pubsub/Connector.h"
#include "mc/enums/ParticleType.h"

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

    MCAPI void addBreakingItemParticleEffect(class Vec3 const&, ::ParticleType, struct ResolvedItemIconInfo const&);

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

    MCAPI void
    addTerrainParticleEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);

    MCAPI void addTerrainSlideEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);

    MCAPI void sendServerLegacyParticle(::ParticleType, class Vec3 const&, class Vec3 const&, int);

    // NOLINTEND
};
