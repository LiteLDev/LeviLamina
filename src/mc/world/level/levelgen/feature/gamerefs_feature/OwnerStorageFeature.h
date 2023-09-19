#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OwnerStorageFeature {
public:
    // OwnerStorageFeature inner types define
    enum class VariadicInit {};

public:
    // prevent constructor by default
    OwnerStorageFeature& operator=(OwnerStorageFeature const&);
    OwnerStorageFeature(OwnerStorageFeature const&);
    OwnerStorageFeature();

    // protected:
    // NOLINTBEGIN
    // symbol: ??0OwnerStorageFeature@@IEAA@W4VariadicInit@0@AEAVFeatureRegistry@@@Z
    MCAPI OwnerStorageFeature(::OwnerStorageFeature::VariadicInit, class FeatureRegistry&);

    // symbol: ??0OwnerStorageFeature@@IEAA@$$QEAV0@@Z
    MCAPI OwnerStorageFeature(class OwnerStorageFeature&&);

    // symbol: ?_getStackRef@OwnerStorageFeature@@IEBAAEAVIFeature@@XZ
    MCAPI class IFeature& _getStackRef() const;

    // symbol: ?_hasValue@OwnerStorageFeature@@IEBA_NXZ
    MCAPI bool _hasValue() const;

    // symbol: ??1OwnerStorageFeature@@IEAA@XZ
    MCAPI ~OwnerStorageFeature();

    // NOLINTEND
};
