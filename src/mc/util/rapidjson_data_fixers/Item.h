#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RapidJsonDataFixers::Item {
// functions
// NOLINTBEGIN
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

MCAPI void removeComponent(
    ::rapidjson::GenericDocument<
        ::rapidjson::UTF8<char>,
        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
        ::rapidjson::CrtAllocator>& document,
    ::std::string const&            componentName
);
// NOLINTEND

} // namespace RapidJsonDataFixers::Item
