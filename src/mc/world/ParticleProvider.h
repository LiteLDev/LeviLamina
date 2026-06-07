#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class CompoundTag;
class HashedString;
class IConstBlockSource;
class IRandom;
class MolangVariableMap;
class Vec3;
struct BreakingItemParticleData;
struct ResolvedItemIconInfo;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace mce { class Color; }
class Particle;
class ParticleSystemInterface;
// clang-format on

class ParticleProvider {
public:
    // ParticleProvider inner types define
    using AddBiomeTintedParticleFunction =
        void(::HashedString const&, ::BlockPos const&, ::Block const&, ::std::optional<::mce::Color>);

    using AddBreakingItemParticleFunction =
        void(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);

    using AddTerrainParticleFunction = void(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    using AddTerrainSlideFunction = void(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    using SendLegacyParticleFunction = void(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ParticleSystemInterface>> mParticleSystemInterface;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::ParticleType, ::Vec3 const&, ::Vec3 const&, int),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mSendServerLegacyParticlePublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mAddTerrainParticleEffectPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mAddTerrainSlideEffectPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mAddBreakingItemParticleEffectPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::HashedString const&, ::BlockPos const&, ::Block const&, ::std::optional<::mce::Color>),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mAddBiomeTintedParticleEffectPublisher;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleProvider();

    virtual void addSprintParticleEffect(::Actor const& mob, ::IConstBlockSource const& region, ::IRandom& random);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleProvider();

    MCAPI void addBiomeTintedParticleEffect(
        ::HashedString const&         effect,
        ::BlockPos const&             pos,
        ::Block const&                block,
        ::std::optional<::mce::Color> overrideColor
    );

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

    MCFOLD ::Bedrock::PubSub::Connector<
        void(::HashedString const&, ::BlockPos const&, ::Block const&, ::std::optional<::mce::Color>)>&
    getAddBiomeTintedParticleEffectConnector();

    MCFOLD ::Bedrock::PubSub::Connector<
        void(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&)>&
    getAddBreakingItemParticleEffectConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float)>&
    getAddTerrainParticleEffectConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float)>&
    getAddTerrainSlideEffectConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::ParticleType, ::Vec3 const&, ::Vec3 const&, int)>&
    getSendServerLegacyParticleConnector();

#ifdef LL_PLAT_C
    MCAPI ::std::function<void()>
    initializeParticleSystemInterfaceProxy(::std::unique_ptr<::ParticleSystemInterface> particleSystemInterface);
#endif

    MCAPI void sendServerLegacyParticle(::ParticleType id, ::Vec3 const& pos, ::Vec3 const& dir, int data);
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

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $addSprintParticleEffect(::Actor const& mob, ::IConstBlockSource const& region, ::IRandom& random);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
