#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEditionProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf61746;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEditionProperties& operator=(GameEditionProperties const&);
    GameEditionProperties(GameEditionProperties const&);
    GameEditionProperties();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit GameEditionProperties(::std::string_view edition);

    MCNAPI bool isConsoleEdition() const;

    MCNAPI bool isIosEducationEdition() const;

    MCNAPI bool isPocketEdition() const;

    MCNAPI ~GameEditionProperties();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::string_view edition);
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
