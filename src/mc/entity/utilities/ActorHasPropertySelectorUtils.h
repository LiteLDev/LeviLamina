#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
// NOLINTEND

}; // namespace ActorHasPropertySelectorUtils
