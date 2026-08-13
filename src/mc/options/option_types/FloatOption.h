#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

class FloatOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float const> VALUE_MIN;
    ::ll::TypedStorage<4, 4, float const> VALUE_MAX;
    ::ll::TypedStorage<4, 4, float>       mValue;
    ::ll::TypedStorage<4, 4, float>       mDefaultValue;
    ::ll::TypedStorage<4, 4, float const> DELTA;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector) /*override*/;

    virtual void load(::std::string const& valueString) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector);

    MCAPI void $load(::std::string const& valueString);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
