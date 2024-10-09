#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/dimension/DimensionDefinitionGroup.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on
class IDimensionFactory;

class DimensionManager {
public:
    std::unordered_map<DimensionType, OwnerPtr<Dimension>> mDimensions;
    Bedrock::NotNullNonOwnerPtr<IDimensionFactory>         mDimensionFactory;
    // Bedrock::PubSub::Publisher<void (Dimension &),Bedrock::PubSub::ThreadModel::MultiThreaded>
    // mOnNewDimensionCreatedPublisher;
    char                                    unk[128];
    std::optional<DimensionDefinitionGroup> mDimensionDefinitions;

    // prevent constructor by default
    DimensionManager& operator=(DimensionManager const&);
    DimensionManager(DimensionManager const&);
    DimensionManager();

public:
    // NOLINTBEGIN
    MCAPI DimensionManager(
        gsl::not_null<class StackRefResult<class IDimensionFactory>> const& dimensionFactory,
        std::optional<class DimensionDefinitionGroup>                       dimensionDefinitions
    );

    MCAPI void forEachDimension(std::function<bool(class Dimension&)> callback);

    MCAPI void forEachDimension(std::function<bool(class Dimension const&)> callback) const;

    MCAPI class WeakRef<class Dimension> getDimension(DimensionType dimensionType) const;

    MCAPI std::optional<struct DimensionDefinitionGroup::DimensionDefinition>
          getDimensionDefinition(std::string const& dimensionName) const;

    MCAPI std::optional<class DimensionDefinitionGroup> const& getDimensionDefinitionGroup() const;

    MCAPI class WeakRef<class Dimension> getOrCreateDimension(DimensionType dimensionType);

    MCAPI class WeakRef<class Dimension> getRandomDimension(class Random& random);

    MCAPI bool hasDimensions() const;

    MCAPI class Bedrock::PubSub::Subscription
    registerOnNewDimensionCreated(std::function<void(class Dimension&)> callback);

    MCAPI void setDimensionDefinitionGroup(std::optional<class DimensionDefinitionGroup> dimensionDefinitions);

    MCAPI void shutdown();

    MCAPI ~DimensionManager();

    // NOLINTEND
};
