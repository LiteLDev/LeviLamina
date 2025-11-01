#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEventNode.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEventRandomNode : public ::SharedTypes::v1_20_80::ParticleEventNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk45e375;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEventRandomNode& operator=(ParticleEventRandomNode const&);
    ParticleEventRandomNode(ParticleEventRandomNode const&);
    ParticleEventRandomNode();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

};

}
