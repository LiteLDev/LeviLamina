#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/wrapper/OwnerPtr.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/common/wrapper/WeakRef.h"
#include "mc/world/AutomaticID.h"
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
    // symbol:
    // ??0DimensionManager@@QEAA@AEBV?$not_null@V?$StackRefResult@VIDimensionFactory@@@@@gsl@@V?$optional@VDimensionDefinitionGroup@@@std@@@Z
    MCAPI
    DimensionManager(gsl::not_null<class StackRefResult<class IDimensionFactory>> const&, std::optional<class DimensionDefinitionGroup>);

    // symbol: ?forEachDimension@DimensionManager@@QEAAXV?$function@$$A6A_NAEAVDimension@@@Z@std@@@Z
    MCAPI void forEachDimension(std::function<bool(class Dimension&)> callback);

    // symbol: ?forEachDimension@DimensionManager@@QEBAXV?$function@$$A6A_NAEBVDimension@@@Z@std@@@Z
    MCAPI void forEachDimension(std::function<bool(class Dimension const&)> callback) const;

    // symbol: ?getDimension@DimensionManager@@QEBA?AV?$WeakRef@VDimension@@@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI class WeakRef<class Dimension> getDimension(DimensionType dimensionType) const;

    // symbol:
    // ?getDimensionDefinition@DimensionManager@@QEBA?AV?$optional@UDimensionDefinition@DimensionDefinitionGroup@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::optional<struct DimensionDefinitionGroup::DimensionDefinition>
          getDimensionDefinition(std::string const&) const;

    // symbol: ?getDimensionDefinitionGroup@DimensionManager@@QEBAAEBV?$optional@VDimensionDefinitionGroup@@@std@@XZ
    MCAPI std::optional<class DimensionDefinitionGroup> const& getDimensionDefinitionGroup() const;

    // symbol: ?getOrCreateDimension@DimensionManager@@QEAA?AV?$WeakRef@VDimension@@@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI class WeakRef<class Dimension> getOrCreateDimension(DimensionType dimensionType);

    // symbol: ?getRandomDimension@DimensionManager@@QEAA?AV?$WeakRef@VDimension@@@@AEAVRandom@@@Z
    MCAPI class WeakRef<class Dimension> getRandomDimension(class Random& random);

    // symbol: ?hasDimensions@DimensionManager@@QEBA_NXZ
    MCAPI bool hasDimensions() const;

    // symbol:
    // ?registerOnNewDimensionCreated@DimensionManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEAVDimension@@@Z@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription
    registerOnNewDimensionCreated(std::function<void(class Dimension&)> callback);

    // symbol: ?setDimensionDefinitionGroup@DimensionManager@@QEAAXV?$optional@VDimensionDefinitionGroup@@@std@@@Z
    MCAPI void setDimensionDefinitionGroup(std::optional<class DimensionDefinitionGroup>);

    // symbol: ?shutdown@DimensionManager@@QEAAXXZ
    MCAPI void shutdown();

    // symbol: ??1DimensionManager@@QEAA@XZ
    MCAPI ~DimensionManager();

    // NOLINTEND
};
