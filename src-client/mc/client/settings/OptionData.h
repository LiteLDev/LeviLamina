#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings {

struct OptionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                             value;
    ::ll::TypedStorage<8, 32, ::std::string>                  label;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> description;
    ::ll::TypedStorage<1, 1, bool>                            disabled;
    // NOLINTEND

public:
    // prevent constructor by default
    OptionData& operator=(OptionData const&);
    OptionData(OptionData const&);
    OptionData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Settings::OptionData& operator=(::Settings::OptionData&&);

    MCAPI ~OptionData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Settings
