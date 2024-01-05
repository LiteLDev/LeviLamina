#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

namespace StructureFeatureTypeNames {
// NOLINTBEGIN
// symbol:
// ?dealiasFeatureName@StructureFeatureTypeNames@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
MCAPI std::string const& dealiasFeatureName(std::string const&);

// symbol:
// ?getFeatureName@StructureFeatureTypeNames@@YA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4StructureFeatureType@@@Z
MCAPI std::string_view getFeatureName(::StructureFeatureType);

// symbol:
// ?getFeatureNameAliasesMap@StructureFeatureTypeNames@@YAAEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
MCAPI std::map<std::string, std::string> const& getFeatureNameAliasesMap();

// symbol:
// ?getFeatureType@StructureFeatureTypeNames@@YA?AW4StructureFeatureType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI ::StructureFeatureType getFeatureType(std::string const& featureName);
// NOLINTEND

}; // namespace StructureFeatureTypeNames
