#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/LocStringData.h"

namespace Settings {

struct OptionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> value;
    ::ll::
        TypedStorage<8, 72, ::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>>
            label;
    ::ll::TypedStorage<
        8,
        80,
        ::std::optional<::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>>>
                                   description;
    ::ll::TypedStorage<1, 1, bool> disabled;
    // NOLINTEND

public:
    // prevent constructor by default
    OptionData& operator=(OptionData const&);
    OptionData(OptionData const&);
    OptionData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OptionData(::Settings::OptionData&&);

    MCAPI ::Settings::OptionData& operator=(::Settings::OptionData&&);

    MCAPI ~OptionData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Settings::OptionData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Settings
