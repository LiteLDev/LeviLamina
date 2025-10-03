#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class FreezeOnHitSubcomponent : public ::OnHitSubcomponent {
public:
    // FreezeOnHitSubcomponent inner types define
    enum class Shape : uchar {
        Cube   = 0,
        Sphere = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkd762c3;
    ::ll::UntypedStorage<4, 4> mUnk86fc2a;
    ::ll::UntypedStorage<1, 1> mUnk52c775;
    // NOLINTEND

public:
    // prevent constructor by default
    FreezeOnHitSubcomponent& operator=(FreezeOnHitSubcomponent const&);
    FreezeOnHitSubcomponent(FreezeOnHitSubcomponent const&);
    FreezeOnHitSubcomponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void readfromJSON(::Json::Value& component) /*override*/;

    // vIndex: 2
    virtual void writetoJSON(::Json::Value& component) const /*override*/;

    // vIndex: 3
    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) /*override*/;

    // vIndex: 4
    virtual char const* getName() /*override*/;

    // vIndex: 0
    virtual ~FreezeOnHitSubcomponent() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $readfromJSON(::Json::Value& component);

    MCNAPI void $writetoJSON(::Json::Value& component) const;

    MCNAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent& component);

    MCNAPI char const* $getName();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
