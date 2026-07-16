#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorComponentFactory;
class ActorDefinitionGroup;
class ActorGoalFactory;
class ActorMigratedDefinitionFactory;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class DimensionHeightRange;
class EntityContext;
class Experiments;
class IEntityInitializer;
class Level;
class LevelChunk;
class Vec2;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorFactoryData;
struct ActorInfo;
// clang-format on

class ActorFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Level>>                  mLevel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IEntityInitializer>>                 mEntityInitializer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ActorDefinitionGroup>>      mDefinitions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ActorFactoryData>> mFactoryFunctions;
    ::ll::TypedStorage<8, 16, ::std::set<::std::string>>                               mExperimentalEntities;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorFactoryData>>                       mVanillaActors;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorComponentFactory>>               mComponentFactory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorGoalFactory>>                    mGoalFactory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorMigratedDefinitionFactory>>      mActorMigratedFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorFactory() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorFactory(::Bedrock::NotNullNonOwnerPtr<::Level> level, ::Experiments const& experiments);

    MCAPI void _buildSummonableActorList(
        ::Experiments const&                                                   experiments,
        ::std::function<void(::std::string const&, ::ActorFactoryData const&)> callback
    ) const;

    MCAPI void _loadDefinitionGroups(::ActorDefinitionGroup* group);

    MCAPI void applyEntityInitializer(::std::unique_ptr<::Actor> actor, ::EntityContext& entity) const;

    MCAPI ::OwnerPtr<::EntityContext> clientCreateDisplayActor(
        ::ActorDefinitionIdentifier const& identifier,
        ::Actor*                           spawner,
        ::Vec3 const&                      position,
        ::Vec2 const&                      rotation
    );

    MCAPI ::OwnerPtr<::EntityContext> createActor(
        ::std::string const&               method,
        ::ActorDefinitionIdentifier const& identifier,
        ::Actor*                           spawner,
        ::Vec3 const&                      position,
        ::Vec2 const&                      rotation
    );

    MCAPI ::OwnerPtr<::EntityContext> createBornActor(::ActorDefinitionIdentifier const& identifier, ::Actor* parent);

    MCAPI ::OwnerPtr<::EntityContext>
    createBornActor(::ActorDefinitionIdentifier const& identifier, ::BlockPos const& pos);

    MCAPI ::OwnerPtr<::EntityContext> createSpawnedActor(
        ::ActorDefinitionIdentifier const& identifier,
        ::Actor*                           spawner,
        ::Vec3 const&                      position,
        ::Vec2 const&                      rotation
    );

    MCAPI ::OwnerPtr<::EntityContext>
    createTransformedActor(::ActorDefinitionIdentifier const& identifier, ::Actor* from);

#ifdef LL_PLAT_C
    MCAPI void digestIdentifierListFromServer(::std::vector<::ActorInfo> const& identifierList);
#endif

    MCAPI void init(::Experiments const& experiments);

    MCAPI ::OwnerPtr<::EntityContext> loadActor(
        ::CompoundTag*                tag,
        ::DataLoadHelper&             dataLoadHelper,
        ::DimensionHeightRange const& heightRange,
        ::LevelChunk const*           levelChunk
    );

    MCAPI void setVanillaActors(::std::vector<::ActorFactoryData> vanillaActors);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Actor* fixLegacyEntity(::BlockSource& region, ::CompoundTag const* tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::Level> level, ::Experiments const& experiments);
    // NOLINTEND
};
