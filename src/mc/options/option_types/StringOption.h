#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

class StringOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbd0c8a;
    ::ll::UntypedStorage<8, 32> mUnk338bfd;
    ::ll::UntypedStorage<8, 64> mUnke8bd90;
    // NOLINTEND

public:
    // prevent constructor by default
    StringOption& operator=(StringOption const&);
    StringOption(StringOption const&);
    StringOption();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector) /*override*/;

    virtual void load(::std::string const& valueString) /*override*/;

    virtual ~StringOption() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void set(::std::string const& value, bool saveOptionChange);
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
