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
    // prevent constructor by default
    StackResultStorageFeature& operator=(StackResultStorageFeature const&);
    StackResultStorageFeature(StackResultStorageFeature const&);
    StackResultStorageFeature();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StackResultStorageFeature(::StackResultStorageFeature&& other);

    MCAPI explicit StackResultStorageFeature(::WeakStorageFeature const& weakStorage);

    MCFOLD ::IFeature& _getStackRef() const;

    MCFOLD bool _hasValue() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::StackResultStorageFeature&& other);

    MCAPI void* $ctor(::WeakStorageFeature const& weakStorage);
    // NOLINTEND
};
