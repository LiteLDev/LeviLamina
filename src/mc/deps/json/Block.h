#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RapidJsonDataFixers::Block {
// NOLINTBEGIN
// symbol:
// ?applyLambdaToComponent@Block@RapidJsonDataFixers@@YAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$function@$$A6AXAEAV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z@6@@Z
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
// ?applyLambdaToComponentInBlockSection@Block@RapidJsonDataFixers@@YAXAEAV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$function@$$A6AXV?$GenericMemberIterator@$0A@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z@6@@Z
MCAPI void applyLambdaToComponentInBlockSection(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>& parent,
    std::string const&                                                                   componentName,
    std::function<void(rapidjson::GenericMemberIterator<
                       0,
                       rapidjson::UTF8<char>,
                       rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>)> const& callback
);

// symbol:
// ?applyLambdaToComponentObject@Block@RapidJsonDataFixers@@YA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$function@$$A6AXAEAV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z@6@@Z
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
// ?applyLambdaToComponentSections@Block@RapidJsonDataFixers@@YA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBV?$function@$$A6AXAEAV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z@std@@@Z
MCAPI bool applyLambdaToComponentSections(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, std::function<void(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>&)> const&);

// symbol:
// ?applyLambdaToDescriptionObject@Block@RapidJsonDataFixers@@YAXAEAV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@AEBV?$function@$$A6AXAEAV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z@std@@@Z
MCAPI void applyLambdaToDescriptionObject(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>& parent,
    std::function<void(rapidjson::GenericValue<
                       rapidjson::UTF8<char>,
                       rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>&)> const&                    callback
);

// symbol:
// ?legacyFindIfMissingFieldAndRemoveComponent@Block@RapidJsonDataFixers@@YAXV?$GenericMemberIterator@$0A@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
MCAPI void legacyFindIfMissingFieldAndRemoveComponent(
    rapidjson::GenericMemberIterator<0, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>,
    std::string const& componentName,
    std::string const& fieldName
);

// symbol:
// ?legacyRemoveComponentIfMissingField@Block@RapidJsonDataFixers@@YAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
MCAPI void legacyRemoveComponentIfMissingField(
    rapidjson::GenericDocument<
        rapidjson::UTF8<char>,
        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
        rapidjson::CrtAllocator>& document,
    std::string const&            componentName,
    std::string const&            fieldName
);

// symbol:
// ?removeComponent@Block@RapidJsonDataFixers@@YAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N1@Z
MCAPI void removeComponent(
    rapidjson::GenericDocument<
        rapidjson::UTF8<char>,
        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
        rapidjson::CrtAllocator>& document,
    std::string const&            componentName,
    bool,
    std::string const& errorMessage
);

// symbol:
// ?removeComponentField@Block@RapidJsonDataFixers@@YAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
MCAPI void removeComponentField(
    rapidjson::GenericDocument<
        rapidjson::UTF8<char>,
        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
        rapidjson::CrtAllocator>& document,
    std::string const&            componentName,
    std::string const&            fieldName
);

// symbol:
// ?removeDuplicateComponents@Block@RapidJsonDataFixers@@YAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
MCAPI void removeDuplicateComponents(rapidjson::GenericDocument<
                                     rapidjson::UTF8<char>,
                                     rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                                     rapidjson::CrtAllocator>& document);

// symbol:
// ?removeDuplicateComponentsInComponentsSection@Block@RapidJsonDataFixers@@YAXAEAV?$GenericMemberIterator@$0A@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
MCAPI void removeDuplicateComponentsInComponentsSection(rapidjson::GenericMemberIterator<
                                                        0,
                                                        rapidjson::UTF8<char>,
                                                        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>&);

// symbol:
// ?renameComponent@Block@RapidJsonDataFixers@@YAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
MCAPI void
renameComponent(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>& document, std::string const&, std::string const&);

// symbol:
// ?renameComponentField@Block@RapidJsonDataFixers@@YAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@11@Z
MCAPI void
renameComponentField(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>& document, std::string const& componentName, std::string const&, std::string const&);

// symbol:
// ?replaceComponentObjectWithFieldValue@Block@RapidJsonDataFixers@@YAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
MCAPI void replaceComponentObjectWithFieldValue(
    rapidjson::GenericDocument<
        rapidjson::UTF8<char>,
        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
        rapidjson::CrtAllocator>& document,
    std::string const&            componentName,
    std::string const&            fieldName
);
// NOLINTEND

}; // namespace RapidJsonDataFixers::Block
