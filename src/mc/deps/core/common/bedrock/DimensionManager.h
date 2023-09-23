#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/dimension/DimensionDefinitionGroup.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class DimensionManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    DimensionManager& operator=(DimensionManager const&);
    DimensionManager(DimensionManager const&);
    DimensionManager();

public:
    // NOLINTBEGIN
    // symbol: ??1DimensionManager@@UEAA@XZ
    MCVAPI ~DimensionManager();

    // symbol:
    // ??0DimensionManager@@QEAA@V?$not_null@V?$NonOwnerPointer@VIDimensionFactory@@@Bedrock@@@gsl@@V?$optional@VDimensionDefinitionGroup@@@std@@@Z
    MCAPI
        DimensionManager(gsl::not_null<class Bedrock::NonOwnerPointer<class IDimensionFactory>>, std::optional<class DimensionDefinitionGroup>);

    // symbol: ?forEachDimension@DimensionManager@@QEAAXV?$function@$$A6A_NAEAVDimension@@@Z@std@@@Z
    MCAPI void forEachDimension(std::function<bool(class Dimension&)>);

    // symbol: ?forEachDimension@DimensionManager@@QEBAXV?$function@$$A6A_NAEBVDimension@@@Z@std@@@Z
    MCAPI void forEachDimension(std::function<bool(class Dimension const&)>) const;

    // symbol:
    // ?getDimension@DimensionManager@@QEBA?AV?$WeakRefT@U?$SharePtrRefTraits@VDimension@@@@@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>> getDimension(DimensionType) const;

    // symbol:
    // ?getDimensionDefinition@DimensionManager@@QEBA?AV?$optional@UDimensionDefinition@DimensionDefinitionGroup@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::optional<struct DimensionDefinitionGroup::DimensionDefinition>
          getDimensionDefinition(std::string const&) const;

    // symbol: ?getDimensionDefinitionGroup@DimensionManager@@QEBAAEBV?$optional@VDimensionDefinitionGroup@@@std@@XZ
    MCAPI std::optional<class DimensionDefinitionGroup> const& getDimensionDefinitionGroup() const;

    // symbol:
    // ?getOrCreateDimension@DimensionManager@@QEAA?AV?$WeakRefT@U?$SharePtrRefTraits@VDimension@@@@@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>> getOrCreateDimension(DimensionType);

    // symbol:
    // ?getRandomDimension@DimensionManager@@QEAA?AV?$WeakRefT@U?$SharePtrRefTraits@VDimension@@@@@@AEAVRandom@@@Z
    MCAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>> getRandomDimension(class Random&);

    // symbol: ?hasDimensions@DimensionManager@@QEBA_NXZ
    MCAPI bool hasDimensions() const;

    // symbol:
    // ?registerOnNewDimensionCreated@DimensionManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEAVDimension@@@Z@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription registerOnNewDimensionCreated(std::function<void(class Dimension&)>);

    // symbol: ?setDimensionDefinitionGroup@DimensionManager@@QEAAXV?$optional@VDimensionDefinitionGroup@@@std@@@Z
    MCAPI void setDimensionDefinitionGroup(std::optional<class DimensionDefinitionGroup>);

    // symbol: ?shutdown@DimensionManager@@QEAAXXZ
    MCAPI void shutdown();

    // NOLINTEND
};
