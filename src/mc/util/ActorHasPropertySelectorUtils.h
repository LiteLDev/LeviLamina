#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CommandRationalRange;
class HashedString;
class PropertyComponent;
namespace ScriptModuleMinecraft { struct EqualsComparison; }
namespace ScriptModuleMinecraft { struct GreaterThanComparison; }
namespace ScriptModuleMinecraft { struct GreaterThanOrEqualsComparison; }
namespace ScriptModuleMinecraft { struct LessThanComparison; }
namespace ScriptModuleMinecraft { struct LessThanOrEqualsComparison; }
namespace ScriptModuleMinecraft { struct NotEqualsComparison; }
namespace ScriptModuleMinecraft { struct RangeComparison; }
// clang-format on

namespace ActorHasPropertySelectorUtils {
// functions
// NOLINTBEGIN
MCNAPI bool checkBoolProperty(
    ::PropertyComponent const&                                         property,
    ::HashedString const&                                              propertyName,
    ::std::variant<::CommandRationalRange, bool, ::std::string> const& value,
    bool                                                               inverted
);

MCNAPI bool checkIntProperty(
    ::PropertyComponent const& property,
    ::HashedString const&      propertyName,
    ::CommandRationalRange&    rationalRange,
    bool                       inverted
);

MCNAPI bool checkIntToBoolConversionNoInversion(bool boolValue, ::CommandRationalRange& rationalRange);

MCNAPI bool checkRationalCommandRange(
    ::PropertyComponent const&                                         property,
    ::HashedString const&                                              propertyName,
    ::std::variant<::CommandRationalRange, bool, ::std::string> const& value,
    bool                                                               inverted
);

MCNAPI bool checkStringProperty(
    ::PropertyComponent const&                                         property,
    ::HashedString const&                                              propertyName,
    ::std::variant<::CommandRationalRange, bool, ::std::string> const& value,
    bool                                                               inverted
);

MCNAPI ::std::variant<::CommandRationalRange, bool, ::std::string> parseComparison(
    ::std::variant<
        ::ScriptModuleMinecraft::LessThanComparison,
        ::ScriptModuleMinecraft::LessThanOrEqualsComparison,
        ::ScriptModuleMinecraft::GreaterThanComparison,
        ::ScriptModuleMinecraft::GreaterThanOrEqualsComparison,
        ::ScriptModuleMinecraft::EqualsComparison,
        ::ScriptModuleMinecraft::NotEqualsComparison,
        ::ScriptModuleMinecraft::RangeComparison> const& comparison,
    bool                                                 isExclude
);
// NOLINTEND

} // namespace ActorHasPropertySelectorUtils
