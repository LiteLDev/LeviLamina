#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RapidJsonDataFixers::Item {
// functions
// NOLINTBEGIN
MCNAPI void applyLambdaToComponentInItemSection(::rapidjson::GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>& parent, ::std::string const& componentName, ::std::function<void(::rapidjson::GenericMemberIterator<0, ::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>)> const& callback);

MCNAPI void removeComponent(::rapidjson::GenericDocument<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>, ::rapidjson::CrtAllocator>& document, ::std::string const& componentName);
// NOLINTEND

}
