#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/options/option_types/Option.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"

class InputModeBoolOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::InputMode, bool>> mValues;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::InputMode, bool>> mDefaultValues;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    InputModeBoolOption();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector) /*override*/;

    virtual void load(::std::string const& valueString) /*override*/;

    virtual void load(::std::map<::std::string, ::std::string>& propertyMap) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI InputModeBoolOption(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        bool                 value
    );

    MCNAPI InputModeBoolOption(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        bool                 valueMouse,
        bool                 valueTouch,
        bool                 valueGamePad
    );

    MCNAPI void
    _saveForInputMode(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector, ::InputMode mode);

    MCNAPI void set(::InputMode inputmode, bool value, bool saveOptionChange);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        bool                 value
    );

    MCNAPI void* $ctor(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        bool                 valueMouse,
        bool                 valueTouch,
        bool                 valueGamePad
    );
#endif
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
