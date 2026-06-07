#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_80 { struct EmitterLifetimeEventsComponent; }
namespace SharedTypes::v1_20_80 { struct EmitterShapeBoxComponent; }
namespace SharedTypes::v1_20_80 { struct EmitterShapeSphereComponent; }
namespace SharedTypes::v1_20_80 { struct ParticleAppearanceBillboardComponent; }
namespace SharedTypes::v1_20_80 { struct ParticleCurve; }
namespace SharedTypes::v1_20_80 { struct ParticleCurveBezierChain; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectData; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectDescription; }
namespace SharedTypes::v1_20_80 { struct ParticleEventNode; }
namespace SharedTypes::v1_20_80 { struct ParticleEventRandomNode; }
namespace SharedTypes::v1_20_80 { struct UV; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {
// functions
// NOLINTBEGIN
MCAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCAPI void bindItemComponentTypes(::cereal::ReflectionCtx& ctx);

MCAPI bool operator==(
    ::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent const&,
    ::SharedTypes::v1_20_80::EmitterLifetimeEventsComponent const&
);

MCAPI bool operator==(
    ::SharedTypes::v1_20_80::EmitterShapeBoxComponent const&,
    ::SharedTypes::v1_20_80::EmitterShapeBoxComponent const&
);

MCAPI bool operator==(
    ::SharedTypes::v1_20_80::EmitterShapeSphereComponent const&,
    ::SharedTypes::v1_20_80::EmitterShapeSphereComponent const&
);

MCAPI bool operator==(
    ::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent const&,
    ::SharedTypes::v1_20_80::ParticleAppearanceBillboardComponent const&
);

MCAPI bool operator==(::SharedTypes::v1_20_80::ParticleCurve const&, ::SharedTypes::v1_20_80::ParticleCurve const&);

MCAPI bool operator==(
    ::SharedTypes::v1_20_80::ParticleCurveBezierChain const&,
    ::SharedTypes::v1_20_80::ParticleCurveBezierChain const&
);

MCAPI bool
operator==(::SharedTypes::v1_20_80::ParticleEffectData const&, ::SharedTypes::v1_20_80::ParticleEffectData const&);

MCAPI bool operator==(
    ::SharedTypes::v1_20_80::ParticleEffectDescription const&,
    ::SharedTypes::v1_20_80::ParticleEffectDescription const&
);

MCAPI bool
operator==(::SharedTypes::v1_20_80::ParticleEventNode const&, ::SharedTypes::v1_20_80::ParticleEventNode const&);

MCAPI bool operator==(
    ::SharedTypes::v1_20_80::ParticleEventRandomNode const&,
    ::SharedTypes::v1_20_80::ParticleEventRandomNode const&
);

MCAPI bool operator==(::SharedTypes::v1_20_80::UV const&, ::SharedTypes::v1_20_80::UV const&);
// NOLINTEND

} // namespace SharedTypes::v1_20_80
