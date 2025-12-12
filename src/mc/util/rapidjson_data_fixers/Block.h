#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RapidJsonDataFixers::Block {
// functions
// NOLINTBEGIN
MCNAPI void applyLambdaToComponentInBlockSection(
    ::rapidjson::GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>&
                                                                                               parent,
    ::std::string const&                                                                       componentName,
    ::std::function<void(::rapidjson::GenericMemberIterator<
                         0,
                         ::rapidjson::UTF8<char>,
                         ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>)> const& callback
);

MCNAPI void applyLambdaToComponentInPermutationsSection(
    ::rapidjson::GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>&
                                                                                               parent,
    ::std::string const&                                                                       componentName,
    ::std::function<void(::rapidjson::GenericMemberIterator<
                         0,
                         ::rapidjson::UTF8<char>,
                         ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>)> const& callback
);

MCNAPI bool applyLambdaToComponentSections(
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>& document,
    ::std::function<void(
        ::rapidjson::GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>&
    )> const&                       callback
);

MCNAPI void applyLambdaToDescriptionObject(
    ::rapidjson::GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>&
              parent,
    ::std::function<void(
        ::rapidjson::GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>&
    )> const& callback
);

MCNAPI void legacyFindIfMissingFieldAndRemoveComponent(
    ::rapidjson::
        GenericMemberIterator<0, ::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>
                         componentsIte,
    ::std::string const& componentName,
    ::std::string const& fieldName
);

MCNAPI void legacyRemoveComponentIfMissingField(
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>& document,
    ::std::string const&            componentName,
    ::std::string const&            fieldName
);

MCNAPI void removeComponent(
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>& document,
    ::std::string const&            componentName,
    bool                            contentErrorOnRemoval,
    ::std::string const&            errorMessage
);

MCNAPI void removeComponentInPermutationsSection(
    ::rapidjson::GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>&
                         parent,
    ::std::string const& componentName,
    bool                 contentErrorOnRemoval,
    ::std::string const& errorMessage
);

MCNAPI void removeDuplicateComponents(
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>& document
);

MCNAPI void removeDuplicateComponentsInComponentsSection(
    ::rapidjson::
        GenericMemberIterator<0, ::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>&
            componentsListIter
);

MCNAPI void renameComponent(
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>& document,
    ::std::string const&            oldComponentName,
    ::std::string const&            newComponentName
);
// NOLINTEND

} // namespace RapidJsonDataFixers::Block
