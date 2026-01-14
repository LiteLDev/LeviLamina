#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/DirectionType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEmitterDirection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::v1_20_80::DirectionType>> mDirectionString;
    ::ll::TypedStorage<8, 152, ::std::optional<::std::array<::SharedTypes::Legacy::ExpressionNode, 3>>> mDirectionExpr;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ~ParticleEmitterDirection();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
