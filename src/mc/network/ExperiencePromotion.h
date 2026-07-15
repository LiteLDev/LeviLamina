#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExperiencePromotion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk93bed8;
    ::ll::UntypedStorage<8, 32> mUnk320d61;
    ::ll::UntypedStorage<8, 32> mUnk5fb349;
    ::ll::UntypedStorage<8, 32> mUnkf0ee31;
    ::ll::UntypedStorage<4, 4>  mUnkb7f19e;
    ::ll::UntypedStorage<8, 32> mUnk664829;
    ::ll::UntypedStorage<8, 32> mUnkc9b06d;
    ::ll::UntypedStorage<8, 32> mUnkde0c0c;
    ::ll::UntypedStorage<4, 4>  mUnk13fdd6;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ExperiencePromotion& operator=(ExperiencePromotion const&);
    ExperiencePromotion(ExperiencePromotion const&);
    ExperiencePromotion();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ExperiencePromotion& operator=(ExperiencePromotion const&);
    ExperiencePromotion();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ExperiencePromotion(::ExperiencePromotion const&);

    MCNAPI ::ExperiencePromotion& operator=(::ExperiencePromotion&&);

    MCNAPI ~ExperiencePromotion();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ExperiencePromotion const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
