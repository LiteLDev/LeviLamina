#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IPropertyHandler.h"

// auto generated forward declare list
// clang-format off
namespace Settings { struct OptionData; }
// clang-format on

namespace Settings {

class IOptionPropertyHandler : public ::Settings::IPropertyHandler<int> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOptionPropertyHandler() /*override*/ = default;

    virtual ::std::vector<::Settings::OptionData> getOptions() = 0;

    virtual ::std::optional<::std::string> getInfo();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::optional<::std::string> $getInfo();
    // NOLINTEND
};

} // namespace Settings
