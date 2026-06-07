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
    ::ll::TypedStorage<4, 4, float> mWeight;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEventRandomNode(ParticleEventRandomNode const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleEventRandomNode();

#ifdef LL_PLAT_C
    MCAPI ParticleEventRandomNode(float weight, ::SharedTypes::v1_20_80::ParticleEventNode& event);
#endif

    MCAPI ::SharedTypes::v1_20_80::ParticleEventRandomNode&
    operator=(::SharedTypes::v1_20_80::ParticleEventRandomNode const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

#ifdef LL_PLAT_C
    MCAPI void* $ctor(float weight, ::SharedTypes::v1_20_80::ParticleEventNode& event);
#endif
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
