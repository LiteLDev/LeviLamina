#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OwnerStorageEntity {
public:
    // OwnerStorageEntity inner types declare
    // clang-format off

    // clang-format on

    // OwnerStorageEntity inner types define
    enum class EmptyInit {};

    enum class VariadicInit {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OWNERSTORAGEENTITY
public:
    OwnerStorageEntity& operator=(OwnerStorageEntity const&) = delete;
    OwnerStorageEntity(OwnerStorageEntity const&)            = delete;
    OwnerStorageEntity()                                     = delete;
#endif

public:
    // protected:
    /**
     * @symbol ??0OwnerStorageEntity\@\@IEAA\@W4VariadicInit\@0\@AEAVEntityRegistry\@\@\@Z
     */
    MCAPI OwnerStorageEntity(enum class OwnerStorageEntity::VariadicInit, class EntityRegistry&);
    /**
     * @symbol ??0OwnerStorageEntity\@\@IEAA\@$$QEAV0\@\@Z
     */
    MCAPI OwnerStorageEntity(class OwnerStorageEntity&&);
    /**
     * @symbol ??0OwnerStorageEntity\@\@IEAA\@W4EmptyInit\@0\@\@Z
     */
    MCAPI OwnerStorageEntity(enum class OwnerStorageEntity::EmptyInit);
    /**
     * @symbol ?_getStackRef\@OwnerStorageEntity\@\@IEBAAEAVEntityContext\@\@XZ
     */
    MCAPI class EntityContext& _getStackRef() const;
    /**
     * @symbol ?_hasValue\@OwnerStorageEntity\@\@IEBA_NXZ
     */
    MCAPI bool _hasValue() const;
    /**
     * @symbol ?_remake\@OwnerStorageEntity\@\@IEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void _remake(class EntityRegistry&);
    /**
     * @symbol ?_reset\@OwnerStorageEntity\@\@IEAAXXZ
     */
    MCAPI void _reset();
    /**
     * @symbol ??4OwnerStorageEntity\@\@IEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class OwnerStorageEntity& operator=(class OwnerStorageEntity&&);
    /**
     * @symbol ??1OwnerStorageEntity\@\@IEAA\@XZ
     */
    MCAPI ~OwnerStorageEntity();

protected:
};
