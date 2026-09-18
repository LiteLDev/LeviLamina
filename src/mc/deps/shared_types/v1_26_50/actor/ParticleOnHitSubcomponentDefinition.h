#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/shared_types/v1_26_50/actor/ProjectileOnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_20 { struct FilterGroupData; }
// clang-format on

namespace SharedTypes::v1_26_50 {

struct ParticleOnHitSubcomponentDefinition : public ::SharedTypes::v1_26_50::ProjectileOnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        72,
        ::std::optional<::std::unordered_map<::std::string, ::SharedTypes::v1_21_20::FilterGroupData>>>
                                             mParticleItemName;
    ::ll::TypedStorage<4, 4, ::ParticleType> mParticleType;
    ::ll::TypedStorage<4, 4, int>            mNumParticles;
    ::ll::TypedStorage<1, 1, bool>           mOnEntityHit;
    ::ll::TypedStorage<1, 1, bool>           mOnOtherHit;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view const getName() const /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string_view const $getName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
