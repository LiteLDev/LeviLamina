#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RapidJsonDataFixers {
// NOLINTBEGIN
// symbol:
// ?applyLambdaToChild@RapidJsonDataFixers@@YAXAEAV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$function@$$A6AXV?$GenericMemberIterator@$0A@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z@5@@Z
MCAPI void applyLambdaToChild(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>& parent,
    std::string const&                                                                                       childName,
    std::function<void(rapidjson::GenericMemberIterator<
                       0,
                       rapidjson::UTF8<char>,
                       rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>)> const&                     callback
);

// symbol:
// ?applyLambdaToChildObject@RapidJsonDataFixers@@YAXAEAV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$function@$$A6AXV?$GenericMemberIterator@$0A@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z@5@@Z
MCAPI void applyLambdaToChildObject(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>& parent,
    std::string const&                                                                                       childName,
    std::function<void(rapidjson::GenericMemberIterator<
                       0,
                       rapidjson::UTF8<char>,
                       rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>)> const&                     callback
);
// NOLINTEND

}; // namespace RapidJsonDataFixers
