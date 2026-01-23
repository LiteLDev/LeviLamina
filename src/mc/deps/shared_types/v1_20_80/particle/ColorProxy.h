#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/ColorGradient.h"

namespace SharedTypes::v1_20_80::ParticleAppearanceTintingComponentHelper {

struct ColorProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_20_80::ColorGradient> mInterpolatedColor;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>  mInterpolantExpr;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorProxy& operator=(ColorProxy const&);
    ColorProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ColorProxy(::SharedTypes::v1_20_80::ParticleAppearanceTintingComponentHelper::ColorProxy const&);

    MCAPI_S ::SharedTypes::v1_20_80::ParticleAppearanceTintingComponentHelper::ColorProxy&
    operator=(::SharedTypes::v1_20_80::ParticleAppearanceTintingComponentHelper::ColorProxy&&);

    MCAPI bool
    operator==(::SharedTypes::v1_20_80::ParticleAppearanceTintingComponentHelper::ColorProxy const& other) const;

    MCAPI ~ColorProxy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleAppearanceTintingComponentHelper::ColorProxy const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80::ParticleAppearanceTintingComponentHelper
