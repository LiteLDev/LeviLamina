#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SpawnAoECloudSubcomponent : public ::OnHitSubcomponent {
public:
    // prevent constructor by default
    SpawnAoECloudSubcomponent& operator=(SpawnAoECloudSubcomponent const&);
    SpawnAoECloudSubcomponent(SpawnAoECloudSubcomponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpawnAoECloudSubcomponent() = default;

    // vIndex: 1
    virtual void readfromJSON(class Json::Value& component, class SemVersion const& engineVersion);

    // vIndex: 2
    virtual void writetoJSON(class Json::Value& component) const;

    // vIndex: 3
    virtual void doOnHitEffect(class Actor& owner, class ProjectileComponent&);

    // vIndex: 4
    virtual char const* getName();

    MCAPI SpawnAoECloudSubcomponent();

    // NOLINTEND
};
