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
    ::ll::UntypedStorage<8, 64> mUnkda6f12;
    ::ll::UntypedStorage<8, 64> mUnk7832c1;
    // NOLINTEND

public:
    // prevent constructor by default
    InputModeBoolOption& operator=(InputModeBoolOption const&);
    InputModeBoolOption(InputModeBoolOption const&);
    InputModeBoolOption();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector) /*override*/;

    virtual void load(::std::string const& valueString) /*override*/;

    virtual void load(::std::map<::std::string, ::std::string>& propertyMap) /*override*/;

#ifdef LL_PLAT_S
    virtual ~InputModeBoolOption() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~InputModeBoolOption() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C InputModeBoolOption(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        bool                 value
    );

    MCNAPI_C InputModeBoolOption(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        bool                 valueMouse,
        bool                 valueTouch,
        bool                 valueGamePad
    );

    MCNAPI_C void
    _saveForInputMode(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector, ::InputMode mode);

    MCNAPI_C void set(::InputMode inputmode, bool value, bool saveOptionChange);
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
        bool                 value
    );

    MCNAPI_C void* $ctor(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        bool                 valueMouse,
        bool                 valueTouch,
        bool                 valueGamePad
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
