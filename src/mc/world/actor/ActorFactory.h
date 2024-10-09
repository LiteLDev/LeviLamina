#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/gamerefs_entity/EntityRefTraits.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/actor/ActorType.h"

class ActorFactory {
public:
    // prevent constructor by default
    ActorFactory& operator=(ActorFactory const&);
    ActorFactory(ActorFactory const&);
    ActorFactory();

    using EntityMappingFactory = std::unique_ptr<
        class Actor>(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorFactory() = default;

    MCAPI explicit ActorFactory(Bedrock::NotNullNonOwnerPtr<class Level> level);

    MCAPI void applyEntityInitializer(std::unique_ptr<class Actor> actor, class EntityContext& entity) const;

    MCAPI std::vector<std::pair<std::string, struct ActorDefinitionIdentifier const*>>
          buildSummonEntityTypeEnum(class Experiments const& experiments) const;

    MCAPI void clearDefinitionGroup();

    MCAPI class OwnerPtr<class EntityContext> clientCreateDisplayActor(
        struct ActorDefinitionIdentifier const& identifier,
        class Actor*                            spawner,
        class Vec3 const&                       position,
        class Vec2 const&                       rotation
    );

    MCAPI class OwnerPtr<class EntityContext> createActor(
        std::string const&                      method,
        struct ActorDefinitionIdentifier const& identifier,
        class Actor*                            spawner,
        class Vec3 const&                       pos,
        class Vec2 const&                       rot = {0, 0}
    );

    MCAPI class OwnerPtr<class EntityContext>
    createBornActor(struct ActorDefinitionIdentifier const& identifier, class Actor* parent);

    MCAPI class OwnerPtr<class EntityContext>
    createBornActor(struct ActorDefinitionIdentifier const& identifier, class BlockPos const& pos);

    MCAPI class OwnerPtr<class EntityContext> createSpawnedActor(
        struct ActorDefinitionIdentifier const& identifier,
        class Actor*                            spawner,
        class Vec3 const&                       pos,
        class Vec2 const&                       rot = {0, 0}
    );

    MCAPI class OwnerPtr<class EntityContext> createSummonedActor(
        struct ActorDefinitionIdentifier const& identifier,
        class Actor*                            spawner,
        class Vec3 const&                       pos
    );

    MCAPI class OwnerPtr<class EntityContext>
    createTransformedActor(struct ActorDefinitionIdentifier const& identifier, class Actor* from);

    MCAPI class ActorGoalFactory& getGoalFactory();

    MCAPI void init(class Experiments const& experiments);

    MCAPI class OwnerPtr<class EntityContext> loadActor(class CompoundTag* tag, class DataLoadHelper& dataLoadHelper);

    MCAPI class OwnerPtr<class EntityContext> loadActor(
        class CompoundTag*                tag,
        class DataLoadHelper&             dataLoadHelper,
        class DimensionHeightRange const& heightRange
    );

    MCAPI class OwnerPtr<class EntityContext> loadActor(
        class CompoundTag*                tag,
        class DataLoadHelper&             dataLoadHelper,
        class DimensionHeightRange const& heightRange,
        class LevelChunk const*           levelChunk
    );

    MCAPI ::ActorType lookupEntityType(struct ActorDefinitionIdentifier const& identifier) const;

    MCAPI void setDefinitionGroup(class ActorDefinitionGroup* group);

    MCAPI void setEntityInitializer(std::shared_ptr<class IEntityInitializer> entityInitializer);

    MCAPI static void clearEntityMappings();

    MCAPI static void fillFactoryData(
        struct ActorDefinitionIdentifier const&                         identifier,
        struct ActorDefinitionIdentifier const&                         baseIdentifier,
        std::unordered_map<std::string, struct ActorFactoryData> const& factoryFunctions,
        struct ActorFactoryData&                                        data
    );

    MCAPI static class Actor* fixLegacyEntity(class BlockSource& region, class CompoundTag const* tag);

    MCAPI static void registerEntityMapping(
        ::ActorType const&           actorType,
        bool                         allowSummon,
        EntityMappingFactory* const& factory,
        std::optional<int>           experimentIndex
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _buildSummonableActorList(
        class Experiments const&                                                experiments,
        std::function<void(std::string const&, struct ActorFactoryData const&)> callback
    ) const;

    MCAPI class OwnerPtr<class EntityContext> _constructActor(
        struct ActorDefinitionIdentifier const& identifier,
        class Vec3 const&                       position,
        class Vec2 const&                       rotation,
        std::vector<std::string> const*         previousDefinitions
    ) const;

    MCAPI void _loadDefinitionGroups(class ActorDefinitionGroup* group);

    MCAPI void _loadDefinitionsHelper();

    MCAPI bool _validateActorData(
        class CompoundTag&                tag,
        struct ActorDefinitionIdentifier& outDefinition,
        class Vec3&                       outPosition,
        class LevelChunk const*           levelChunk
    ) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::vector<struct VanillaActorData> builtinEntityMappings;

    // NOLINTEND
};
