#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RapidJsonDataFixers::Block {
// NOLINTBEGIN
/**
 * @symbol
 * ?applyLambdaToComponent\@Block\@RapidJsonDataFixers\@\@YAXAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$function\@$$A6AXAEAV?$GenericValue\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@\@Z\@6\@\@Z
 */
MCAPI void applyLambdaToComponent(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator>&, std::string const&, std::function<void(class rapidjson::GenericValue<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>>&)> const&);
/**
 * @symbol
 * ?applyLambdaToComponentInBlockSection\@Block\@RapidJsonDataFixers\@\@YAXAEAV?$GenericValue\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$function\@$$A6AXV?$GenericMemberIterator\@$0A\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@\@Z\@6\@\@Z
 */
MCAPI void applyLambdaToComponentInBlockSection(class rapidjson::GenericValue<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>>&, std::string const&, std::function<void(class rapidjson::GenericMemberIterator<0, struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>>)> const&);
/**
 * @symbol
 * ?applyLambdaToComponentObject\@Block\@RapidJsonDataFixers\@\@YA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$function\@$$A6AXAEAV?$GenericValue\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@\@Z\@6\@\@Z
 */
MCAPI bool
applyLambdaToComponentObject(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator>&, std::string const&, std::function<void(class rapidjson::GenericValue<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>>&)> const&);
/**
 * @symbol
 * ?applyLambdaToDescriptionObject\@Block\@RapidJsonDataFixers\@\@YAXAEAV?$GenericValue\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@AEBV?$function\@$$A6AXAEAV?$GenericValue\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@\@Z\@std\@\@\@Z
 */
MCAPI void applyLambdaToDescriptionObject(class rapidjson::GenericValue<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>>&, std::function<void(class rapidjson::GenericValue<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>>&)> const&);
/**
 * @symbol
 * ?legacyFindIfMissingFieldAndRemoveComponent\@Block\@RapidJsonDataFixers\@\@YAXV?$GenericMemberIterator\@$0A\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
 */
MCAPI void
legacyFindIfMissingFieldAndRemoveComponent(class rapidjson::GenericMemberIterator<0, struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>>, std::string const&, std::string const&);
/**
 * @symbol
 * ?legacyRemoveComponentIfMissingField\@Block\@RapidJsonDataFixers\@\@YAXAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
 */
MCAPI void
legacyRemoveComponentIfMissingField(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator>&, std::string const&, std::string const&);
/**
 * @symbol
 * ?removeComponent\@Block\@RapidJsonDataFixers\@\@YAXAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N1\@Z
 */
MCAPI void
removeComponent(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator>&, std::string const&, bool, std::string const&);
/**
 * @symbol
 * ?removeComponentField\@Block\@RapidJsonDataFixers\@\@YAXAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
 */
MCAPI void
removeComponentField(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator>&, std::string const&, std::string const&);
/**
 * @symbol
 * ?removeDuplicateComponents\@Block\@RapidJsonDataFixers\@\@YAXAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
 */
MCAPI void removeDuplicateComponents(class rapidjson::GenericDocument<
                                     struct rapidjson::UTF8<char>,
                                     class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                                     class rapidjson::CrtAllocator>&);
/**
 * @symbol
 * ?removeDuplicateComponentsInComponentsSection\@Block\@RapidJsonDataFixers\@\@YAXAEAV?$GenericMemberIterator\@$0A\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@\@Z
 */
MCAPI void
removeDuplicateComponentsInComponentsSection(class rapidjson::GenericMemberIterator<
                                             0,
                                             struct rapidjson::UTF8<char>,
                                             class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>>&);
/**
 * @symbol
 * ?renameComponent\@Block\@RapidJsonDataFixers\@\@YAXAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
 */
MCAPI void
renameComponent(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator>&, std::string const&, std::string const&);
/**
 * @symbol
 * ?renameComponentField\@Block\@RapidJsonDataFixers\@\@YAXAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@11\@Z
 */
MCAPI void
renameComponentField(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator>&, std::string const&, std::string const&, std::string const&);
/**
 * @symbol
 * ?replaceComponentObjectWithFieldValue\@Block\@RapidJsonDataFixers\@\@YAXAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
 */
MCAPI void
replaceComponentObjectWithFieldValue(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator>&, std::string const&, std::string const&);
// NOLINTEND

}; // namespace RapidJsonDataFixers::Block
