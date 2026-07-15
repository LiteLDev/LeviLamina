#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEmitterDirection.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace SharedTypes::v1_20_80 {

struct EmitterShapeEntityAABBComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::std::optional<::SharedTypes::v1_20_80::ParticleEmitterDirection>> mDirection;
    ::ll::TypedStorage<1, 1, bool>                                                                 mSurfaceOnly;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HashedString const& getIdentifier() const /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString const& NameID();
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
