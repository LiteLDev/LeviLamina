#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/UIOperation.h"

// auto generated forward declare list
// clang-format off
struct PackReportInfo;
struct UICondition;
struct UIIndexInfo;
namespace Json { class Value; }
// clang-format on

class UIModification {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Json::Value*>                mValue;
    ::ll::TypedStorage<8, 24, ::std::vector<::UIIndexInfo>> mIndices;
    ::ll::TypedStorage<1, 1, bool>                          mIsControlsArray;
    // NOLINTEND

public:
    // prevent constructor by default
    UIModification();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int _findIndex(::UICondition const& condition, ::UIOperation operation, ::PackReportInfo& packReportInfo);
    // NOLINTEND
};
