#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FeatureRegistry;
class IFeature;
// clang-format on

class OwnerStorageFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::optional<::std::reference_wrapper<::FeatureRegistry>>> mRegistry;
    ::ll::TypedStorage<8, 8, uint64>                                                        mIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnerStorageFeature& operator=(OwnerStorageFeature const&);
    OwnerStorageFeature(OwnerStorageFeature const&);
    OwnerStorageFeature();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OwnerStorageFeature(::OwnerStorageFeature&& other);

    MCAPI explicit OwnerStorageFeature(::FeatureRegistry& registry);

    MCFOLD ::IFeature& _getStackRef() const;

    MCAPI bool _hasValue() const;

    MCAPI ~OwnerStorageFeature();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OwnerStorageFeature&& other);

    MCAPI void* $ctor(::FeatureRegistry& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
