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
// symbol:
// ?checkBoolProperty@ActorHasPropertySelectorUtils@@YA_NAEBVPropertyComponent@@AEBVHashedString@@AEBV?$variant@VCommandRationalRange@@_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@_N@Z
MCAPI bool checkBoolProperty(
    class PropertyComponent const&,
    class HashedString const&,
    std::variant<class CommandRationalRange, bool, std::string> const&,
    bool
);

// symbol:
// ?checkIntProperty@ActorHasPropertySelectorUtils@@YA_NAEBVPropertyComponent@@AEBVHashedString@@AEAVCommandRationalRange@@_N@Z
MCAPI bool
checkIntProperty(class PropertyComponent const&, class HashedString const&, class CommandRationalRange&, bool);

// symbol:
// ?checkRationalCommandRange@ActorHasPropertySelectorUtils@@YA_NAEBVPropertyComponent@@AEBVHashedString@@AEBV?$variant@VCommandRationalRange@@_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@_N@Z
MCAPI bool checkRationalCommandRange(
    class PropertyComponent const&,
    class HashedString const&,
    std::variant<class CommandRationalRange, bool, std::string> const&,
    bool
);

// symbol:
// ?checkStringProperty@ActorHasPropertySelectorUtils@@YA_NAEBVPropertyComponent@@AEBVHashedString@@AEBV?$variant@VCommandRationalRange@@_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@_N@Z
MCAPI bool checkStringProperty(
    class PropertyComponent const&,
    class HashedString const&,
    std::variant<class CommandRationalRange, bool, std::string> const&,
    bool
);

// symbol:
// ?parseComparison@ActorHasPropertySelectorUtils@@YA?AV?$variant@VCommandRationalRange@@_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBV?$variant@ULessThanComparison@ScriptModuleMinecraft@@ULessThanOrEqualsComparison@2@UGreaterThanComparison@2@UGreaterThanOrEqualsComparison@2@UEqualsComparison@2@UNotEqualsComparison@2@URangeComparison@2@@3@_N@Z
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

// symbol:
// ?parseValueParams@ActorHasPropertySelectorUtils@@YA?AV?$variant@VCommandRationalRange@@_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBUValueParams@ScriptModuleMinecraft@@_N@Z
MCAPI std::variant<class CommandRationalRange, bool, std::string>
      parseValueParams(struct ScriptModuleMinecraft::ValueParams const&, bool);
// NOLINTEND

}; // namespace ActorHasPropertySelectorUtils
