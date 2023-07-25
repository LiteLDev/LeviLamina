#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RapidJsonDataFixers::Item {
/**
 * @symbol
 * ?applyLambdaToComponentInItemSection\@Item\@RapidJsonDataFixers\@\@YAXAEAV?$GenericValue\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$function\@$$A6AXV?$GenericMemberIterator\@$0A\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@\@Z\@6\@\@Z
 */
MCAPI void applyLambdaToComponentInItemSection(class rapidjson::GenericValue<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>>&, std::string const&, class std::function<void(class rapidjson::GenericMemberIterator<0, struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>>)> const&);
/**
 * @symbol
 * ?applyLambdaToComponentObject\@Item\@RapidJsonDataFixers\@\@YA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$function\@$$A6AXAEAV?$GenericValue\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@\@Z\@6\@\@Z
 */
MCAPI bool
applyLambdaToComponentObject(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator>&, std::string const&, class std::function<void(class rapidjson::GenericValue<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>>&)> const&);

}; // namespace RapidJsonDataFixers::Item
