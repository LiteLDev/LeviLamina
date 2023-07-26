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

public:
    // prevent constructor by default
    WeakStorageEntity& operator=(WeakStorageEntity const&) = delete;
    WeakStorageEntity(WeakStorageEntity const&)            = delete;
    WeakStorageEntity()                                    = delete;

public:
    /**
     * @symbol ??8WeakStorageEntity\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class WeakStorageEntity const&) const; // NOLINT

    // protected:
    /**
     * @symbol ??0WeakStorageEntity\@\@IEAA\@AEBVStackResultStorageEntity\@\@\@Z
     */
    MCAPI WeakStorageEntity(class StackResultStorageEntity const&); // NOLINT
    /**
     * @symbol ??0WeakStorageEntity\@\@IEAA\@AEBVOwnerStorageEntity\@\@\@Z
     */
    MCAPI WeakStorageEntity(class OwnerStorageEntity const&); // NOLINT
    /**
     * @symbol ??0WeakStorageEntity\@\@IEAA\@W4VariadicInit\@0\@AEBVEntityContext\@\@\@Z
     */
    MCAPI WeakStorageEntity(enum class WeakStorageEntity::VariadicInit, class EntityContext const&); // NOLINT
    /**
     * @symbol ??0WeakStorageEntity\@\@IEAA\@W4EmptyInit\@0\@\@Z
     */
    MCAPI WeakStorageEntity(enum class WeakStorageEntity::EmptyInit); // NOLINT
    /**
     * @symbol ?_isSet\@WeakStorageEntity\@\@IEBA_NXZ
     */
    MCAPI bool _isSet() const; // NOLINT
    /**
     * @symbol ?_reset\@WeakStorageEntity\@\@IEAAXXZ
     */
    MCAPI void _reset(); // NOLINT

protected:
};
