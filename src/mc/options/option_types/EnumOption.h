#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/IntOption.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"

// auto generated forward declare list
// clang-format off
class GameVersion;
// clang-format on

class EnumOption : public ::IntOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2aaabc;
    // NOLINTEND

public:
    // prevent constructor by default
    EnumOption& operator=(EnumOption const&);
    EnumOption(EnumOption const&);
    EnumOption();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnumOption() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C EnumOption(
        ::OptionID                                      id,
        ::OptionOwnerType                               ownerType,
        ::OptionResetFlags                              resetFlags,
        ::std::string const&                            captionId,
        ::std::string const&                            saveTag,
        int                                             value,
        ::std::vector<int> const&                       values,
        ::std::unordered_map<int, ::std::string> const& valueNameMap,
        ::GameVersion                                   version
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::OptionID                                      id,
        ::OptionOwnerType                               ownerType,
        ::OptionResetFlags                              resetFlags,
        ::std::string const&                            captionId,
        ::std::string const&                            saveTag,
        int                                             value,
        ::std::vector<int> const&                       values,
        ::std::unordered_map<int, ::std::string> const& valueNameMap,
        ::GameVersion                                   version
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
