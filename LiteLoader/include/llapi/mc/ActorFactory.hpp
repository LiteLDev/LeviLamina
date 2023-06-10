/**
 * @file  ActorFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol ??0ActorFactory\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VLevel\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI ActorFactory(class gsl::not_null<class Bedrock::NonOwnerPointer<class Level>>);
    /**
     * @symbol ?applyEntityInitializer\@ActorFactory\@\@QEBAXV?$unique_ptr\@VActor\@\@U?$default_delete\@VActor\@\@\@std\@\@\@std\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI void applyEntityInitializer(std::unique_ptr<class Actor>, class EntityContext &) const;
    /**
     * @symbol ?buildSummonEntityTypeEnum\@ActorFactory\@\@QEBA?AV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBUActorDefinitionIdentifier\@\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBUActorDefinitionIdentifier\@\@\@std\@\@\@2\@\@std\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI std::vector<struct std::pair<std::string, struct ActorDefinitionIdentifier const *>> buildSummonEntityTypeEnum(class Experiments const &) const;
    /**
     * @symbol ?clearDefinitionGroup\@ActorFactory\@\@QEAAXXZ
     */
    MCAPI void clearDefinitionGroup();
    /**
     * @symbol ?createActor\@ActorFactory\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUActorDefinitionIdentifier\@\@PEAVActor\@\@AEBVVec3\@\@AEBVVec2\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createActor(std::string const &, struct ActorDefinitionIdentifier const &, class Actor *, class Vec3 const &, class Vec2 const &);
    /**
     * @symbol ?createBornActor\@ActorFactory\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBUActorDefinitionIdentifier\@\@PEAVActor\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createBornActor(struct ActorDefinitionIdentifier const &, class Actor *);
    /**
     * @symbol ?createBornActor\@ActorFactory\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBUActorDefinitionIdentifier\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createBornActor(struct ActorDefinitionIdentifier const &, class BlockPos const &);
    /**
     * @symbol ?createSpawnedActor\@ActorFactory\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBUActorDefinitionIdentifier\@\@PEAVActor\@\@AEBVVec3\@\@AEBVVec2\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createSpawnedActor(struct ActorDefinitionIdentifier const &, class Actor *, class Vec3 const &, class Vec2 const &);
    /**
     * @symbol ?createSummonedActor\@ActorFactory\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBUActorDefinitionIdentifier\@\@PEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createSummonedActor(struct ActorDefinitionIdentifier const &, class Actor *, class Vec3 const &);
    /**
     * @symbol ?createTransformedActor\@ActorFactory\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBUActorDefinitionIdentifier\@\@PEAVActor\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createTransformedActor(struct ActorDefinitionIdentifier const &, class Actor *);
    /**
     * @symbol ?getGoalFactory\@ActorFactory\@\@QEAAAEAVActorGoalFactory\@\@XZ
     */
    MCAPI class ActorGoalFactory & getGoalFactory();
    /**
     * @symbol ?init\@ActorFactory\@\@QEAAXAEBVExperiments\@\@\@Z
     */
    MCAPI void init(class Experiments const &);
    /**
     * @symbol ?loadActor\@ActorFactory\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@PEAVCompoundTag\@\@AEAVDataLoadHelper\@\@AEBVDimensionHeightRange\@\@PEBVLevelChunk\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> loadActor(class CompoundTag *, class DataLoadHelper &, class DimensionHeightRange const &, class LevelChunk const *);
    /**
     * @symbol ?lookupEntityType\@ActorFactory\@\@QEBA?AW4ActorType\@\@AEBUActorDefinitionIdentifier\@\@\@Z
     */
    MCAPI enum class ActorType lookupEntityType(struct ActorDefinitionIdentifier const &) const;
    /**
     * @symbol ?setDefinitionGroup\@ActorFactory\@\@QEAAXPEAVActorDefinitionGroup\@\@\@Z
     */
    MCAPI void setDefinitionGroup(class ActorDefinitionGroup *);
    /**
     * @symbol ?setEntityInitializer\@ActorFactory\@\@QEAAXV?$shared_ptr\@VIEntityInitializer\@\@\@std\@\@\@Z
     */
    MCAPI void setEntityInitializer(class std::shared_ptr<class IEntityInitializer>);
    /**
     * @symbol ??1ActorFactory\@\@QEAA\@XZ
     */
    MCAPI ~ActorFactory();
    /**
     * @symbol ?clearEntityMappings\@ActorFactory\@\@SAXXZ
     */
    MCAPI static void clearEntityMappings();
    /**
     * @symbol ?fillFactoryData\@ActorFactory\@\@SAXAEBUActorDefinitionIdentifier\@\@0AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorFactoryData\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorFactoryData\@\@\@std\@\@\@2\@\@std\@\@AEAUActorFactoryData\@\@\@Z
     */
    MCAPI static void fillFactoryData(struct ActorDefinitionIdentifier const &, struct ActorDefinitionIdentifier const &, class std::unordered_map<std::string, struct ActorFactoryData, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, struct ActorFactoryData>>> const &, struct ActorFactoryData &);
    /**
     * @symbol ?fixLegacyEntity\@ActorFactory\@\@SAPEAVActor\@\@AEAVBlockSource\@\@PEBVCompoundTag\@\@\@Z
     */
    MCAPI static class Actor * fixLegacyEntity(class BlockSource &, class CompoundTag const *);
    /**
     * @symbol ?registerEntityMapping\@ActorFactory\@\@SAXAEBW4ActorType\@\@_NAEBQ6A?AV?$unique_ptr\@VActor\@\@U?$default_delete\@VActor\@\@\@std\@\@\@std\@\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@ZV?$optional\@H\@4\@\@Z
     */
    MCAPI static void registerEntityMapping(enum class ActorType const &, bool, std::unique_ptr<class Actor> ( *const &)(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &), class std::optional<int>);

//private:
    /**
     * @symbol ?_buildSummonableActorList\@ActorFactory\@\@AEBAXAEBVExperiments\@\@V?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUActorFactoryData\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void _buildSummonableActorList(class Experiments const &, class std::function<void (std::string const &, struct ActorFactoryData const &)>) const;
    /**
     * @symbol ?_constructActor\@ActorFactory\@\@AEBA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBUActorDefinitionIdentifier\@\@AEBVVec3\@\@AEBVVec2\@\@PEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> _constructActor(struct ActorDefinitionIdentifier const &, class Vec3 const &, class Vec2 const &, std::vector<std::string> const *) const;
    /**
     * @symbol ?_loadDefinitionGroups\@ActorFactory\@\@AEAAXPEAVActorDefinitionGroup\@\@\@Z
     */
    MCAPI void _loadDefinitionGroups(class ActorDefinitionGroup *);
    /**
     * @symbol ?_loadDefinitionsHelper\@ActorFactory\@\@AEAAXXZ
     */
    MCAPI void _loadDefinitionsHelper();
    /**
     * @symbol ?_validateActorData\@ActorFactory\@\@AEBA_NAEAVCompoundTag\@\@AEAUActorDefinitionIdentifier\@\@AEAVVec3\@\@PEBVLevelChunk\@\@\@Z
     */
    MCAPI bool _validateActorData(class CompoundTag &, struct ActorDefinitionIdentifier &, class Vec3 &, class LevelChunk const *) const;

private:
    /**
     * @symbol ?builtinEntityMappings\@ActorFactory\@\@0V?$vector\@UVanillaActorData\@\@V?$allocator\@UVanillaActorData\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::vector<struct VanillaActorData> builtinEntityMappings;

};
