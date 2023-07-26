#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WeakStorageFeature {
public:
    // WeakStorageFeature inner types declare
    // clang-format off

    // clang-format on

    // WeakStorageFeature inner types define
    enum class EmptyInit {};

public:
    // prevent constructor by default
    WeakStorageFeature& operator=(WeakStorageFeature const&) = delete;
    WeakStorageFeature(WeakStorageFeature const&)            = delete;
    WeakStorageFeature()                                     = delete;

    // protected:
    /**
     * @symbol ??0WeakStorageFeature\@\@IEAA\@W4EmptyInit\@0\@\@Z
     */
    MCAPI WeakStorageFeature(enum class WeakStorageFeature::EmptyInit); // NOLINT
    /**
     * @symbol ??0WeakStorageFeature\@\@IEAA\@$$QEAV0\@\@Z
     */
    MCAPI WeakStorageFeature(class WeakStorageFeature&&); // NOLINT
    /**
     * @symbol ??0WeakStorageFeature\@\@IEAA\@AEBVOwnerStorageFeature\@\@\@Z
     */
    MCAPI WeakStorageFeature(class OwnerStorageFeature const&); // NOLINT
    /**
     * @symbol ?_isSet\@WeakStorageFeature\@\@IEBA_NXZ
     */
    MCAPI bool _isSet() const; // NOLINT
    /**
     * @symbol ??4WeakStorageFeature\@\@IEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class WeakStorageFeature& operator=(class WeakStorageFeature&&); // NOLINT

protected:
};
