#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleLifetimeExpressionComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnkc0a3f4;
    ::ll::UntypedStorage<8, 48> mUnk33258d;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleLifetimeExpressionComponent(ParticleLifetimeExpressionComponent const&);
    ParticleLifetimeExpressionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HashedString const& getIdentifier() const /*override*/;

    virtual ~ParticleLifetimeExpressionComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_20_80::ParticleLifetimeExpressionComponent&
    operator=(::SharedTypes::v1_20_80::ParticleLifetimeExpressionComponent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::HashedString const& $getIdentifier() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
