#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/resources/JsonBetaState.h"
#include "mc/world/item/CreativeItemCategory.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
class CompoundTag;
class Experiments;
class IPackLoadContext;
class Level;
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
        ::ll::UntypedStorage<8, 112> mUnk66603e;
        ::ll::UntypedStorage<8, 120> mUnkf1018e;
        ::ll::UntypedStorage<8, 112> mUnkd4f5d9;
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
        MCAPI ~BlockResource();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
    MCAPI explicit BlockDefinitionGroup(::cereal::ReflectionCtx const& ctx);

    MCAPI void _buildBlockDescriptionSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockDescription>>& description
    );

    MCAPI void _buildBlockMenuCategorySchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockDescription>>& description
    );

    MCAPI bool _checkInvalidPermutationComponents(::BlockComponentGroupDescription const& componentGroupDescription);

    MCAPI bool _loadBlockDescription(
        ::Json::Value const&      root,
        ::BlockDescription&       desc,
        ::JsonBetaState&          canUseBeta,
        ::IPackLoadContext const& packLoadContext,
        ::SemVersion const&       jsonVersion
    );

    MCAPI bool _loadComponents(
        ::Json::Value const& root,
        ::BlockDefinition&   definition,
        ::IPackLoadContext&  packLoadContext,
        ::JsonBetaState      canUseBeta
    );

    MCAPI void
    _loadComponentsForLegacyCompabitility(::SemVersion const& originalJsonVersion, ::BlockDefinition& definition);

    MCAPI bool
    _loadEvents(::Json::Value const& root, ::BlockDefinition& definition, ::IPackLoadContext& packLoadContext);

    MCAPI bool _parseComponents(
        ::Json::Value const&              blockRoot,
        ::BlockComponentGroupDescription& componentGroupDescription,
        ::std::string const&              blockIdentifier,
        ::SemVersion const&               originalJsonVersion,
        ::IPackLoadContext&               packLoadContext,
        ::JsonBetaState                   canUseBeta
    );

    MCAPI ::CreativeItemCategory _stringToCreativeItemCategory(::std::string const& str);

    MCAPI bool _validatePrereleaseRequirements(
        ::LogArea                                   logArea,
        ::std::string const&                        jsonType,
        ::std::string const&                        jsonIdentifier,
        ::std::optional<::SemVersion> const&        releaseVersion,
        ::std::vector<::PackLoadRequirement> const& requirements,
        ::IPackLoadContext const&                   packLoadContext,
        ::JsonBetaState                             canUseBeta
    ) const;

    MCAPI void buildBlockSchema();

    MCAPI ::std::unique_ptr<::BlockDefinition>
    generateBlockDefinition(::BlockDefinitionGroup::BlockResource const& resource, ::IPackLoadContext& packLoadContext);

    MCAPI ::std::vector<::std::pair<::std::string, ::CompoundTag>> generateServerBlockProperties() const;

    MCAPI ::std::vector<::BlockDefinition const*> getBlockDefinitions() const;

    MCAPI void initBlockFromDefinition(::Block& block, ::BlockPermutationDescription const& definition);

    MCAPI void initBlockLegacyFromDefinition(::BlockLegacy& blockLegacy, ::BlockDefinition const& definition);

    MCAPI void initializeBlockFromDefinition(::BlockDefinition const& definition, ::Level& level);

    MCAPI void initializeBlocks(::Level& level);

    MCAPI ::std::unique_ptr<::BlockDefinition> loadResource(
        ::std::string                            upgradedJsonData,
        ::Core::PathBuffer<::std::string> const& res,
        ::std::string const&                     resourcePacklocation,
        ::IPackLoadContext&                      packLoadContext
    );

    MCAPI void loadResources(::ResourcePackManager const& resourcePackManager, ::Experiments const& experiments);

    MCAPI void registerBlockFromDefinition(::BlockDefinition const& definition, bool assertIfAlreadyExists);

    MCAPI void registerBlocks();

    MCAPI ::WeakPtr<::BlockLegacy> registerDataDrivenBlock(::BlockDescription const& desc);

    MCAPI ~BlockDefinitionGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
