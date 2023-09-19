#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityContextBase {
public:
    // prevent constructor by default
    EntityContextBase& operator=(EntityContextBase const&);
    EntityContextBase(EntityContextBase const&);
    EntityContextBase();

public:
    // NOLINTBEGIN
    // symbol: ??0EntityContextBase@@QEAA@AEAVEntityRegistryBase@@VEntityId@@@Z
    MCAPI EntityContextBase(class EntityRegistryBase&, class EntityId);

    // symbol: ?isValid@EntityContextBase@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ??8EntityContextBase@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class EntityContextBase const&) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getEntityId@EntityContextBase@@IEBA?AVEntityId@@XZ
    MCAPI class EntityId _getEntityId() const;

    // symbol: ?_getRegistryId@EntityContextBase@@IEBAIXZ
    MCAPI uint _getRegistryId() const;

    // NOLINTEND
};
