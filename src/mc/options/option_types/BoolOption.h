#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

class BoolOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk2714f6;
    ::ll::UntypedStorage<1, 1>  mUnk7dc59c;
    ::ll::UntypedStorage<8, 64> mUnkaaf000;
    // NOLINTEND

public:
    // prevent constructor by default
    BoolOption& operator=(BoolOption const&);
    BoolOption(BoolOption const&);
    BoolOption();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector) /*override*/;

    virtual void load(::std::string const& valueString) /*override*/;

#ifdef LL_PLAT_S
    virtual ~BoolOption() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~BoolOption() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void set(bool v, bool saveOptionChange);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector);

    MCNAPI void $load(::std::string const& valueString);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
