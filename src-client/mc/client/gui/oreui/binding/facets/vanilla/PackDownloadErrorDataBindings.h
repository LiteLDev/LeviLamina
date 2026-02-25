#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct PackDownloadErrorDataBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                mStorageSpaceNeeded;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mPackTitles;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::std::vector<::std::string> const& getPackTitles() const;

    MCAPI void reset();

    MCAPI ~PackDownloadErrorDataBindings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
