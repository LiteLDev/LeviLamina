#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/persistence/DynamicPropertyDefinePropertyError.h"

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
          defineProperty(std::string const& identifier, struct DynamicPropertyDefinition definition);

    MCAPI struct DynamicPropertyDefinition const* tryGetPropertyDefinition(std::string const& identifier) const;

    MCAPI std::optional<std::string> tryMergeDefinitions(
        class DynamicPropertiesDefinition const& other,
        std::string const&                       identifier,
        uint64                                   sizeLimit
    );

    MCAPI ~DynamicPropertiesDefinition();

    MCAPI static void
    clearAll(std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>> const& definitionList);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canMergeDefinitions(
        class DynamicPropertiesDefinition const& other,
        std::string const&                       identifier,
        uint64                                   sizeLimit,
        std::string&                             error
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    MCAPI static uint64 const& ACTOR_TOTAL_DYNAMIC_PROPERTY_SIZE_LIMIT();

    MCAPI static uint64 const& IDENTIFIER_SIZE_LIMIT();

    MCAPI static uint64 const& WORLD_TOTAL_DYNAMIC_PROPERTY_SIZE_LIMIT();

    // NOLINTEND
};
