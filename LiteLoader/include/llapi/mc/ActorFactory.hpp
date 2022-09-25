/**
 * @file  ActorFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorFactory.
 *
 */
class ActorFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORFACTORY
public:
    class ActorFactory& operator=(class ActorFactory const &) = delete;
    ActorFactory(class ActorFactory const &) = delete;
    ActorFactory() = delete;
#endif

public:
    /**
     * @hash   -890633314
     * @symbol ??0ActorFactory@@QEAA@V?$not_null@V?$NonOwnerPointer@VLevel@@@Bedrock@@@gsl@@@Z
     */
    MCAPI ActorFactory(class gsl::not_null<class Bedrock::NonOwnerPointer<class Level>>);
    /**
     * @hash   -241295705
     * @symbol ?applyEntityInitializer@ActorFactory@@QEBAXAEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI void applyEntityInitializer(struct ActorDefinitionIdentifier const &, class EntityContext &) const;
    /**
     * @hash   1462764178
     * @symbol ?buildSummonEntityTypeEnum@ActorFactory@@QEBA?AV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBUActorDefinitionIdentifier@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBUActorDefinitionIdentifier@@@std@@@2@@std@@AEBVExperiments@@@Z
     */
    MCAPI std::vector<struct std::pair<std::string, struct ActorDefinitionIdentifier const *>> buildSummonEntityTypeEnum(class Experiments const &) const;
    /**
     * @hash   342720053
     * @symbol ?clearDefinitionGroup@ActorFactory@@QEAAXXZ
     */
    MCAPI void clearDefinitionGroup();
    /**
     * @hash   -1780061159
     * @symbol ?createActor@ActorFactory@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUActorDefinitionIdentifier@@PEAVActor@@AEBVVec3@@AEBVVec2@@@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createActor(std::string const &, struct ActorDefinitionIdentifier const &, class Actor *, class Vec3 const &, class Vec2 const &);
    /**
     * @hash   994797689
     * @symbol ?createBornActor@ActorFactory@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBUActorDefinitionIdentifier@@AEBVBlockPos@@@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createBornActor(struct ActorDefinitionIdentifier const &, class BlockPos const &);
    /**
     * @hash   -236430110
     * @symbol ?createBornActor@ActorFactory@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBUActorDefinitionIdentifier@@PEAVActor@@@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createBornActor(struct ActorDefinitionIdentifier const &, class Actor *);
    /**
     * @hash   -1862608920
     * @symbol ?createSpawnedActor@ActorFactory@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBUActorDefinitionIdentifier@@PEAVActor@@AEBVVec3@@AEBVVec2@@@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createSpawnedActor(struct ActorDefinitionIdentifier const &, class Actor *, class Vec3 const &, class Vec2 const &);
    /**
     * @hash   -1992334263
     * @symbol ?createSummonedActor@ActorFactory@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBUActorDefinitionIdentifier@@PEAVActor@@AEBVVec3@@@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createSummonedActor(struct ActorDefinitionIdentifier const &, class Actor *, class Vec3 const &);
    /**
     * @hash   -376518988
     * @symbol ?createTransformedActor@ActorFactory@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBUActorDefinitionIdentifier@@PEAVActor@@@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createTransformedActor(struct ActorDefinitionIdentifier const &, class Actor *);
    /**
     * @hash   943999824
     * @symbol ?getGoalFactory@ActorFactory@@QEAAAEAVActorGoalFactory@@XZ
     */
    MCAPI class ActorGoalFactory & getGoalFactory();
    /**
     * @hash   -1014173164
     * @symbol ?init@ActorFactory@@QEAAXAEBVExperiments@@@Z
     */
    MCAPI void init(class Experiments const &);
    /**
     * @hash   -1171398645
     * @symbol ?loadActor@ActorFactory@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@PEAVCompoundTag@@AEAVDataLoadHelper@@AEBVDimensionHeightRange@@PEBVLevelChunk@@@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> loadActor(class CompoundTag *, class DataLoadHelper &, class DimensionHeightRange const &, class LevelChunk const *);
    /**
     * @hash   -898466417
     * @symbol ?setDefinitionGroup@ActorFactory@@QEAAXPEAVActorDefinitionGroup@@@Z
     */
    MCAPI void setDefinitionGroup(class ActorDefinitionGroup *);
    /**
     * @hash   -1890059959
     * @symbol ?setEntityInitializer@ActorFactory@@QEAAXV?$shared_ptr@VIEntityInitializer@@@std@@@Z
     */
    MCAPI void setEntityInitializer(class std::shared_ptr<class IEntityInitializer>);
    /**
     * @hash   -1276309137
     * @symbol ??1ActorFactory@@QEAA@XZ
     */
    MCAPI ~ActorFactory();
    /**
     * @hash   -1533183279
     * @symbol ?clearEntityMappings@ActorFactory@@SAXXZ
     */
    MCAPI static void clearEntityMappings();
    /**
     * @hash   540374778
     * @symbol ?fixLegacyEntity@ActorFactory@@SAPEAVActor@@AEAVBlockSource@@PEBVCompoundTag@@@Z
     */
    MCAPI static class Actor * fixLegacyEntity(class BlockSource &, class CompoundTag const *);
    /**
     * @hash   1050669482
     * @symbol ?registerEntityMapping@ActorFactory@@SAXAEBW4ActorType@@_NAEBQ6A?AV?$unique_ptr@VActor@@U?$default_delete@VActor@@@std@@@std@@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@ZV?$optional@H@4@@Z
     */
    MCAPI static void registerEntityMapping(enum ActorType const &, bool, std::unique_ptr<class Actor> ( *const &)(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &), class std::optional<int>);

//private:
    /**
     * @hash   -34578170
     * @symbol ?_buildSummonableActorList@ActorFactory@@AEBAXAEBVExperiments@@V?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUActorFactoryData@@@Z@std@@@Z
     */
    MCAPI void _buildSummonableActorList(class Experiments const &, class std::function<void (std::string const &, struct ActorFactoryData const &)>) const;
    /**
     * @hash   -1173342110
     * @symbol ?_constructActor@ActorFactory@@AEBA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBUActorDefinitionIdentifier@@AEBVVec3@@AEBVVec2@@PEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> _constructActor(struct ActorDefinitionIdentifier const &, class Vec3 const &, class Vec2 const &, std::vector<std::string> const *) const;
    /**
     * @hash   -792283218
     * @symbol ?_loadDefinitionGroups@ActorFactory@@AEAAXPEAVActorDefinitionGroup@@@Z
     */
    MCAPI void _loadDefinitionGroups(class ActorDefinitionGroup *);
    /**
     * @hash   -91328416
     * @symbol ?_loadDefinitionsHelper@ActorFactory@@AEAAXXZ
     */
    MCAPI void _loadDefinitionsHelper();
    /**
     * @hash   1675685674
     * @symbol ?_validateActorData@ActorFactory@@AEBA_NAEAVCompoundTag@@AEAUActorDefinitionIdentifier@@AEAVVec3@@PEBVLevelChunk@@@Z
     */
    MCAPI bool _validateActorData(class CompoundTag &, struct ActorDefinitionIdentifier &, class Vec3 &, class LevelChunk const *) const;

private:
    /**
     * @hash   -1841269643
     * @symbol ?builtinEntityMappings@ActorFactory@@0V?$vector@UVanillaActorData@@V?$allocator@UVanillaActorData@@@std@@@std@@A
     */
    MCAPI static std::vector<struct VanillaActorData> builtinEntityMappings;

};