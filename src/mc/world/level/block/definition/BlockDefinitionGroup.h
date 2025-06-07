#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/JsonBetaState.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/item/CreativeItemCategory.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
class CompoundTag;
class Experiments;
class IPackLoadContext;
class Level;
class LinkedAssetValidator;
class PackLoadRequirement;
class ResourcePackManager;
class SemVersion;
struct BlockComponentGroupDescription;
struct BlockDefinition;
struct BlockDescription;
struct BlockPermutationDescription;
namespace Json { class Value; }
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
        ::ll::UntypedStorage<8, 24>  mUnk66603e;
        ::ll::UntypedStorage<8, 32>  mUnkf1018e;
        ::ll::UntypedStorage<8, 24>  mUnkd4f5d9;
        ::ll::UntypedStorage<8, 176> mUnk960d05;
        ::ll::UntypedStorage<1, 1>   mUnkd6d7a8;
        ::ll::UntypedStorage<8, 32>  mUnke5554e;
        ::ll::UntypedStorage<8, 32>  mUnk597a19;
        ::ll::UntypedStorage<8, 16>  mUnk9a0d89;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockResource& operator=(BlockResource const&);
        BlockResource(BlockResource const&);
        BlockResource();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~BlockResource();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnk1b5f57;
    ::ll::UntypedStorage<8, 64>  mUnkcd9897;
    ::ll::UntypedStorage<8, 16>  mUnke67cd4;
    ::ll::UntypedStorage<8, 128> mUnk255ed4;
    ::ll::UntypedStorage<4, 4>   mUnka63e94;
    ::ll::UntypedStorage<8, 24>  mUnkf2dec9;
    ::ll::UntypedStorage<8, 24>  mUnk67f28b;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDefinitionGroup& operator=(BlockDefinitionGroup const&);
    BlockDefinitionGroup(BlockDefinitionGroup const&);
    BlockDefinitionGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockDefinitionGroup(::cereal::ReflectionCtx const& ctx);

    MCNAPI void _applyBlockStates(::BlockLegacy* block, ::BlockDefinition const& definition);

    MCNAPI void _buildBlockDescriptionSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockDescription>>& description
    );

    MCNAPI void _buildBlockMenuCategorySchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockDescription>>& description
    );

    MCNAPI bool _checkInvalidPermutationComponents(::BlockComponentGroupDescription const& componentGroupDescription);

    MCNAPI bool _loadBlockDescription(
        ::Json::Value const&      root,
        ::BlockDescription&       desc,
        ::JsonBetaState&          canUseBeta,
        ::IPackLoadContext const& packLoadContext,
        ::SemVersion const&       jsonVersion
    );

    MCNAPI bool _loadComponents(
        ::Json::Value const& root,
        ::BlockDefinition&   definition,
        ::IPackLoadContext&  packLoadContext,
        ::JsonBetaState      canUseBeta
    );

    MCNAPI void
    _loadComponentsForLegacyCompabitility(::SemVersion const& originalJsonVersion, ::BlockDefinition& definition);

    MCNAPI bool
    _loadEvents(::Json::Value const& root, ::BlockDefinition& definition, ::IPackLoadContext& packLoadContext);

    MCNAPI bool _parseComponents(
        ::Json::Value const&              blockRoot,
        ::BlockComponentGroupDescription& componentGroupDescription,
        ::std::string const&              blockIdentifier,
        ::SemVersion const&               originalJsonVersion,
        ::IPackLoadContext&               packLoadContext,
        ::JsonBetaState                   canUseBeta
    );

    MCNAPI ::CreativeItemCategory _stringToCreativeItemCategory(::std::string const& str);

    MCNAPI bool _validateCrossComponentConstraints(
        ::BlockComponentGroupDescription const& description,
        ::SemVersion const&                     mOriginalJsonVersion
    ) const;

    MCNAPI bool _validatePrereleaseRequirements(
        ::LogArea                                   logArea,
        ::std::string const&                        jsonType,
        ::std::string const&                        jsonIdentifier,
        ::std::optional<::SemVersion> const&        releaseVersion,
        ::std::vector<::PackLoadRequirement> const& requirements,
        ::IPackLoadContext const&                   packLoadContext,
        ::JsonBetaState                             canUseBeta
    ) const;

    MCNAPI void buildBlockSchema();

    MCNAPI ::std::unique_ptr<::BlockDefinition>
    generateBlockDefinition(::BlockDefinitionGroup::BlockResource const& resource, ::IPackLoadContext& packLoadContext);

    MCNAPI bool generateBlockResource(
        ::Json::Value const&                   root,
        ::IPackLoadContext const&              packLoadContext,
        ::SemVersion const&                    originalJsonVersion,
        ::BlockDefinitionGroup::BlockResource& out
    );

    MCNAPI ::std::vector<::std::pair<::std::string, ::CompoundTag>> generateServerBlockProperties() const;

    MCNAPI ::std::vector<::BlockDefinition const*> getBlockDefinitions() const;

    MCNAPI void initBlockFromDefinition(::Block& block, ::BlockPermutationDescription const& definition);

    MCNAPI void initBlockLegacyFromDefinition(::BlockLegacy& blockLegacy, ::BlockDefinition const& definition);

    MCNAPI void initializeBlockFromDefinition(::BlockDefinition const& definition, ::Level& level);

    MCNAPI ::std::unique_ptr<::BlockDefinition> loadResource(
        ::std::string                            upgradedJsonData,
        ::Core::PathBuffer<::std::string> const& res,
        ::std::string const&                     resourcePacklocation,
        ::IPackLoadContext&                      packLoadContext
    );

    MCNAPI void loadResources(
        ::ResourcePackManager const& resourcePackManager,
        ::Experiments const&         experiments,
        ::LinkedAssetValidator&      validator
    );

    MCNAPI void registerBlockFromDefinition(::BlockDefinition const& definition, bool assertIfAlreadyExists);

    MCNAPI ::WeakPtr<::BlockLegacy> registerDataDrivenBlock(::BlockDescription const& desc);

    MCNAPI ~BlockDefinitionGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
