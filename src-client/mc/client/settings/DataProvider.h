#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/INumberDataProvider.h"
#include "mc/deps/input/InputMode.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace Settings { class IBooleanDataProvider; }
namespace Settings { class IOptionsDataProvider; }
namespace Settings { class IStringDataProvider; }
// clang-format on

namespace Settings::DataProvider {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::std::unique_ptr<::Settings::IBooleanDataProvider>>
createBooleanDataProvider(::OptionID optionId, ::IOptionRegistry& options);

MCAPI ::std::optional<::std::unique_ptr<::Settings::INumberDataProvider<int>>>
createFixedNumberDataProvider(::OptionID optionId, ::IOptionRegistry& options);

MCAPI ::std::optional<::std::unique_ptr<::Settings::IBooleanDataProvider>>
createInputBooleanDataProvider(::OptionID optionId, ::InputMode inputMode, ::IOptionRegistry& options);

MCAPI ::std::optional<::std::unique_ptr<::Settings::INumberDataProvider<float>>>
createInputFloatDataProvider(::OptionID optionId, ::InputMode inputMode, ::IOptionRegistry& options);

MCAPI ::std::optional<::std::unique_ptr<::Settings::IOptionsDataProvider>>
createOptionsDataProvider(::OptionID optionId, ::IOptionRegistry& options);

MCAPI ::std::optional<::std::unique_ptr<::Settings::IStringDataProvider>>
createStringDataProvider(::OptionID optionId, ::IOptionRegistry& options);
// NOLINTEND

} // namespace Settings::DataProvider
