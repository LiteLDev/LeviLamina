#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"

// auto generated forward declare list
// clang-format off
class GameVersion;
// clang-format on

class IntOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>                  VALUE_MAX;
    ::ll::TypedStorage<4, 4, int const>                  VALUE_MIN;
    ::ll::TypedStorage<4, 4, int>                        mValue;
    ::ll::TypedStorage<4, 4, int>                        mDefaultValue;
    ::ll::TypedStorage<1, 1, bool>                       mClampToRange;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>        mPossibleValues;
    ::ll::TypedStorage<8, 64, ::std::function<int(int)>> mCoerceSaveValueCallback;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~IntOption() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~IntOption() /*override*/;
#endif

    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector) /*override*/;

    virtual void load(::std::string const& valueString) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C int _validate(int value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(
        ::OptionID                id,
        ::OptionOwnerType         ownerType,
        ::OptionResetFlags        resetFlags,
        ::std::string const&      captionId,
        ::std::string const&      saveTag,
        int                       value,
        ::std::vector<int> const& values,
        bool                      clampToRange,
        ::GameVersion             version
    );

    MCAPI_C void* $ctor(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        int                  value,
        bool                 clampToRange,
        int                  valueMin,
        int                  valueMax,
        ::GameVersion        version
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

    MCAPI void $load(::std::string const& valueString);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
