#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/BezierChainNodeMap.h"
#include "mc/deps/shared_types/v1_20_80/particle/ColorGradient.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveBezierChain.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveSimpleBase.h"
#include "mc/deps/shared_types/v1_20_80/particle/VectorEvents.h"

namespace SharedTypes::v1_20_80 {
// functions
// NOLINTBEGIN
MCFOLD bool
operator==(::SharedTypes::v1_20_80::VectorEvents const& __P0, ::SharedTypes::v1_20_80::VectorEvents const& __P1);

MCAPI_S bool operator==(
    ::SharedTypes::v1_20_80::BezierChainNodeMap const& lhs,
    ::SharedTypes::v1_20_80::BezierChainNodeMap const& rhs
);

MCAPI bool
operator==(::SharedTypes::v1_20_80::ColorGradient const& lhs, ::SharedTypes::v1_20_80::ColorGradient const& rhs);

MCAPI bool operator==(
    ::SharedTypes::v1_20_80::ParticleCurveBezierChain const& lhs,
    ::SharedTypes::v1_20_80::ParticleCurveBezierChain const& rhs
);

MCAPI bool operator==(
    ::SharedTypes::v1_20_80::ParticleCurveSimpleBase const& lhs,
    ::SharedTypes::v1_20_80::ParticleCurveSimpleBase const& rhs
);
// NOLINTEND

} // namespace SharedTypes::v1_20_80
