#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OwnerStorageFeature {
public:
    // OwnerStorageFeature inner types declare
    // clang-format off

    // clang-format on

    // OwnerStorageFeature inner types define
    enum class VariadicInit {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OWNERSTORAGEFEATURE
public:
    OwnerStorageFeature& operator=(OwnerStorageFeature const&) = delete;
    OwnerStorageFeature(OwnerStorageFeature const&)            = delete;
    OwnerStorageFeature()                                      = delete;
#endif

public:
    // protected:
    /**
     * @symbol ??0OwnerStorageFeature\@\@IEAA\@W4VariadicInit\@0\@AEAVFeatureRegistry\@\@\@Z
     */
    MCAPI OwnerStorageFeature(enum class OwnerStorageFeature::VariadicInit, class FeatureRegistry&);
    /**
     * @symbol ??0OwnerStorageFeature\@\@IEAA\@$$QEAV0\@\@Z
     */
    MCAPI OwnerStorageFeature(class OwnerStorageFeature&&);
    /**
     * @symbol ?_getStackRef\@OwnerStorageFeature\@\@IEBAAEAVIFeature\@\@XZ
     */
    MCAPI class IFeature& _getStackRef() const;
    /**
     * @symbol ?_hasValue\@OwnerStorageFeature\@\@IEBA_NXZ
     */
    MCAPI bool _hasValue() const;
    /**
     * @symbol ??1OwnerStorageFeature\@\@IEAA\@XZ
     */
    MCAPI ~OwnerStorageFeature();

protected:
};
