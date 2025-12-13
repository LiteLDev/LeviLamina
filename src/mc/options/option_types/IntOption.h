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
    ::ll::UntypedStorage<4, 4>  mUnk8af74d;
    ::ll::UntypedStorage<4, 4>  mUnka6e3fa;
    ::ll::UntypedStorage<4, 4>  mUnk5cfa3a;
    ::ll::UntypedStorage<4, 4>  mUnk4c681f;
    ::ll::UntypedStorage<1, 1>  mUnka2bfc3;
    ::ll::UntypedStorage<8, 24> mUnkde8f59;
    ::ll::UntypedStorage<8, 64> mUnkb33603;
    // NOLINTEND

public:
    // prevent constructor by default
    IntOption& operator=(IntOption const&);
    IntOption(IntOption const&);
    IntOption();

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
    MCNAPI_C IntOption(
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

    MCNAPI_C IntOption(
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

    MCNAPI_C int _validate(int value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
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

    MCNAPI_C void* $ctor(
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
    MCNAPI void $dtor();
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
