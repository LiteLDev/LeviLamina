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

    virtual ~Expandable() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& EXPANDABLE_KEY();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string_view $getType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace LibraryInfo
