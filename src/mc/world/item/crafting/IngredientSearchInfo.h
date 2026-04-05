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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    IngredientSearchInfo& operator=(IngredientSearchInfo const&);
    IngredientSearchInfo();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI IngredientSearchInfo(::IngredientSearchInfo const&);
#endif

    MCAPI ~IngredientSearchInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::IngredientSearchInfo const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
