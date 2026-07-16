#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackReport.h"

// auto generated forward declare list
// clang-format off
class Pack;
// clang-format on

struct PackModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Pack const>> mPack;
    ::ll::TypedStorage<8, 32, ::std::string>                 mDateAvailable;
    ::ll::TypedStorage<8, 248, ::PackReport>                 mPackReport;
    ::ll::TypedStorage<1, 1, bool>                           mHasWarnings;
    ::ll::TypedStorage<4, 4, int>                            mSubpackIndex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackModel() = default;
    // NOLINTEND
};
