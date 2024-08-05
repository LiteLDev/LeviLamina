#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RapidJsonDataFixers::Item {
// NOLINTBEGIN
MCAPI void applyLambdaToComponentInItemSection(
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

MCAPI void
removeComponent(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, std::string const&);
// NOLINTEND

}; // namespace RapidJsonDataFixers::Item
