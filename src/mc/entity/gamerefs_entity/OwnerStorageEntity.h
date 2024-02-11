#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OwnerStorageEntity {
public:
    // prevent constructor by default
    OwnerStorageEntity& operator=(OwnerStorageEntity const&);
    OwnerStorageEntity(OwnerStorageEntity const&);

    // protected:
    // NOLINTBEGIN
    // symbol: ??0OwnerStorageEntity@@IEAA@XZ
    MCAPI OwnerStorageEntity();

    // symbol: ??0OwnerStorageEntity@@IEAA@AEAVEntityRegistry@@@Z
    MCAPI explicit OwnerStorageEntity(class EntityRegistry&);

    // symbol: ??0OwnerStorageEntity@@IEAA@$$QEAV0@@Z
    MCAPI OwnerStorageEntity(class OwnerStorageEntity&& other);

    // symbol: ?_getStackRef@OwnerStorageEntity@@IEBAAEAVEntityContext@@XZ
    MCAPI class EntityContext& _getStackRef() const;

    // symbol: ?_hasValue@OwnerStorageEntity@@IEBA_NXZ
    MCAPI bool _hasValue() const;

    // symbol: ?_reset@OwnerStorageEntity@@IEAAXXZ
    MCAPI void _reset();

    // symbol: ??4OwnerStorageEntity@@IEAAAEAV0@$$QEAV0@@Z
    MCAPI class OwnerStorageEntity& operator=(class OwnerStorageEntity&& other);

    // symbol: ??1OwnerStorageEntity@@IEAA@XZ
    MCAPI ~OwnerStorageEntity();

    // NOLINTEND
};
