#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace SharedTypes::v1_20_80 {

struct EmitterShapeCustomComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::std::array<::SharedTypes::Legacy::ExpressionNode, 3>> mOffsetExpr;
    ::ll::TypedStorage<8, 144, ::std::array<::SharedTypes::Legacy::ExpressionNode, 3>> mDirectionExpr;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    EmitterShapeCustomComponent& operator=(EmitterShapeCustomComponent const&);
    EmitterShapeCustomComponent();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HashedString const& getIdentifier() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI EmitterShapeCustomComponent(::SharedTypes::v1_20_80::EmitterShapeCustomComponent&&);

    MCAPI EmitterShapeCustomComponent(::SharedTypes::v1_20_80::EmitterShapeCustomComponent const&);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::SharedTypes::v1_20_80::EmitterShapeCustomComponent&&);

    MCAPI void* $ctor(::SharedTypes::v1_20_80::EmitterShapeCustomComponent const&);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::HashedString const& $getIdentifier() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
