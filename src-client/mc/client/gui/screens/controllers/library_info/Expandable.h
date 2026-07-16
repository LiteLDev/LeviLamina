#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/library_info/BaseLibraryInfo.h"

namespace LibraryInfo {

struct Expandable : public ::LibraryInfo::BaseLibraryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mBodyText;
    ::ll::TypedStorage<1, 1, bool>           mCanExpand;
    ::ll::TypedStorage<1, 1, bool>           mExpanded;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view getType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace LibraryInfo
