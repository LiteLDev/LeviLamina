#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/json/Value.h"
#include "mc/deps/shared_types/v1_21_110/item/ItemCategory.h"
#include "mc/resources/JsonBetaState.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/level/block/definition/BlockDescription.h"
#include "mc/world/level/block/traits/BlockTraitFactory.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DefinitionEvent;
class Experiments;
class IMinecraftEventing;
class Level;
class LinkedAssetValidator;
class PackLoadContext;
class PackLoadRequirement;
class ResourcePackManager;
struct BlockComponentGroupDescription;
struct BlockDefinition;
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockDefinitionGroup {
public:
    // BlockDefinitionGroup inner types declare
    // clang-format off
    struct BlockResource;
    // clang-format on

    // BlockDefinitionGroup inner types define
    struct BlockResource {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::SemVersion>        mFormatVersion;
        ::ll::TypedStorage<8, 32, ::MinEngineVersion>  mMinEngineVersion;
        ::ll::TypedStorage<8, 24, ::SemVersion>        mOriginalJsonVersion;
        ::ll::TypedStorage<8, 224, ::BlockDescription> mDescription;
        ::ll::TypedStorage<1, 1, ::JsonBetaState>      mIsBeta;
        ::ll::TypedStorage<8, 32, ::std::string>       mResourcePackLocation;
        ::ll::TypedStorage<8, 32, ::std::string>       mResourceFileLocation;
        ::ll::TypedStorage<8, 16, ::Json::Value>       mRoot;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DefinitionEvent>> mEventHandlers;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::BlockDefinition>>>
        mBlockDefinitions;
    ::ll::TypedStorage<
        8,
        16,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockDescription>>>
                                                                                            mDescriptionSchema;
    ::ll::TypedStorage<8, 128, ::BlockTraitFactory>                                         mTraitFactory;
    ::ll::TypedStorage<4, 4, int>                                                           mLastBlockId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                 mBlockResourceGroupNames;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx const>> mCtx;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                         mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDefinitionGroup& operator=(BlockDefinitionGroup const&);
    BlockDefinitionGroup(BlockDefinitionGroup const&);
    BlockDefinitionGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockDefinitionGroup(::cereal::ReflectionCtx const& ctx, ::IMinecraftEventing& eventing);

    MCAPI void _buildBlockDescriptionSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockDescription>>& description
    );

    MCAPI bool _parseComponents(
        ::Json::Value const&              blockRoot,
        ::BlockComponentGroupDescription& componentGroupDescription,
        ::std::string const&              blockIdentifier,
        ::SemVersion const&               originalJsonVersion,
        ::PackLoadContext&                packLoadContext,
        ::JsonBetaState                   canUseBeta,
        bool                              isVanillaBlock
    );

    MCAPI ::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory
    _stringToCreativeItemCategory(::std::string const& category, ::std::string const& blockIdentifier);

    MCAPI bool _validatePrereleaseRequirements(
        ::LogArea                                   logArea,
        ::std::string const&                        jsonType,
        ::std::string const&                        jsonIdentifier,
        ::std::optional<::SemVersion> const&        releaseVersion,
        ::std::vector<::PackLoadRequirement> const& requirements,
        ::PackLoadContext const&                    packLoadContext,
        ::JsonBetaState const                       canUseBeta
    ) const;

    MCAPI void digestServerBlockProperties(::std::vector<::std::pair<::std::string, ::CompoundTag>> const& blocks);

    MCAPI ::std::unique_ptr<::BlockDefinition>
    generateBlockDefinition(::BlockDefinitionGroup::BlockResource const& resource, ::PackLoadContext& packLoadContext);

    MCAPI ::std::vector<::std::pair<::std::string, ::CompoundTag>> generateServerBlockProperties() const;

    MCAPI ::std::vector<::BlockDefinition const*> getBlockDefinitions() const;

    MCAPI void initializeBlockFromDefinition(::BlockDefinition const& definition, ::Level& level);

    MCAPI ::std::unique_ptr<::BlockDefinition> loadResource(
        ::std::string                            upgradedJsonData,
        ::Core::PathBuffer<::std::string> const& res,
        ::std::string const&                     resourcePacklocation,
        ::PackLoadContext&                       packLoadContext
    );

    MCAPI void loadResources(
        ::ResourcePackManager const&                       resourcePackManager,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCAPI void registerBlockFromDefinition(::BlockDefinition const& definition, bool assertIfAlreadyExists);

    MCAPI ::BlockDefinition const* tryGetBlockDefinition(::std::string const& name) const;

    MCAPI ~BlockDefinitionGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx, ::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
