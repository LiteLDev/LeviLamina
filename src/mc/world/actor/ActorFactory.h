#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class ActorFactory {

public:
    // prevent constructor by default
    ActorFactory& operator=(ActorFactory const&) = delete;
    ActorFactory(ActorFactory const&)            = delete;
    ActorFactory()                               = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorFactory(); // NOLINT
#endif
    /**
     * @symbol ??0ActorFactory\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VLevel\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI ActorFactory(class gsl::not_null<class Bedrock::NonOwnerPointer<class Level>>); // NOLINT
    /**
     * @symbol
     * ?applyEntityInitializer\@ActorFactory\@\@QEBAXV?$unique_ptr\@VActor\@\@U?$default_delete\@VActor\@\@\@std\@\@\@std\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI void applyEntityInitializer(std::unique_ptr<class Actor>, class EntityContext&) const; // NOLINT
    /**
     * @symbol
     * ?buildSummonEntityTypeEnum\@ActorFactory\@\@QEBA?AV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBUActorDefinitionIdentifier\@\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBUActorDefinitionIdentifier\@\@\@std\@\@\@2\@\@std\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI std::vector<struct std::pair<std::string, struct ActorDefinitionIdentifier const*>>
          buildSummonEntityTypeEnum(class Experiments const&) const; // NOLINT
    /**
     * @symbol ?clearDefinitionGroup\@ActorFactory\@\@QEAAXXZ
     */
    MCAPI void clearDefinitionGroup(); // NOLINT
    /**
     * @symbol
     * ?createActor\@ActorFactory\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUActorDefinitionIdentifier\@\@PEAVActor\@\@AEBVVec3\@\@AEBVVec2\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits>
    createActor(std::string const&, struct ActorDefinitionIdentifier const&, class Actor*, class Vec3 const&, class Vec2 const&); // NOLINT
    /**
     * @symbol
     * ?createBornActor\@ActorFactory\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBUActorDefinitionIdentifier\@\@PEAVActor\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits>
    createBornActor(struct ActorDefinitionIdentifier const&, class Actor*); // NOLINT
    /**
     * @symbol
     * ?createBornActor\@ActorFactory\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBUActorDefinitionIdentifier\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits>
    createBornActor(struct ActorDefinitionIdentifier const&, class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?createSpawnedActor\@ActorFactory\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBUActorDefinitionIdentifier\@\@PEAVActor\@\@AEBVVec3\@\@AEBVVec2\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits>
    createSpawnedActor(struct ActorDefinitionIdentifier const&, class Actor*, class Vec3 const&, class Vec2 const&); // NOLINT
    /**
     * @symbol
     * ?createSummonedActor\@ActorFactory\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBUActorDefinitionIdentifier\@\@PEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits>
    createSummonedActor(struct ActorDefinitionIdentifier const&, class Actor*, class Vec3 const&); // NOLINT
    /**
     * @symbol
     * ?createTransformedActor\@ActorFactory\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBUActorDefinitionIdentifier\@\@PEAVActor\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits>
    createTransformedActor(struct ActorDefinitionIdentifier const&, class Actor*); // NOLINT
    /**
     * @symbol ?getGoalFactory\@ActorFactory\@\@QEAAAEAVActorGoalFactory\@\@XZ
     */
    MCAPI class ActorGoalFactory& getGoalFactory(); // NOLINT
    /**
     * @symbol ?init\@ActorFactory\@\@QEAAXAEBVExperiments\@\@\@Z
     */
    MCAPI void init(class Experiments const&); // NOLINT
    /**
     * @symbol
     * ?loadActor\@ActorFactory\@\@QEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@PEAVCompoundTag\@\@AEAVDataLoadHelper\@\@AEBVDimensionHeightRange\@\@PEBVLevelChunk\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits>
    loadActor(class CompoundTag*, class DataLoadHelper&, class DimensionHeightRange const&, class LevelChunk const*); // NOLINT
    /**
     * @symbol ?lookupEntityType\@ActorFactory\@\@QEBA?AW4ActorType\@\@AEBUActorDefinitionIdentifier\@\@\@Z
     */
    MCAPI enum class ActorType lookupEntityType(struct ActorDefinitionIdentifier const&) const; // NOLINT
    /**
     * @symbol ?setDefinitionGroup\@ActorFactory\@\@QEAAXPEAVActorDefinitionGroup\@\@\@Z
     */
    MCAPI void setDefinitionGroup(class ActorDefinitionGroup*); // NOLINT
    /**
     * @symbol ?setEntityInitializer\@ActorFactory\@\@QEAAXV?$shared_ptr\@VIEntityInitializer\@\@\@std\@\@\@Z
     */
    MCAPI void setEntityInitializer(class std::shared_ptr<class IEntityInitializer>); // NOLINT
    /**
     * @symbol ?clearEntityMappings\@ActorFactory\@\@SAXXZ
     */
    MCAPI static void clearEntityMappings(); // NOLINT
    /**
     * @symbol
     * ?fillFactoryData\@ActorFactory\@\@SAXAEBUActorDefinitionIdentifier\@\@0AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorFactoryData\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorFactoryData\@\@\@std\@\@\@2\@\@std\@\@AEAUActorFactoryData\@\@\@Z
     */
    MCAPI static void
    fillFactoryData(struct ActorDefinitionIdentifier const&, struct ActorDefinitionIdentifier const&, class std::unordered_map<std::string, struct ActorFactoryData, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, struct ActorFactoryData>>> const&, struct ActorFactoryData&); // NOLINT
    /**
     * @symbol ?fixLegacyEntity\@ActorFactory\@\@SAPEAVActor\@\@AEAVBlockSource\@\@PEBVCompoundTag\@\@\@Z
     */
    MCAPI static class Actor* fixLegacyEntity(class BlockSource&, class CompoundTag const*); // NOLINT
    /**
     * @symbol
     * ?registerEntityMapping\@ActorFactory\@\@SAXAEBW4ActorType\@\@_NAEBQ6A?AV?$unique_ptr\@VActor\@\@U?$default_delete\@VActor\@\@\@std\@\@\@std\@\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@ZV?$optional\@H\@4\@\@Z
     */
    MCAPI static void
    registerEntityMapping(enum class ActorType const&, bool, std::unique_ptr<class Actor> (*const&)(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&), class std::optional<int>); // NOLINT

    // private:
    /**
     * @symbol
     * ?_buildSummonableActorList\@ActorFactory\@\@AEBAXAEBVExperiments\@\@V?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUActorFactoryData\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
    _buildSummonableActorList(class Experiments const&, class std::function<void(std::string const&, struct ActorFactoryData const&)>)
        const; // NOLINT
    /**
     * @symbol
     * ?_constructActor\@ActorFactory\@\@AEBA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBUActorDefinitionIdentifier\@\@AEBVVec3\@\@AEBVVec2\@\@PEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits>
    _constructActor(struct ActorDefinitionIdentifier const&, class Vec3 const&, class Vec2 const&, std::vector<std::string> const*)
        const; // NOLINT
    /**
     * @symbol ?_loadDefinitionGroups\@ActorFactory\@\@AEAAXPEAVActorDefinitionGroup\@\@\@Z
     */
    MCAPI void _loadDefinitionGroups(class ActorDefinitionGroup*); // NOLINT
    /**
     * @symbol ?_loadDefinitionsHelper\@ActorFactory\@\@AEAAXXZ
     */
    MCAPI void _loadDefinitionsHelper(); // NOLINT
    /**
     * @symbol
     * ?_validateActorData\@ActorFactory\@\@AEBA_NAEAVCompoundTag\@\@AEAUActorDefinitionIdentifier\@\@AEAVVec3\@\@PEBVLevelChunk\@\@\@Z
     */
    MCAPI bool
    _validateActorData(class CompoundTag&, struct ActorDefinitionIdentifier&, class Vec3&, class LevelChunk const*)
        const; // NOLINT

private:
    /**
     * @symbol
     * ?builtinEntityMappings\@ActorFactory\@\@0V?$vector\@UVanillaActorData\@\@V?$allocator\@UVanillaActorData\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::vector<struct VanillaActorData> builtinEntityMappings; // NOLINT
};
