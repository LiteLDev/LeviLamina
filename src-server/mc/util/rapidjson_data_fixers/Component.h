#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RapidJsonDataFixers::Component {
// functions
// NOLINTBEGIN
MCNAPI void applyLambdaToComponentInComponentsSection(::rapidjson::GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>& parent, ::std::string const& componentName, ::std::function<void(::rapidjson::GenericMemberIterator<0, ::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>)> const& callback);

MCNAPI void removeComponentInComponentsSection(::rapidjson::GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>& parent, ::std::string const& componentName, bool contentErrorOnRemoval, ::std::string const& errorMessage);
// NOLINTEND

}
