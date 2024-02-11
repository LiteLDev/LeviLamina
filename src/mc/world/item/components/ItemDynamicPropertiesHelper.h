#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ItemDynamicPropertiesHelper {
// NOLINTBEGIN
// symbol:
// ?clearAllDynamicProperties@ItemDynamicPropertiesHelper@@YA_NAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI bool clearAllDynamicProperties(class ItemStackBase&, std::string const&);

// symbol:
// ?getDynamicProperties@ItemDynamicPropertiesHelper@@YA?AV?$unique_ptr@VDynamicProperties@@U?$default_delete@VDynamicProperties@@@std@@@std@@AEBVItemStackBase@@AEBUReflectionCtx@cereal@@@Z
MCAPI std::unique_ptr<class DynamicProperties>
      getDynamicProperties(class ItemStackBase const&, struct cereal::ReflectionCtx const&);

// symbol:
// ?getDynamicProperty@ItemDynamicPropertiesHelper@@YA?AV?$optional@V?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@std@@@std@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@1AEBUReflectionCtx@cereal@@@Z
MCAPI std::optional<std::variant<double, float, bool, std::string, class Vec3>>
getDynamicProperty(class ItemStackBase const&, std::string const&, std::string const&, struct cereal::ReflectionCtx const&);

// symbol:
// ?removeDynamicProperty@ItemDynamicPropertiesHelper@@YA_NAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
MCAPI bool removeDynamicProperty(class ItemStackBase&, std::string const&, std::string const&);

// symbol:
// ?setDynamicProperty@ItemDynamicPropertiesHelper@@YAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@4@1AEBUReflectionCtx@cereal@@@Z
MCAPI void
setDynamicProperty(class ItemStackBase&, std::string const&, std::variant<double, float, bool, std::string, class Vec3> const&, std::string const&, struct cereal::ReflectionCtx const&);
// NOLINTEND

}; // namespace ItemDynamicPropertiesHelper
