#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/gamerefs_entity/EntityRefTraits.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRef.h"

class WeakEntityRef : public ::WeakRef<EntityContext> {
public:
    // prevent constructor by default
    WeakEntityRef& operator=(WeakEntityRef const&);
    WeakEntityRef(WeakEntityRef const&);
    WeakEntityRef();

public:
    // NOLINTBEGIN
    // symbol: ??0WeakEntityRef@@QEAA@V?$WeakRef@VEntityContext@@@@@Z
    MCAPI explicit WeakEntityRef(class WeakRef<class EntityContext>);

    // symbol: ??9WeakEntityRef@@QEBA_NV0@@Z
    MCAPI bool operator!=(class WeakEntityRef entityRef) const;

    // symbol: ??4WeakEntityRef@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class WeakEntityRef& operator=(class WeakEntityRef&&);

    // symbol: ??8WeakEntityRef@@QEBA_NV0@@Z
    MCAPI bool operator==(class WeakEntityRef entityRef) const;

    // symbol: ??8WeakEntityRef@@QEBA_NV?$WeakRef@VEntityContext@@@@@Z
    MCAPI bool operator==(class WeakRef<class EntityContext>) const;

    // symbol: ??1WeakEntityRef@@QEAA@XZ
    MCAPI ~WeakEntityRef();

    // NOLINTEND
};
