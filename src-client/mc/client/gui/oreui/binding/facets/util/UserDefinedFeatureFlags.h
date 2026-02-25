#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class UserDefinedFeatureFlags {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>         mFlags;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string)>> mOnUpdate;
    ::ll::TypedStorage<1, 1, bool>                                  mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    UserDefinedFeatureFlags();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UserDefinedFeatureFlags(
        ::std::string const&                 commaSeparatedFlags,
        ::std::function<void(::std::string)> flagsUpdatedCallback
    );

    MCAPI void _pushFlag(::std::string const& flag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string const& commaSeparatedFlags, ::std::function<void(::std::string)> flagsUpdatedCallback);
    // NOLINTEND
};

} // namespace OreUI
