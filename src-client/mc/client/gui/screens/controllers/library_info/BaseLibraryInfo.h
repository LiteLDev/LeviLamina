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
    virtual ~BaseLibraryInfo() = default;

    virtual ::std::string_view getType() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace LibraryInfo
