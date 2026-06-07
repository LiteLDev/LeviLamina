#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct IHitResultContainer;
// clang-format on

class HitResultComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IHitResultContainer>> mHitResults;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    HitResultComponent();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit HitResultComponent(::std::unique_ptr<::IHitResultContainer> container);

    MCFOLD ::IHitResultContainer& get();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void* $ctor(::std::unique_ptr<::IHitResultContainer> container);
#endif
    // NOLINTEND
};
