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
    // vIndex: 0, symbol: ??1ParticleProvider@@UEAA@XZ
    virtual ~ParticleProvider();

    // vIndex: 1, symbol:
    // ?getSendServerLegacyParticleConnector@ParticleProvider@@UEAAAEAV?$Connector@$$A6AXW4ParticleType@@AEBVVec3@@1H@Z@PubSub@Bedrock@@XZ
    virtual class Bedrock::PubSub::Connector<void(::ParticleType, class Vec3 const&, class Vec3 const&, int)>&
    getSendServerLegacyParticleConnector();

    // vIndex: 2, symbol:
    // ?getAddTerrainParticleEffectConnector@ParticleProvider@@UEAAAEAV?$Connector@$$A6AXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z@PubSub@Bedrock@@XZ
    virtual class Bedrock::PubSub::Connector<
        void(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float)>&
    getAddTerrainParticleEffectConnector();

    // vIndex: 3, symbol:
    // ?getAddTerrainSlideEffectConnector@ParticleProvider@@UEAAAEAV?$Connector@$$A6AXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z@PubSub@Bedrock@@XZ
    virtual class Bedrock::PubSub::Connector<
        void(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float)>&
    getAddTerrainSlideEffectConnector();

    // vIndex: 4, symbol:
    // ?getAddBreakingItemParticleEffectConnector@ParticleProvider@@UEAAAEAV?$Connector@$$A6AXAEBVVec3@@W4ParticleType@@AEBUResolvedItemIconInfo@@@Z@PubSub@Bedrock@@XZ
    virtual class Bedrock::PubSub::Connector<
        void(class Vec3 const&, ::ParticleType, struct ResolvedItemIconInfo const&)>&
    getAddBreakingItemParticleEffectConnector();

    // symbol: ??0ParticleProvider@@QEAA@XZ
    MCAPI ParticleProvider();

    // symbol:
    // ?addBreakingItemParticleEffect@ParticleProvider@@QEAAXAEBVVec3@@W4ParticleType@@AEBUResolvedItemIconInfo@@@Z
    MCAPI void addBreakingItemParticleEffect(class Vec3 const&, ::ParticleType, struct ResolvedItemIconInfo const&);

    // symbol: ?addParticle@ParticleProvider@@QEAAPEAVParticle@@W4ParticleType@@AEBVVec3@@1HPEBVCompoundTag@@_N@Z
    MCAPI class Particle* addParticle(
        ::ParticleType           type,
        class Vec3 const&        pos,
        class Vec3 const&        dir,
        int                      data,
        class CompoundTag const* tag,
        bool                     isGlobal
    );

    // symbol: ?addParticleEffect@ParticleProvider@@QEAAXAEBVHashedString@@AEBVVec3@@AEBVMolangVariableMap@@@Z
    MCAPI void addParticleEffect(
        class HashedString const&      effect,
        class Vec3 const&              emitterPosition,
        class MolangVariableMap const& molangVariables
    );

    // symbol: ?addTerrainParticleEffect@ParticleProvider@@QEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
    MCAPI void
    addTerrainParticleEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);

    // symbol: ?addTerrainSlideEffect@ParticleProvider@@QEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
    MCAPI void addTerrainSlideEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);

    // symbol: ?sendServerLegacyParticle@ParticleProvider@@QEAAXW4ParticleType@@AEBVVec3@@1H@Z
    MCAPI void sendServerLegacyParticle(::ParticleType, class Vec3 const&, class Vec3 const&, int);

    // NOLINTEND
};
