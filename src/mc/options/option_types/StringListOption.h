#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"

class StringListOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mValue;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mDefaultValue;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    StringListOption();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>&) /*override*/;
#else // LL_PLAT_C
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void load(::std::string const&) /*override*/;
#else // LL_PLAT_C
    virtual void load(::std::string const& valueString) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI StringListOption(
        ::OptionID                          id,
        ::OptionOwnerType                   ownerType,
        ::OptionResetFlags                  resetFlags,
        ::std::string const&                captionId,
        ::std::string const&                saveTag,
        ::std::vector<::std::string> const& value
    );

    MCAPI void set(::std::vector<::std::string> const& value, bool saveOptionChange);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::OptionID                          id,
        ::OptionOwnerType                   ownerType,
        ::OptionResetFlags                  resetFlags,
        ::std::string const&                captionId,
        ::std::string const&                saveTag,
        ::std::vector<::std::string> const& value
    );
#endif
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
