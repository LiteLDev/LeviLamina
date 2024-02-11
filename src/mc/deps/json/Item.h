#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RapidJsonDataFixers::Item {
// NOLINTBEGIN
// symbol:
// ?applyLambdaToComponent@Item@RapidJsonDataFixers@@YAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$function@$$A6AXAEAV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z@6@@Z
MCAPI void applyLambdaToComponent(
    rapidjson::GenericDocument<
        rapidjson::UTF8<char>,
        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
        rapidjson::CrtAllocator>&                                                         document,
    std::string const&                                                                    componentName,
    std::function<void(rapidjson::GenericValue<
                       rapidjson::UTF8<char>,
                       rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>&)> const& callback
);

// symbol:
// ?applyLambdaToComponentInItemSection@Item@RapidJsonDataFixers@@YAXAEAV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$function@$$A6AXV?$GenericMemberIterator@$0A@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z@6@@Z
MCAPI void applyLambdaToComponentInItemSection(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>& parent,
    std::string const&                                                                   componentName,
    std::function<void(rapidjson::GenericMemberIterator<
                       0,
                       rapidjson::UTF8<char>,
                       rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>)> const& callback
);

// symbol:
// ?applyLambdaToComponentObject@Item@RapidJsonDataFixers@@YA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$function@$$A6AXAEAV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z@6@@Z
MCAPI bool applyLambdaToComponentObject(
    rapidjson::GenericDocument<
        rapidjson::UTF8<char>,
        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
        rapidjson::CrtAllocator>&                                                         document,
    std::string const&                                                                    componentName,
    std::function<void(rapidjson::GenericValue<
                       rapidjson::UTF8<char>,
                       rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>&)> const& callback
);

// symbol:
// ?removeComponent@Item@RapidJsonDataFixers@@YAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI void
removeComponent(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, std::string const&);
// NOLINTEND

}; // namespace RapidJsonDataFixers::Item
