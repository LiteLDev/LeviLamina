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

struct EmitterShapeBoxComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mUnke60fc6;
    ::ll::UntypedStorage<8, 144> mUnk51dca2;
    ::ll::UntypedStorage<1, 1>   mUnk663262;
    ::ll::UntypedStorage<8, 168> mUnk60b9b1;
    // NOLINTEND

public:
    // prevent constructor by default
    EmitterShapeBoxComponent& operator=(EmitterShapeBoxComponent const&);
    EmitterShapeBoxComponent(EmitterShapeBoxComponent const&);
    EmitterShapeBoxComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HashedString const& getIdentifier() const /*override*/;

    virtual ~EmitterShapeBoxComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EmitterShapeBoxComponent(::SharedTypes::v1_20_80::EmitterShapeBoxComponent&&);
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
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::EmitterShapeBoxComponent&&);
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
