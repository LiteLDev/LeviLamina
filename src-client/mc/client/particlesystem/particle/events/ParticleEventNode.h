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
    MCNAPI explicit ParticleEventNode(::ConstDeserializeDataParams const& deserializeDataParams);

    MCNAPI explicit ParticleEventNode(::SharedTypes::v1_20_80::ParticleEventNode const& nodeData);

    MCNAPI void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEventNode& data);

    MCNAPI ~ParticleEventNode();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ConstDeserializeDataParams const& deserializeDataParams);

    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEventNode const& nodeData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ParticleSystem
