#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEventNode.h"

namespace SharedTypes::v1_20_80 {

struct ParticleEventRandomNode : public ::SharedTypes::v1_20_80::ParticleEventNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mWeight;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::SharedTypes::v1_20_80::ParticleEventRandomNode const&) const;
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
