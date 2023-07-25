#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RapidJsonDataFixers {
/**
 * @symbol
 * ?applyLambdaToChild\@RapidJsonDataFixers\@\@YAXAEAV?$GenericValue\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$function\@$$A6AXV?$GenericMemberIterator\@$0A\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@\@Z\@5\@\@Z
 */
MCAPI void
applyLambdaToChild(class rapidjson::GenericValue<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>>&, std::string const&, class std::function<void(class rapidjson::GenericMemberIterator<0, struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>>)> const&);
/**
 * @symbol
 * ?applyLambdaToChildObject\@RapidJsonDataFixers\@\@YAXAEAV?$GenericValue\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$function\@$$A6AXV?$GenericMemberIterator\@$0A\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@\@Z\@5\@\@Z
 */
MCAPI void
applyLambdaToChildObject(class rapidjson::GenericValue<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>>&, std::string const&, class std::function<void(class rapidjson::GenericMemberIterator<0, struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>>)> const&);

}; // namespace RapidJsonDataFixers
