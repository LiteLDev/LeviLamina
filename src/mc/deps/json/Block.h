#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RapidJsonDataFixers::Block {
// NOLINTBEGIN
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

MCAPI void applyLambdaToComponentInBlockSection(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>& parent,
    std::string const&                                                                   componentName,
    std::function<void(rapidjson::GenericMemberIterator<
                       0,
                       rapidjson::UTF8<char>,
                       rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>)> const& callback
);

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

MCAPI bool applyLambdaToComponentSections(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, std::function<void(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>&)> const&);

MCAPI void applyLambdaToDescriptionObject(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>& parent,
    std::function<void(rapidjson::GenericValue<
                       rapidjson::UTF8<char>,
                       rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>&)> const&                    callback
);

MCAPI void legacyFindIfMissingFieldAndRemoveComponent(
    rapidjson::GenericMemberIterator<0, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>,
    std::string const& componentName,
    std::string const& fieldName
);

MCAPI void legacyRemoveComponentIfMissingField(
    rapidjson::GenericDocument<
        rapidjson::UTF8<char>,
        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
        rapidjson::CrtAllocator>& document,
    std::string const&            componentName,
    std::string const&            fieldName
);

MCAPI void removeComponent(
    rapidjson::GenericDocument<
        rapidjson::UTF8<char>,
        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
        rapidjson::CrtAllocator>& document,
    std::string const&            componentName,
    bool,
    std::string const& errorMessage
);

MCAPI void removeComponentField(
    rapidjson::GenericDocument<
        rapidjson::UTF8<char>,
        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
        rapidjson::CrtAllocator>& document,
    std::string const&            componentName,
    std::string const&            fieldName
);

MCAPI void removeDuplicateComponents(rapidjson::GenericDocument<
                                     rapidjson::UTF8<char>,
                                     rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                                     rapidjson::CrtAllocator>& document);

MCAPI void removeDuplicateComponentsInComponentsSection(rapidjson::GenericMemberIterator<
                                                        0,
                                                        rapidjson::UTF8<char>,
                                                        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>&);

MCAPI void
renameComponent(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>& document, std::string const&, std::string const&);

MCAPI void
renameComponentField(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>& document, std::string const& componentName, std::string const&, std::string const&);

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
