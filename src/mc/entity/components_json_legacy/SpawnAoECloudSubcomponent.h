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

class SpawnAoECloudSubcomponent : public ::OnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke7e606;
    ::ll::UntypedStorage<4, 4>  mUnkf1a6ae;
    ::ll::UntypedStorage<4, 4>  mUnk85c000;
    ::ll::UntypedStorage<4, 4>  mUnk3d3a04;
    ::ll::UntypedStorage<4, 4>  mUnk85af42;
    ::ll::UntypedStorage<4, 4>  mUnk392b11;
    ::ll::UntypedStorage<4, 16> mUnk644b1c;
    ::ll::UntypedStorage<1, 1>  mUnkd7fc0f;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnAoECloudSubcomponent& operator=(SpawnAoECloudSubcomponent const&);
    SpawnAoECloudSubcomponent(SpawnAoECloudSubcomponent const&);
    SpawnAoECloudSubcomponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SpawnAoECloudSubcomponent() /*override*/ = default;

    virtual void readfromJSON(::Json::Value& component) /*override*/;

    virtual void writetoJSON(::Json::Value& component) const /*override*/;

    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent&) /*override*/;

    virtual char const* getName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $readfromJSON(::Json::Value& component);

    MCAPI void $writetoJSON(::Json::Value& component) const;

    MCAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent&);

    MCAPI char const* $getName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
