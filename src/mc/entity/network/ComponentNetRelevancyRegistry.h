#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ComponentNetRelevancyRegistry {
public:
    // ComponentNetRelevancyRegistry inner types declare
    // clang-format off
    struct NetSerializationCallbacks;
    // clang-format on

    // ComponentNetRelevancyRegistry inner types define
    struct NetSerializationCallbacks {
    public:
        // prevent constructor by default
        NetSerializationCallbacks& operator=(NetSerializationCallbacks const&);
        NetSerializationCallbacks(NetSerializationCallbacks const&);
        NetSerializationCallbacks();

    public:
        // NOLINTBEGIN
        MCAPI struct ComponentNetRelevancyRegistry::NetSerializationCallbacks& setNeverClientSide();

        MCAPI struct ComponentNetRelevancyRegistry::NetSerializationCallbacks& setNeverServerSide();

        MCAPI ~NetSerializationCallbacks();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ComponentNetRelevancyRegistry& operator=(ComponentNetRelevancyRegistry const&);
    ComponentNetRelevancyRegistry(ComponentNetRelevancyRegistry const&);
    ComponentNetRelevancyRegistry();

public:
    // NOLINTBEGIN
    MCAPI class DefinitionInstanceGroup
    getFilteredDefinitionsForServer(class DefinitionInstanceGroup const& definitionGroup) const;

    MCAPI struct ComponentNetRelevancyRegistry::NetSerializationCallbacks& registerNetSerialization(
        class HashedString const&                                                     definitionName,
        std::function<bool(class DefinitionInstanceGroup const&, class CompoundTag&)> serializationCallback
    );

    MCAPI bool serializeComponentDefinitionsForClient(
        class DefinitionInstanceGroup const& definitionGroup,
        class CompoundTag&                   tag
    ) const;

    MCAPI ~ComponentNetRelevancyRegistry();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
