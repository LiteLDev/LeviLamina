#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorComponentFactory;
class ActorDefinitionGroup;
class ActorGoalFactory;
class ActorMigratedDefinitionFactory;
class BlockPos;
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
struct VanillaActorData;
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
    virtual ~ActorFactory();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorFactory(::Bedrock::NotNullNonOwnerPtr<::Level> level);

    MCAPI void _buildSummonableActorList(
        ::Experiments const&                                                   experiments,
        ::std::function<void(::std::string const&, ::ActorFactoryData const&)> callback
    ) const;

    MCAPI ::OwnerPtr<::EntityContext> _constructActor(
        ::ActorDefinitionIdentifier const&  identifier,
        ::Vec3 const&                       position,
        ::Vec2 const&                       rotation,
        ::std::vector<::std::string> const* previousDefinitions
    ) const;

    MCAPI void _loadDefinitionGroups(::ActorDefinitionGroup* group);

    MCAPI void _loadDefinitionsHelper();

    MCAPI bool _validateActorData(
        ::CompoundTag&               tag,
        ::ActorDefinitionIdentifier& outDefinition,
        ::Vec3&                      outPosition,
        ::LevelChunk const*          levelChunk
    ) const;

    MCAPI void applyEntityInitializer(::std::unique_ptr<::Actor> actor, ::EntityContext& entity) const;

    MCAPI ::std::vector<::std::pair<::std::string, ::ActorDefinitionIdentifier const*>>
    buildSummonEntityTypeEnum(::Experiments const& experiments) const;

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
    createSummonedActor(::ActorDefinitionIdentifier const& identifier, ::Actor* spawner, ::Vec3 const& position);

    MCAPI ::OwnerPtr<::EntityContext>
    createTransformedActor(::ActorDefinitionIdentifier const& identifier, ::Actor* from);

    MCAPI_C void digestIdentifierListFromServer(::std::vector<::ActorInfo> const& identifierList);

    MCAPI void init(::Experiments const& experiments);

    MCAPI ::OwnerPtr<::EntityContext> loadActor(
        ::CompoundTag*                tag,
        ::DataLoadHelper&             dataLoadHelper,
        ::DimensionHeightRange const& heightRange,
        ::LevelChunk const*           levelChunk
    );

    MCAPI ::ActorType lookupEntityType(::ActorDefinitionIdentifier const& identifier) const;

    MCAPI_C void setEntityInitializer(::std::shared_ptr<::IEntityInitializer> entityInitializer);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void fillFactoryData(
        ::ActorDefinitionIdentifier const&                             identifier,
        ::ActorDefinitionIdentifier const&                             baseIdentifier,
        ::std::unordered_map<::std::string, ::ActorFactoryData> const& factoryFunctions,
        ::ActorFactoryData&                                            data
    );

    MCAPI static void registerEntityMapping(
        ::ActorType const& actorType,
        bool               allowSummon,
        ::std::unique_ptr<::Actor> (*const& factory)(
            ::ActorDefinitionGroup*,
            ::ActorDefinitionIdentifier const&,
            ::EntityContext&
        ),
        ::std::optional<int> experimentIndex
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::VanillaActorData>& builtinEntityMappings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::Level> level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
