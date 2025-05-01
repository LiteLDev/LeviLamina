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

struct ParticleMotionCollisionComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk14c1ac;
    ::ll::UntypedStorage<4, 4>  mUnk265bfe;
    ::ll::UntypedStorage<4, 4>  mUnk92daee;
    ::ll::UntypedStorage<4, 4>  mUnkf972d4;
    ::ll::UntypedStorage<1, 1>  mUnk7508e5;
    ::ll::UntypedStorage<8, 32> mUnk86681f;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleMotionCollisionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::HashedString const& getIdentifier() const /*override*/;

    // vIndex: 0
    virtual ~ParticleMotionCollisionComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleMotionCollisionComponent(::SharedTypes::v1_20_80::ParticleMotionCollisionComponent const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleMotionCollisionComponent&
    operator=(::SharedTypes::v1_20_80::ParticleMotionCollisionComponent const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleMotionCollisionComponent&
    operator=(::SharedTypes::v1_20_80::ParticleMotionCollisionComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleMotionCollisionComponent const&);
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
