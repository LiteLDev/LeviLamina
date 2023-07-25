#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WeakStorageEntity {
public:
    // WeakStorageEntity inner types declare
    // clang-format off

    // clang-format on

    // WeakStorageEntity inner types define
    enum class EmptyInit {};

    enum class VariadicInit {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAKSTORAGEENTITY
public:
    WeakStorageEntity& operator=(WeakStorageEntity const&) = delete;
    WeakStorageEntity(WeakStorageEntity const&)            = delete;
    WeakStorageEntity()                                    = delete;
#endif

public:
    /**
     * @symbol ??8WeakStorageEntity\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class WeakStorageEntity const&) const;

    // protected:
    /**
     * @symbol ??0WeakStorageEntity\@\@IEAA\@AEBVStackResultStorageEntity\@\@\@Z
     */
    MCAPI WeakStorageEntity(class StackResultStorageEntity const&);
    /**
     * @symbol ??0WeakStorageEntity\@\@IEAA\@AEBVOwnerStorageEntity\@\@\@Z
     */
    MCAPI WeakStorageEntity(class OwnerStorageEntity const&);
    /**
     * @symbol ??0WeakStorageEntity\@\@IEAA\@W4VariadicInit\@0\@AEBVEntityContext\@\@\@Z
     */
    MCAPI WeakStorageEntity(enum class WeakStorageEntity::VariadicInit, class EntityContext const&);
    /**
     * @symbol ??0WeakStorageEntity\@\@IEAA\@W4EmptyInit\@0\@\@Z
     */
    MCAPI WeakStorageEntity(enum class WeakStorageEntity::EmptyInit);
    /**
     * @symbol ?_isSet\@WeakStorageEntity\@\@IEBA_NXZ
     */
    MCAPI bool _isSet() const;
    /**
     * @symbol ?_reset\@WeakStorageEntity\@\@IEAAXXZ
     */
    MCAPI void _reset();

protected:
};
