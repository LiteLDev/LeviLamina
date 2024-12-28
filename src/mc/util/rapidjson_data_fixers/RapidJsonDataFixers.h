#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RapidJsonDataFixers {
// functions
// NOLINTBEGIN
MCAPI void applyLambdaToChild(
    ::rapidjson::GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>&
                                                                                               parent,
    ::std::string const&                                                                       childName,
    ::std::function<void(::rapidjson::GenericMemberIterator<
                         0,
                         ::rapidjson::UTF8<char>,
                         ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>)> const& callback
);

MCAPI void applyLambdaToChildObject(
    ::rapidjson::GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>&
                                                                                               parent,
    ::std::string const&                                                                       childName,
    ::std::function<void(::rapidjson::GenericMemberIterator<
                         0,
                         ::rapidjson::UTF8<char>,
                         ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>>)> const& callback
);
// NOLINTEND

} // namespace RapidJsonDataFixers
