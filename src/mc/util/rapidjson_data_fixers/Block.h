#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RapidJsonDataFixers::Block {
// functions
// NOLINTBEGIN
MCAPI void applyLambdaToComponent(
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>&                                                             document,
    ::std::string const&                                                                        componentName,
    ::std::function<void(::rapidjson::GenericValue<
                         ::rapidjson::UTF8<char>,
                         ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>&)> const& callback
);

MCAPI bool applyLambdaToComponentObject(
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>&                                                             document,
    ::std::string const&                                                                        componentName,
    ::std::function<void(::rapidjson::GenericValue<
                         ::rapidjson::UTF8<char>,
                         ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>&)> const& callback
);

MCAPI void applyLambdaToDescriptionObject(
    ::rapidjson::GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>&
                                                                                                parent,
    ::std::function<void(::rapidjson::GenericValue<
                         ::rapidjson::UTF8<char>,
                         ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>&)> const& callback
);

MCAPI void legacyFindIfMissingFieldAndRemoveComponent(
    ::rapidjson::
        GenericMemberIterator<0, ::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>
                         componentsIte,
    ::std::string const& componentName,
    ::std::string const& fieldName
);

MCAPI void removeComponent(
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>& document,
    ::std::string const&            componentName,
    bool                            contentErrorOnRemoval,
    ::std::string const&            errorMessage
);

MCAPI void removeDuplicateComponents(::rapidjson::GenericDocument<
                                     ::rapidjson::UTF8<char>,
                                     ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
                                     ::rapidjson::CrtAllocator>& document);

MCAPI void removeDuplicateComponentsInComponentsSection(
    ::rapidjson::
        GenericMemberIterator<0, ::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>&
            componentsListIter
);

MCAPI void renameComponent(
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>& document,
    ::std::string const&            oldComponentName,
    ::std::string const&            newComponentName
);
// NOLINTEND

} // namespace RapidJsonDataFixers::Block
