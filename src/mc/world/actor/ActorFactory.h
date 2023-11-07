#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/EntityRefTraits.h"
#include "mc/math/Vec2.h"
#include "mc/math/Vec3.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/entity/utilities/ActorType.h"

class ActorFactory {
public:
    // prevent constructor by default
    ActorFactory& operator=(ActorFactory const&);
    ActorFactory(ActorFactory const&);
    ActorFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorFactory@@UEAA@XZ
    virtual ~ActorFactory();

    // symbol: ??0ActorFactory@@QEAA@V?$not_null@V?$NonOwnerPointer@VLevel@@@Bedrock@@@gsl@@@Z
    MCAPI explicit ActorFactory(Bedrock::NotNullNonOwnerPtr<class Level>);

    // symbol:
    // ?applyEntityInitializer@ActorFactory@@QEBAXV?$unique_ptr@VActor@@U?$default_delete@VActor@@@std@@@std@@AEAVEntityContext@@@Z
    MCAPI void applyEntityInitializer(std::unique_ptr<class Actor>, class EntityContext&) const;

    // symbol:
    // ?buildSummonEntityTypeEnum@ActorFactory@@QEBA?AV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBUActorDefinitionIdentifier@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBUActorDefinitionIdentifier@@@std@@@2@@std@@AEBVExperiments@@@Z
    MCAPI std::vector<std::pair<std::string, struct ActorDefinitionIdentifier const*>>
          buildSummonEntityTypeEnum(class Experiments const&) const;

    // symbol: ?clearDefinitionGroup@ActorFactory@@QEAAXXZ
    MCAPI void clearDefinitionGroup();

    // symbol:
    // ?createActor@ActorFactory@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUActorDefinitionIdentifier@@PEAVActor@@AEBVVec3@@AEBVVec2@@@Z
    MCAPI class OwnerPtrT<struct EntityRefTraits> createActor(
        std::string const&                      method,
        struct ActorDefinitionIdentifier const& identifier,
        class Actor*                            spawner,
        class Vec3 const&                       pos,
        class Vec2 const&                       rot = Vec2::ZERO
    );

    // symbol:
    // ?createBornActor@ActorFactory@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBUActorDefinitionIdentifier@@PEAVActor@@@Z
    MCAPI class OwnerPtrT<struct EntityRefTraits>
    createBornActor(struct ActorDefinitionIdentifier const& identifier, class Actor* parent);

    // symbol:
    // ?createBornActor@ActorFactory@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@@Z
    MCAPI class OwnerPtrT<struct EntityRefTraits>
    createBornActor(struct ActorDefinitionIdentifier const& identifier, class BlockPos const& pos);

    // symbol:
    // ?createSpawnedActor@ActorFactory@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBUActorDefinitionIdentifier@@PEAVActor@@AEBVVec3@@AEBVVec2@@@Z
    MCAPI class OwnerPtrT<struct EntityRefTraits> createSpawnedActor(
        struct ActorDefinitionIdentifier const& identifier,
        class Actor*                            spawner,
        class Vec3 const&                       pos,
        class Vec2 const&                       rot = Vec2::ZERO
    );

    // symbol:
    // ?createSummonedActor@ActorFactory@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBUActorDefinitionIdentifier@@PEAVActor@@AEBVVec3@@@Z
    MCAPI class OwnerPtrT<struct EntityRefTraits> createSummonedActor(
        struct ActorDefinitionIdentifier const& identifier,
        class Actor*                            spawner,
        class Vec3 const&                       pos
    );

    // symbol:
    // ?createTransformedActor@ActorFactory@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBUActorDefinitionIdentifier@@PEAVActor@@@Z
    MCAPI class OwnerPtrT<struct EntityRefTraits>
    createTransformedActor(struct ActorDefinitionIdentifier const& identifier, class Actor* from);

    // symbol: ?getGoalFactory@ActorFactory@@QEAAAEAVActorGoalFactory@@XZ
    MCAPI class ActorGoalFactory& getGoalFactory();

    // symbol: ?init@ActorFactory@@QEAAXAEBVExperiments@@@Z
    MCAPI void init(class Experiments const&);

    // symbol: ?loadActor@ActorFactory@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@PEAVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI class OwnerPtrT<struct EntityRefTraits> loadActor(class CompoundTag*, class DataLoadHelper&);

    // symbol:
    // ?loadActor@ActorFactory@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@PEAVCompoundTag@@AEAVDataLoadHelper@@AEBVDimensionHeightRange@@@Z
    MCAPI class OwnerPtrT<struct EntityRefTraits>
    loadActor(class CompoundTag*, class DataLoadHelper&, class DimensionHeightRange const&);

    // symbol:
    // ?loadActor@ActorFactory@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@PEAVCompoundTag@@AEAVDataLoadHelper@@AEBVDimensionHeightRange@@PEBVLevelChunk@@@Z
    MCAPI class OwnerPtrT<struct EntityRefTraits>
    loadActor(class CompoundTag*, class DataLoadHelper&, class DimensionHeightRange const&, class LevelChunk const*);

    // symbol: ?lookupEntityType@ActorFactory@@QEBA?AW4ActorType@@AEBUActorDefinitionIdentifier@@@Z
    MCAPI ::ActorType lookupEntityType(struct ActorDefinitionIdentifier const&) const;

    // symbol: ?setDefinitionGroup@ActorFactory@@QEAAXPEAVActorDefinitionGroup@@@Z
    MCAPI void setDefinitionGroup(class ActorDefinitionGroup*);

    // symbol: ?setEntityInitializer@ActorFactory@@QEAAXV?$shared_ptr@VIEntityInitializer@@@std@@@Z
    MCAPI void setEntityInitializer(std::shared_ptr<class IEntityInitializer>);

    // symbol: ?clearEntityMappings@ActorFactory@@SAXXZ
    MCAPI static void clearEntityMappings();

    // symbol:
    // ?fillFactoryData@ActorFactory@@SAXAEBUActorDefinitionIdentifier@@0AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorFactoryData@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorFactoryData@@@std@@@2@@std@@AEAUActorFactoryData@@@Z
    MCAPI static void
    fillFactoryData(struct ActorDefinitionIdentifier const&, struct ActorDefinitionIdentifier const&, std::unordered_map<std::string, struct ActorFactoryData> const&, struct ActorFactoryData&);

    // symbol: ?fixLegacyEntity@ActorFactory@@SAPEAVActor@@AEAVBlockSource@@PEBVCompoundTag@@@Z
    MCAPI static class Actor* fixLegacyEntity(class BlockSource&, class CompoundTag const*);

    // symbol:
    // ?registerEntityMapping@ActorFactory@@SAXAEBW4ActorType@@_NAEBQ6A?AV?$unique_ptr@VActor@@U?$default_delete@VActor@@@std@@@std@@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@ZV?$optional@H@4@@Z
    MCAPI static void
    registerEntityMapping(::ActorType const&, bool, std::unique_ptr<class Actor> (*const&)(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&), std::optional<int>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_buildSummonableActorList@ActorFactory@@AEBAXAEBVExperiments@@V?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUActorFactoryData@@@Z@std@@@Z
    MCAPI void
    _buildSummonableActorList(class Experiments const&, std::function<void(std::string const&, struct ActorFactoryData const&)>)
        const;

    // symbol:
    // ?_constructActor@ActorFactory@@AEBA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBUActorDefinitionIdentifier@@AEBVVec3@@AEBVVec2@@PEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI class OwnerPtrT<struct EntityRefTraits>
    _constructActor(struct ActorDefinitionIdentifier const&, class Vec3 const&, class Vec2 const&, std::vector<std::string> const*)
        const;

    // symbol: ?_loadDefinitionGroups@ActorFactory@@AEAAXPEAVActorDefinitionGroup@@@Z
    MCAPI void _loadDefinitionGroups(class ActorDefinitionGroup*);

    // symbol: ?_loadDefinitionsHelper@ActorFactory@@AEAAXXZ
    MCAPI void _loadDefinitionsHelper();

    // symbol:
    // ?_validateActorData@ActorFactory@@AEBA_NAEAVCompoundTag@@AEAUActorDefinitionIdentifier@@AEAVVec3@@PEBVLevelChunk@@@Z
    MCAPI bool
    _validateActorData(class CompoundTag&, struct ActorDefinitionIdentifier&, class Vec3&, class LevelChunk const*)
        const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?builtinEntityMappings@ActorFactory@@0V?$vector@UVanillaActorData@@V?$allocator@UVanillaActorData@@@std@@@std@@A
    MCAPI static std::vector<struct VanillaActorData> builtinEntityMappings;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $builtinEntityMappings() { return builtinEntityMappings; }

    // NOLINTEND
};
