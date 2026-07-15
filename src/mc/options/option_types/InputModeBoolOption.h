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

    virtual void load(::std::map<::std::string, ::std::string>& propertyMap) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI InputModeBoolOption(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        bool                 value
    );

    MCAPI InputModeBoolOption(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        bool                 valueMouse,
        bool                 valueTouch,
        bool                 valueGamePad
    );

    MCAPI void reset(::InputMode inputMode, bool saveOptionChange);

    MCAPI void set(::InputMode inputmode, bool value, bool saveOptionChange);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        bool                 value
    );

    MCAPI void* $ctor(
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
