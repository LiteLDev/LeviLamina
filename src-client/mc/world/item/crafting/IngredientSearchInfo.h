#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct SlotData;
// clang-format on

struct IngredientSearchInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SlotData>> mSlots;
    ::ll::TypedStorage<4, 4, int>                        mCount;
    // NOLINTEND

public:
    // prevent constructor by default
    IngredientSearchInfo& operator=(IngredientSearchInfo const&);
    IngredientSearchInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IngredientSearchInfo(::IngredientSearchInfo const&);

    MCAPI ~IngredientSearchInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IngredientSearchInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
