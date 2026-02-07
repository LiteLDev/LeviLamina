#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ParticleEvent; }
namespace SharedTypes::v1_20_80 { struct ParticleEventNode; }
// clang-format on

namespace ParticleSystem {

class ParticleEventNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ParticleSystem::ParticleEventNode>>> mSequenceNodes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<float, ::std::unique_ptr<::ParticleSystem::ParticleEventNode>>>>
                                                                                 mRandomNodes;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ParticleSystem::ParticleEvent>> mEvent;
    ::ll::TypedStorage<4, 4, float>                                              mRandomNodesWeightSum;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEventNode();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ParticleEventNode(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI explicit ParticleEventNode(::SharedTypes::v1_20_80::ParticleEventNode const& nodeData);

    MCAPI void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEventNode& data);

    MCAPI ~ParticleEventNode();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEventNode const& nodeData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ParticleSystem
