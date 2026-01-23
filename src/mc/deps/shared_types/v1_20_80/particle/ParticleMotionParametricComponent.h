#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleMotionParametricComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::std::optional<::std::array<::SharedTypes::Legacy::ExpressionNode, 3>>>
        mRelativePositionExpr;
    ::ll::TypedStorage<8, 152, ::std::optional<::std::array<::SharedTypes::Legacy::ExpressionNode, 3>>> mDirectionExpr;
    ::ll::TypedStorage<8, 56, ::std::optional<::SharedTypes::Legacy::ExpressionNode>>                   mRotationExpr;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleMotionParametricComponent(ParticleMotionParametricComponent const&);
    ParticleMotionParametricComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HashedString const& getIdentifier() const /*override*/;

#ifdef LL_PLAT_S
    virtual ~ParticleMotionParametricComponent() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ParticleMotionParametricComponent() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_20_80::ParticleMotionParametricComponent&
    operator=(::SharedTypes::v1_20_80::ParticleMotionParametricComponent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::HashedString const& $getIdentifier() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
