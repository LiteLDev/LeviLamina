#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct EqualsComparison; }
namespace ScriptModuleMinecraft { struct GreaterThanComparison; }
namespace ScriptModuleMinecraft { struct GreaterThanOrEqualsComparison; }
namespace ScriptModuleMinecraft { struct LessThanComparison; }
namespace ScriptModuleMinecraft { struct LessThanOrEqualsComparison; }
namespace ScriptModuleMinecraft { struct NotEqualsComparison; }
namespace ScriptModuleMinecraft { struct RangeComparison; }
namespace ScriptModuleMinecraft { struct ValueParams; }
// clang-format on

namespace ActorHasPropertySelectorUtils {
// NOLINTBEGIN
MCAPI bool checkBoolProperty(
    class PropertyComponent const&,
    class HashedString const&,
    std::variant<class CommandRationalRange, bool, std::string> const&,
    bool
);

MCAPI bool
checkIntProperty(class PropertyComponent const&, class HashedString const&, class CommandRationalRange&, bool);

MCAPI bool checkRationalCommandRange(
    class PropertyComponent const&,
    class HashedString const&,
    std::variant<class CommandRationalRange, bool, std::string> const&,
    bool
);

MCAPI bool checkStringProperty(
    class PropertyComponent const&,
    class HashedString const&,
    std::variant<class CommandRationalRange, bool, std::string> const&,
    bool
);

MCAPI std::variant<class CommandRationalRange, bool, std::string> parseComparison(
    std::variant<
        struct ScriptModuleMinecraft::LessThanComparison,
        struct ScriptModuleMinecraft::LessThanOrEqualsComparison,
        struct ScriptModuleMinecraft::GreaterThanComparison,
        struct ScriptModuleMinecraft::GreaterThanOrEqualsComparison,
        struct ScriptModuleMinecraft::EqualsComparison,
        struct ScriptModuleMinecraft::NotEqualsComparison,
        struct ScriptModuleMinecraft::RangeComparison> const&,
    bool
);

MCAPI std::variant<class CommandRationalRange, bool, std::string>
      parseValueParams(struct ScriptModuleMinecraft::ValueParams const&, bool);
// NOLINTEND

}; // namespace ActorHasPropertySelectorUtils
