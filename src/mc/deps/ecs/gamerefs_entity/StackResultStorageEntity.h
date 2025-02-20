#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class WeakStorageEntity;
// clang-format on

class StackResultStorageEntity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::optional<::EntityContext>> mContext;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StackResultStorageEntity(::WeakStorageEntity const& weakStorage);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WeakStorageEntity const& weakStorage);
    // NOLINTEND
};
