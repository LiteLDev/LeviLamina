#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StackResultStorageEntity {
public:
    // prevent constructor by default
    StackResultStorageEntity& operator=(StackResultStorageEntity const&);
    StackResultStorageEntity(StackResultStorageEntity const&);
    StackResultStorageEntity();

    // protected:
    // NOLINTBEGIN
    // symbol: ??0StackResultStorageEntity@@IEAA@AEBVWeakStorageEntity@@@Z
    MCAPI explicit StackResultStorageEntity(class WeakStorageEntity const&);

    // symbol: ??0StackResultStorageEntity@@IEAA@$$QEAV0@@Z
    MCAPI StackResultStorageEntity(class StackResultStorageEntity&&);

    // symbol: ??0StackResultStorageEntity@@IEAA@AEBVOwnerStorageEntity@@@Z
    MCAPI explicit StackResultStorageEntity(class OwnerStorageEntity const&);

    // symbol: ?_getStackRef@StackResultStorageEntity@@IEBAAEAVEntityContext@@XZ
    MCAPI class EntityContext& _getStackRef() const;

    // symbol: ?_hasValue@StackResultStorageEntity@@IEBA_NXZ
    MCAPI bool _hasValue() const;

    // NOLINTEND
};
