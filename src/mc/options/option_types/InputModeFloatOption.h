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
    ::ll::TypedStorage<4, 4, float const>                               VALUE_MIN;
    ::ll::TypedStorage<4, 4, float const>                               VALUE_MAX;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::InputMode, float>> mValues;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::InputMode, float>> mDefaultValues;
    ::ll::TypedStorage<4, 4, float const>                               DELTA;
    // NOLINTEND

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
    MCAPI_C void
    _saveForInputMode(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector, ::InputMode mode);

    MCAPI_C void set(::InputMode inputmode, float value, bool saveOptionChange);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(
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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector);

    MCFOLD void $load(::std::string const& valueString);

    MCAPI void $load(::std::map<::std::string, ::std::string>& propertyMap);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
