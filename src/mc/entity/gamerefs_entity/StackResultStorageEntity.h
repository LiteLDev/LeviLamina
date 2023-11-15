#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/EntityContext.h"

class StackResultStorageEntity {
public:
    std::optional<EntityContext> mContext;

    template <class Entity, bool IncludeRemoved = false>
    [[nodiscard]] inline Entity* tryUnwrap() {
        if (_hasValue()) { return Entity::tryGetFromEntity(_getStackRef(), IncludeRemoved); }
        return nullptr;
    }

    [[nodiscard]] inline operator bool() const { return _hasValue(); } // NOLINT
public:
    StackResultStorageEntity& operator=(StackResultStorageEntity const&) = delete;
    StackResultStorageEntity(StackResultStorageEntity const&)            = delete;
    StackResultStorageEntity()                                           = delete;

    // protected:
    // NOLINTBEGIN
    // symbol: ??0StackResultStorageEntity@@IEAA@AEBVOwnerStorageEntity@@@Z
    MCAPI explicit StackResultStorageEntity(class OwnerStorageEntity const&);

    // symbol: ??0StackResultStorageEntity@@IEAA@$$QEAV0@@Z
    MCAPI StackResultStorageEntity(class StackResultStorageEntity&&);

    // symbol: ??0StackResultStorageEntity@@IEAA@AEBVWeakStorageEntity@@@Z
    MCAPI explicit StackResultStorageEntity(class WeakStorageEntity const&);

    // symbol: ?_getStackRef@StackResultStorageEntity@@IEBAAEAVEntityContext@@XZ
    MCAPI class EntityContext& _getStackRef() const;

    // symbol: ?_hasValue@StackResultStorageEntity@@IEBA_NXZ
    MCAPI bool _hasValue() const;

    // NOLINTEND
};
