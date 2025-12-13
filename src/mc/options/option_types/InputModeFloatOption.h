#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/options/option_types/Option.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"

class InputModeFloatOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk2c1e26;
    ::ll::UntypedStorage<4, 4>  mUnk12b75b;
    ::ll::UntypedStorage<8, 64> mUnk8fd07f;
    ::ll::UntypedStorage<8, 64> mUnkac5f60;
    ::ll::UntypedStorage<4, 4>  mUnk356984;
    // NOLINTEND

public:
    // prevent constructor by default
    InputModeFloatOption& operator=(InputModeFloatOption const&);
    InputModeFloatOption(InputModeFloatOption const&);
    InputModeFloatOption();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector) /*override*/;

    virtual void load(::std::string const& valueString) /*override*/;

    virtual void load(::std::map<::std::string, ::std::string>& propertyMap) /*override*/;

#ifdef LL_PLAT_S
    virtual ~InputModeFloatOption() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~InputModeFloatOption() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C InputModeFloatOption(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        float                value,
        float                valueMin,
        float                rangeMax
    );

    MCNAPI_C void
    _saveForInputMode(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector, ::InputMode mode);

    MCNAPI_C void set(::InputMode inputmode, float value, bool saveOptionChange);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        float                value,
        float                valueMin,
        float                rangeMax
    );
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

    MCNAPI void $load(::std::map<::std::string, ::std::string>& propertyMap);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
