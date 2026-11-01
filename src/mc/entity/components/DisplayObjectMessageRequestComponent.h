#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DisplayObjectMessageRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mLocalizableText;
    ::ll::TypedStorage<8, 32, ::std::string> mColor;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    DisplayObjectMessageRequestComponent& operator=(DisplayObjectMessageRequestComponent const&);
    DisplayObjectMessageRequestComponent();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI DisplayObjectMessageRequestComponent(::DisplayObjectMessageRequestComponent const&);

    MCNAPI ::DisplayObjectMessageRequestComponent& operator=(::DisplayObjectMessageRequestComponent&&);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::DisplayObjectMessageRequestComponent const&);
#endif
    // NOLINTEND
};
