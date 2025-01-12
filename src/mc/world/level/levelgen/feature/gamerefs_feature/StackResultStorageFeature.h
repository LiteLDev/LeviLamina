#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FeatureRegistry;
class IFeature;
class WeakStorageFeature;
// clang-format on

class StackResultStorageFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::optional<::std::reference_wrapper<::FeatureRegistry>>> mRegistry;
    ::ll::TypedStorage<8, 8, uint64>                                                        mIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StackResultStorageFeature(::WeakStorageFeature const& weakStorage);

    MCAPI ::IFeature& _getStackRef() const;

    MCFOLD bool _hasValue() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WeakStorageFeature const& weakStorage);
    // NOLINTEND
};
