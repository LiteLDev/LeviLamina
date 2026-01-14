#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleSoundEffectEvent.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleVisualEffectEvent.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_80 { struct ParticleEventRandomNode; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEventNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::SharedTypes::v1_20_80::ParticleEventNode>>>
        mSequenceNodes;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::SharedTypes::v1_20_80::ParticleEventRandomNode>>>
                                                                                                  mRandomNodes;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                              mEventExpression;
    ::ll::TypedStorage<8, 104, ::SharedTypes::v1_20_80::ParticleVisualEffectEvent>                mVisualEffect;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::v1_20_80::ParticleSoundEffectEvent>> mSoundEffect;
    ::ll::TypedStorage<8, 32, ::std::string>                                                      mLogMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEventNode();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleEventNode(::SharedTypes::v1_20_80::ParticleEventNode&&);

    MCAPI ParticleEventNode(::SharedTypes::v1_20_80::ParticleEventNode const&);

    MCAPI ::SharedTypes::v1_20_80::ParticleEventNode& operator=(::SharedTypes::v1_20_80::ParticleEventNode&&);

    MCAPI ::SharedTypes::v1_20_80::ParticleEventNode& operator=(::SharedTypes::v1_20_80::ParticleEventNode const&);

    MCAPI ~ParticleEventNode();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEventNode&&);

    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEventNode const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
