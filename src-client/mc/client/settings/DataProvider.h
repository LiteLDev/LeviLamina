#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/INumberDataProvider.h"
#include "mc/deps/input/InputMode.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class IOptions;
namespace Settings { class IBooleanDataProvider; }
namespace Settings { class IOptionsDataProvider; }
namespace Settings { class IStringDataProvider; }
// clang-format on

namespace Settings::DataProvider {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::std::unique_ptr<::Settings::IBooleanDataProvider>>
createBooleanDataProvider(::OptionID optionId, ::IOptions& options);

MCAPI ::std::optional<::std::unique_ptr<::Settings::INumberDataProvider<int>>>
createFixedNumberDataProvider(::OptionID optionId, ::IOptions& options);

MCAPI ::std::optional<::std::unique_ptr<::Settings::IBooleanDataProvider>>
createInputBooleanDataProvider(::OptionID optionId, ::InputMode inputMode, ::IOptions& options);

MCAPI ::std::optional<::std::unique_ptr<::Settings::INumberDataProvider<float>>>
createInputFloatDataProvider(::OptionID optionId, ::InputMode inputMode, ::IOptions& options);

MCAPI ::std::optional<::std::unique_ptr<::Settings::IOptionsDataProvider>>
createOptionsDataProvider(::OptionID optionId, ::IOptions& options);

MCAPI ::std::optional<::std::unique_ptr<::Settings::IStringDataProvider>>
createStringDataProvider(::OptionID optionId, ::IOptions& options);
// NOLINTEND

} // namespace Settings::DataProvider
