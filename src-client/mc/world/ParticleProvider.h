#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class HashedString;
class IConstBlockSource;
class IRandom;
class Vec3;
struct BreakingItemParticleData;
struct ParticleSystemInterface;
struct ResolvedItemIconInfo;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace mce { class Color; }
// clang-format on

class ParticleProvider {
public:
    // ParticleProvider inner types define
    using SendLegacyParticleFunction = void(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);

    using AddTerrainParticleFunction = void(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    using AddTerrainSlideFunction = void(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    using AddBreakingItemParticleFunction =
        void(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);

    using AddBiomeTintedParticleFunction =
        void(::HashedString const&, ::BlockPos const&, ::Block const&, ::std::optional<::mce::Color>);

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
    // vIndex: 0
    virtual ~ParticleProvider() = default;

    // vIndex: 1
    virtual void addSprintParticleEffect(::Actor const&, ::IConstBlockSource const&, ::IRandom&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleProvider();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $addSprintParticleEffect(::Actor const&, ::IConstBlockSource const&, ::IRandom&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
