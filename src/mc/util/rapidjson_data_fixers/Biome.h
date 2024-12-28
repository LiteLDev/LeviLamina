#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RapidJsonDataFixers::Biome {
// functions
// NOLINTBEGIN
MCAPI bool addDescriptionWithIdentifier(
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>& document,
    ::std::string const&            objectName,
    ::std::string const&            identifier
);

MCAPI ::std::string getOnlyDocumentMemberName(::rapidjson::GenericDocument<
                                              ::rapidjson::UTF8<char>,
                                              ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
                                              ::rapidjson::CrtAllocator> const& document);

MCAPI void moveBiomeTagsToNewTagsComponent(::rapidjson::GenericDocument<
                                           ::rapidjson::UTF8<char>,
                                           ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
                                           ::rapidjson::CrtAllocator>& document);

MCAPI bool moveComponentsUnderNewBiomeParent(::rapidjson::GenericDocument<
                                             ::rapidjson::UTF8<char>,
                                             ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
                                             ::rapidjson::CrtAllocator>& document);

MCAPI bool removeMemberFromMember(
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>& document,
    ::std::string const&            childToRemoveName,
    ::std::string const&            parentName
);

MCAPI bool renameObjectMember(
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>& document,
    ::std::string const&            oldName,
    ::std::string const&            newName
);
// NOLINTEND

} // namespace RapidJsonDataFixers::Biome
