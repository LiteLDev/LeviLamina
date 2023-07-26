#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StackResultStorageFeature {

public:
    // prevent constructor by default
    StackResultStorageFeature& operator=(StackResultStorageFeature const&) = delete;
    StackResultStorageFeature(StackResultStorageFeature const&)            = delete;
    StackResultStorageFeature()                                            = delete;

    // protected:
    /**
     * @symbol ??0StackResultStorageFeature\@\@IEAA\@AEBVWeakStorageFeature\@\@\@Z
     */
    MCAPI StackResultStorageFeature(class WeakStorageFeature const&); // NOLINT
    /**
     * @symbol ?_getStackRef\@StackResultStorageFeature\@\@IEBAAEAVIFeature\@\@XZ
     */
    MCAPI class IFeature& _getStackRef() const; // NOLINT
    /**
     * @symbol ?_hasValue\@StackResultStorageFeature\@\@IEBA_NXZ
     */
    MCAPI bool _hasValue() const; // NOLINT

protected:
};
