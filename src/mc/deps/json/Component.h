#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RapidJsonDataFixers::Component {
// NOLINTBEGIN
// symbol:
// ?applyLambdaToComponentInComponentsSection@Component@RapidJsonDataFixers@@YAXAEAV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$function@$$A6AXV?$GenericMemberIterator@$0A@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z@6@@Z
MCAPI void applyLambdaToComponentInComponentsSection(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>& parent,
    std::string const&                                                                   componentName,
    std::function<void(rapidjson::GenericMemberIterator<
                       0,
                       rapidjson::UTF8<char>,
                       rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>)> const& callback
);

// symbol:
// ?removeComponentInComponentsSection@Component@RapidJsonDataFixers@@YAXAEAV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N1@Z
MCAPI void removeComponentInComponentsSection(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>& parent,
    std::string const& componentName,
    bool,
    std::string const& errorMessage
);
// NOLINTEND

}; // namespace RapidJsonDataFixers::Component
