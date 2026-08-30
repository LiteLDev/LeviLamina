#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LibraryInfo {

struct BaseLibraryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mSectionHeader;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseLibraryInfo();

    virtual ::std::string_view getType() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace LibraryInfo
