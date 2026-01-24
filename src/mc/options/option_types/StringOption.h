#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

class StringOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                        mValue;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mDefaultValue;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string(::std::string const&)>> mCoerceValueCallback;
    // NOLINTEND

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
    MCAPI_C void set(::std::string const& value, bool saveOptionChange);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector);

    MCAPI void $load(::std::string const& valueString);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
