#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/EntityContext.h"

class OwnerStorageEntity {
public:
    // OwnerStorageEntity inner types define
    enum class EmptyInit : int {
        NoValue = 0x0,
    };

    enum class VariadicInit : int {
        NonAmbiguous = 0x0,
    };

    std::optional<EntityContext> mContext;

    template <class Entity, bool IncludeRemoved = false>
    [[nodiscard]] inline Entity* tryUnwrap() {
        if (_hasValue()) {
            return Entity::tryGetFromEntity(_getStackRef(), IncludeRemoved);
        }
        return nullptr;
    }

    [[nodiscard]] inline operator bool() const { return _hasValue(); } // NOLINT

public:
    OwnerStorageEntity& operator=(OwnerStorageEntity const&) = delete;
    OwnerStorageEntity(OwnerStorageEntity const&)            = delete;
    OwnerStorageEntity()                                     = delete;

    // protected:
    // NOLINTBEGIN
    // symbol: ??0OwnerStorageEntity@@IEAA@$$QEAV0@@Z
    MCAPI OwnerStorageEntity(class OwnerStorageEntity&&);

    // symbol: ??0OwnerStorageEntity@@IEAA@W4EmptyInit@0@@Z
    MCAPI explicit OwnerStorageEntity(::OwnerStorageEntity::EmptyInit);

    // symbol: ??0OwnerStorageEntity@@IEAA@W4VariadicInit@0@AEAVEntityRegistry@@@Z
    MCAPI OwnerStorageEntity(::OwnerStorageEntity::VariadicInit, class EntityRegistry&);

    // symbol: ?_getStackRef@OwnerStorageEntity@@IEBAAEAVEntityContext@@XZ
    MCAPI class EntityContext& _getStackRef() const;

    // symbol: ?_hasValue@OwnerStorageEntity@@IEBA_NXZ
    MCAPI bool _hasValue() const;

    // symbol: ?_remake@OwnerStorageEntity@@IEAAXAEAVEntityRegistry@@@Z
    MCAPI void _remake(class EntityRegistry&);

    // symbol: ?_reset@OwnerStorageEntity@@IEAAXXZ
    MCAPI void _reset();

    // symbol: ??4OwnerStorageEntity@@IEAAAEAV0@$$QEAV0@@Z
    MCAPI class OwnerStorageEntity& operator=(class OwnerStorageEntity&&);

    // symbol: ??1OwnerStorageEntity@@IEAA@XZ
    MCAPI ~OwnerStorageEntity();

    // NOLINTEND
};
