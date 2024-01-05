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
        // symbol: ?setNeverClientSide@NetSerializationCallbacks@ComponentNetRelevancyRegistry@@QEAAAEAU12@XZ
        MCAPI struct ComponentNetRelevancyRegistry::NetSerializationCallbacks& setNeverClientSide();

        // symbol: ?setNeverServerSide@NetSerializationCallbacks@ComponentNetRelevancyRegistry@@QEAAAEAU12@XZ
        MCAPI struct ComponentNetRelevancyRegistry::NetSerializationCallbacks& setNeverServerSide();

        // symbol: ??1NetSerializationCallbacks@ComponentNetRelevancyRegistry@@QEAA@XZ
        MCAPI ~NetSerializationCallbacks();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ComponentNetRelevancyRegistry& operator=(ComponentNetRelevancyRegistry const&);
    ComponentNetRelevancyRegistry(ComponentNetRelevancyRegistry const&);
    ComponentNetRelevancyRegistry();

public:
    // NOLINTBEGIN
    // symbol: ?getFilteredDefinitionsForServer@ComponentNetRelevancyRegistry@@QEBA?AVDefinitionInstanceGroup@@AEBV2@@Z
    MCAPI class DefinitionInstanceGroup
    getFilteredDefinitionsForServer(class DefinitionInstanceGroup const& definitionGroup) const;

    // symbol:
    // ?registerNetSerialization@ComponentNetRelevancyRegistry@@QEAAAEAUNetSerializationCallbacks@1@AEBVHashedString@@V?$function@$$A6A_NAEBVDefinitionInstanceGroup@@AEAVCompoundTag@@@Z@std@@@Z
    MCAPI struct ComponentNetRelevancyRegistry::NetSerializationCallbacks&
    registerNetSerialization(class HashedString const& definitionName, std::function<bool(class DefinitionInstanceGroup const&, class CompoundTag&)>);

    // symbol:
    // ?serializeComponentDefinitionsForClient@ComponentNetRelevancyRegistry@@QEBA_NAEBVDefinitionInstanceGroup@@AEAVCompoundTag@@@Z
    MCAPI bool serializeComponentDefinitionsForClient(
        class DefinitionInstanceGroup const& definitionGroup,
        class CompoundTag&                   tag
    ) const;

    // symbol: ??1ComponentNetRelevancyRegistry@@QEAA@XZ
    MCAPI ~ComponentNetRelevancyRegistry();

    // NOLINTEND
};
