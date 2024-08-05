#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/common/wrapper/WeakRef.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/dimension/DimensionDefinitionGroup.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class DimensionManager {
public:
    // prevent constructor by default
    DimensionManager& operator=(DimensionManager const&);
    DimensionManager(DimensionManager const&);
    DimensionManager();

public:
    // NOLINTBEGIN
    MCAPI
    DimensionManager(gsl::not_null<class StackRefResult<class IDimensionFactory>> const&, std::optional<class DimensionDefinitionGroup>);

    MCAPI void forEachDimension(std::function<bool(class Dimension&)> callback);

    MCAPI void forEachDimension(std::function<bool(class Dimension const&)> callback) const;

    MCAPI class WeakRef<class Dimension> getDimension(DimensionType dimensionType) const;

    MCAPI std::optional<struct DimensionDefinitionGroup::DimensionDefinition>
          getDimensionDefinition(std::string const&) const;

    MCAPI std::optional<class DimensionDefinitionGroup> const& getDimensionDefinitionGroup() const;

    MCAPI class WeakRef<class Dimension> getOrCreateDimension(DimensionType dimensionType);

    MCAPI class WeakRef<class Dimension> getRandomDimension(class Random& random);

    MCAPI bool hasDimensions() const;

    MCAPI class Bedrock::PubSub::Subscription
    registerOnNewDimensionCreated(std::function<void(class Dimension&)> callback);

    MCAPI void setDimensionDefinitionGroup(std::optional<class DimensionDefinitionGroup>);

    MCAPI void shutdown();

    MCAPI ~DimensionManager();

    // NOLINTEND
};
