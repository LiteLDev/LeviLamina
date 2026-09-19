#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_50/actor/ProjectileOnHitSubcomponent.h"

namespace SharedTypes::v1_26_50 {

struct FreezeOnHitSubcomponentDefinition : public ::SharedTypes::v1_26_50::ProjectileOnHitSubcomponent {
public:
    // FreezeOnHitSubcomponentDefinition inner types define
    enum class Shape : uchar {
        Cube   = 0,
        Sphere = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_50::FreezeOnHitSubcomponentDefinition::Shape> mShape;
    ::ll::TypedStorage<4, 4, float>                                                             mSize;
    ::ll::TypedStorage<1, 1, bool>                                                              mSnapToBlock;
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
