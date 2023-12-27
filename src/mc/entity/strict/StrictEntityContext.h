#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/EntityContext.h"

class StrictEntityContext {
public:
    EntityId mEntity;     // this+0x0
    uint     mRegistryId; // this+0x4

    // prevent constructor by default
    StrictEntityContext& operator=(StrictEntityContext const&);
    StrictEntityContext(StrictEntityContext const&);

public:
    // NOLINTBEGIN
    // symbol: ??0StrictEntityContext@@QEAA@XZ
    MCAPI StrictEntityContext();

    // symbol: ??0StrictEntityContext@@QEAA@AEBVEntityContext@@@Z
    MCAPI explicit StrictEntityContext(class EntityContext const&);

    // symbol: ??0StrictEntityContext@@QEAA@$$QEAV0@@Z
    MCAPI StrictEntityContext(class StrictEntityContext&&);

    // symbol: ??0StrictEntityContext@@QEAA@AEAVEntityRegistry@@VEntityId@@@Z
    MCAPI StrictEntityContext(class EntityRegistry&, class EntityId);

    // symbol: ?isNull@StrictEntityContext@@QEBA_NXZ
    MCAPI bool isNull() const;

    // symbol: ??9StrictEntityContext@@QEBA_NAEBV0@@Z
    MCAPI bool operator!=(class StrictEntityContext const&) const;

    // symbol: ??4StrictEntityContext@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class StrictEntityContext& operator=(class StrictEntityContext&&);

    // symbol: ??8StrictEntityContext@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class StrictEntityContext const&) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getEntityId@StrictEntityContext@@IEBA?AVEntityId@@XZ
    MCAPI class EntityId _getEntityId() const;

    // symbol: ?_getRegistryId@StrictEntityContext@@IEBAIXZ
    MCAPI uint _getRegistryId() const;

    // NOLINTEND
};
