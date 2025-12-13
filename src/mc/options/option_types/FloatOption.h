#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

class FloatOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk160d4d;
    ::ll::UntypedStorage<4, 4> mUnkbffafd;
    ::ll::UntypedStorage<4, 4> mUnk2054f2;
    ::ll::UntypedStorage<4, 4> mUnkb0d644;
    ::ll::UntypedStorage<4, 4> mUnk565d6e;
    // NOLINTEND

public:
    // prevent constructor by default
    FloatOption& operator=(FloatOption const&);
    FloatOption(FloatOption const&);
    FloatOption();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector) /*override*/;

    virtual void load(::std::string const& valueString) /*override*/;

#ifdef LL_PLAT_S
    virtual ~FloatOption() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~FloatOption() /*override*/;
#endif

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector);

    MCNAPI void $load(::std::string const& valueString);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
