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

struct EmitterShapeSphereComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mUnk5d02bb;
    ::ll::UntypedStorage<8, 48>  mUnk6c8b56;
    ::ll::UntypedStorage<1, 1>   mUnk48f640;
    ::ll::UntypedStorage<8, 168> mUnk7e8e4c;
    // NOLINTEND

public:
    // prevent constructor by default
    EmitterShapeSphereComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::HashedString const& getIdentifier() const /*override*/;

    // vIndex: 0
    virtual ~EmitterShapeSphereComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EmitterShapeSphereComponent(::SharedTypes::v1_20_80::EmitterShapeSphereComponent const&);

    MCNAPI EmitterShapeSphereComponent(::SharedTypes::v1_20_80::EmitterShapeSphereComponent&&);

    MCNAPI ::SharedTypes::v1_20_80::EmitterShapeSphereComponent&
    operator=(::SharedTypes::v1_20_80::EmitterShapeSphereComponent&&);

    MCNAPI ::SharedTypes::v1_20_80::EmitterShapeSphereComponent&
    operator=(::SharedTypes::v1_20_80::EmitterShapeSphereComponent const&);
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
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::EmitterShapeSphereComponent const&);

    MCNAPI void* $ctor(::SharedTypes::v1_20_80::EmitterShapeSphereComponent&&);
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
