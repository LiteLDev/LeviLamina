#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PropertyGroupManager {
public:
    // prevent constructor by default
    PropertyGroupManager& operator=(PropertyGroupManager const&);
    PropertyGroupManager(PropertyGroupManager const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PropertyGroupManager@@QEAA@XZ
    MCAPI PropertyGroupManager();

    // symbol: ?getActorPropertyDataTag@PropertyGroupManager@@QEBA?AVCompoundTag@@AEBVHashedString@@@Z
    MCAPI class CompoundTag getActorPropertyDataTag(class HashedString const&) const;

    // symbol:
    // ?getAllPropertyGroups@PropertyGroupManager@@QEBAAEBV?$unordered_map@VHashedString@@V?$shared_ptr@$$CBVPropertyGroup@@@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$shared_ptr@$$CBVPropertyGroup@@@std@@@std@@@3@@std@@XZ
    MCAPI std::unordered_map<class HashedString, std::shared_ptr<class PropertyGroup const>> const&
          getAllPropertyGroups() const;

    // symbol: ?registerGroup@PropertyGroupManager@@QEAAXAEBVHashedString@@V?$shared_ptr@$$CBVPropertyGroup@@@std@@@Z
    MCAPI void registerGroup(class HashedString const& id, std::shared_ptr<class PropertyGroup const> group);

    // symbol: ?tryInitPropertiesOnActor@PropertyGroupManager@@QEBAXAEAVActor@@@Z
    MCAPI void tryInitPropertiesOnActor(class Actor& actor) const;

    // symbol: ??1PropertyGroupManager@@QEAA@XZ
    MCAPI ~PropertyGroupManager();

    // NOLINTEND
};
