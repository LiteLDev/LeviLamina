#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RapidJsonDataFixers::Biome {
// functions
// NOLINTBEGIN
MCNAPI bool addDescriptionWithIdentifier(
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>& document,
    ::std::string const&            objectName,
    ::std::string const&            identifier
);

MCNAPI void moveBiomeTagsToNewTagsComponent(
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>& document
);

MCNAPI bool moveComponentsUnderNewBiomeParent(
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>& document
);

MCNAPI bool renameObjectMember(
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>& document,
    ::std::string const&            oldName,
    ::std::string const&            newName
);
// NOLINTEND

} // namespace RapidJsonDataFixers::Biome
