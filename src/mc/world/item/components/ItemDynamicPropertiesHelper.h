#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ItemDynamicPropertiesHelper {
// NOLINTBEGIN
// symbol:
// ?getDynamicProperty@ItemDynamicPropertiesHelper@@YA?AV?$optional@V?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@std@@@std@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@1AEBUReflectionCtx@cereal@@@Z
MCAPI std::optional<std::variant<double, float, bool, std::string, class Vec3>>
getDynamicProperty(class ItemStackBase const&, std::string const&, std::string const&, struct cereal::ReflectionCtx const&);

// symbol:
// ?setDynamicProperty@ItemDynamicPropertiesHelper@@YAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@4@1AEBUReflectionCtx@cereal@@@Z
MCAPI void
setDynamicProperty(class ItemStackBase&, std::string const&, std::variant<double, float, bool, std::string, class Vec3> const&, std::string const&, struct cereal::ReflectionCtx const&);
// NOLINTEND

}; // namespace ItemDynamicPropertiesHelper
