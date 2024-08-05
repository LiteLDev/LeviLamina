#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/DynamicPropertyDefinePropertyError.h"

class DynamicPropertiesDefinition {
public:
    // prevent constructor by default
    DynamicPropertiesDefinition& operator=(DynamicPropertiesDefinition const&);
    DynamicPropertiesDefinition(DynamicPropertiesDefinition const&);
    DynamicPropertiesDefinition();

public:
    // NOLINTBEGIN
    MCAPI void clear();

    MCAPI std::optional<::DynamicPropertyDefinePropertyError>
          defineProperty(std::string const&, struct DynamicPropertyDefinition);

    MCAPI struct DynamicPropertyDefinition const* tryGetPropertyDefinition(std::string const& identifier) const;

    MCAPI std::optional<std::string>
          tryMergeDefinitions(class DynamicPropertiesDefinition const& other, std::string const& identifier, uint64);

    MCAPI ~DynamicPropertiesDefinition();

    MCAPI static void clearAll(std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>> const&);

    MCAPI static uint64 const ACTOR_TOTAL_DYNAMIC_PROPERTY_SIZE_LIMIT;

    MCAPI static uint64 const IDENTIFIER_SIZE_LIMIT;

    MCAPI static uint64 const WORLD_TOTAL_DYNAMIC_PROPERTY_SIZE_LIMIT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canMergeDefinitions(
        class DynamicPropertiesDefinition const& other,
        std::string const&                       identifier,
        uint64,
        std::string& error
    ) const;

    // NOLINTEND
};
