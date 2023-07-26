#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OwnerStorageFeature {
public:
    // OwnerStorageFeature inner types declare
    // clang-format off

    // clang-format on

    // OwnerStorageFeature inner types define
    enum class VariadicInit {};

public:
    // prevent constructor by default
    OwnerStorageFeature& operator=(OwnerStorageFeature const&) = delete;
    OwnerStorageFeature(OwnerStorageFeature const&)            = delete;
    OwnerStorageFeature()                                      = delete;

    // protected:
    /**
     * @symbol ??0OwnerStorageFeature\@\@IEAA\@W4VariadicInit\@0\@AEAVFeatureRegistry\@\@\@Z
     */
    MCAPI OwnerStorageFeature(enum class OwnerStorageFeature::VariadicInit, class FeatureRegistry&); // NOLINT
    /**
     * @symbol ??0OwnerStorageFeature\@\@IEAA\@$$QEAV0\@\@Z
     */
    MCAPI OwnerStorageFeature(class OwnerStorageFeature&&); // NOLINT
    /**
     * @symbol ?_getStackRef\@OwnerStorageFeature\@\@IEBAAEAVIFeature\@\@XZ
     */
    MCAPI class IFeature& _getStackRef() const; // NOLINT
    /**
     * @symbol ?_hasValue\@OwnerStorageFeature\@\@IEBA_NXZ
     */
    MCAPI bool _hasValue() const; // NOLINT
    /**
     * @symbol ??1OwnerStorageFeature\@\@IEAA\@XZ
     */
    MCAPI ~OwnerStorageFeature(); // NOLINT

protected:
};
