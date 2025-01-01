#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FeatureRegistry;
// clang-format on

class WeakStorageFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::optional<::std::reference_wrapper<::FeatureRegistry>>> mRegistry;
    ::ll::TypedStorage<8, 8, uint64>                                                        mIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WeakStorageFeature();

    MCAPI WeakStorageFeature(::WeakStorageFeature&& other);

    MCAPI ::WeakStorageFeature& operator=(::WeakStorageFeature&& other);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::WeakStorageFeature&& other);
    // NOLINTEND
};
