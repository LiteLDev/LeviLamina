#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

class Int64Option : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64 const>                VALUE_MAX;
    ::ll::TypedStorage<8, 8, int64 const>                VALUE_MIN;
    ::ll::TypedStorage<8, 8, int64>                      mValue;
    ::ll::TypedStorage<8, 8, int64>                      mDefaultValue;
    ::ll::TypedStorage<1, 1, bool>                       mClampToRange;
    ::ll::TypedStorage<8, 24, ::std::vector<int64>>      mPossibleValues;
    ::ll::TypedStorage<8, 64, ::std::function<int(int)>> mCoerceSaveValueCallback;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Int64Option() /*override*/ = default;

    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>&) /*override*/;

    virtual void load(::std::string const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
