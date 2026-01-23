#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/IPackLoadScoped.h"
#include "mc/util/CerealSchemaUpgradeSet.h"
#include "mc/util/Factory.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class IPackLoadContext;
class PackLoadRequirement;
struct BlockComponentDescription;
struct BlockComponentGroupDescription;
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockComponentFactory : public ::IPackLoadScoped, public ::Factory<::BlockComponentDescription> {
public:
    // BlockComponentFactory inner types declare
    // clang-format off
    struct ComponentMetadata;
    // clang-format on

    // BlockComponentFactory inner types define
    struct ComponentMetadata {
    public:
        // ComponentMetadata inner types define
        using Ctor = ::std::unique_ptr<::BlockComponentDescription> (*)();

        using ParseFunction =
            ::std::function<bool(::Experiments const&, ::Json::Value const&, ::SemVersion const&, bool)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockComponentDescription> (*)()> makeUnique;
        ::ll::TypedStorage<8, 24, ::std::vector<::PackLoadRequirement>>                requirements;
        ::ll::TypedStorage<8, 32, ::std::optional<::SemVersion>>                       releasedMinFormatVersion;
        ::ll::TypedStorage<8, 24, ::CerealSchemaUpgradeSet>                            versionUpgrades;
        ::ll::TypedStorage<
            8,
            64,
            ::std::function<bool(::Experiments const&, ::Json::Value const&, ::SemVersion const&, bool)>>
                                       onParseCallback;
        ::ll::TypedStorage<1, 1, bool> mIsCustomComponent;
        // NOLINTEND

    public:
        // prevent constructor by default
        ComponentMetadata& operator=(ComponentMetadata const&);
        ComponentMetadata(ComponentMetadata const&);
        ComponentMetadata();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::BlockComponentFactory::ComponentMetadata& operator=(::BlockComponentFactory::ComponentMetadata&&);

        MCAPI ~ComponentMetadata();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    using CerealComponentsMap = ::std::unordered_map<::std::string, ::BlockComponentFactory::ComponentMetadata>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        16,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockComponentGroupDescription>>>
        mBlockComponentsSchema;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockComponentFactory(BlockComponentFactory const&);
    BlockComponentFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockComponentFactory() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockComponentFactory(::IPackLoadContext const* packLoadContext);

    MCAPI void _buildBlockComponentsSchema();

    MCAPI void _registerLegacyDescriptions(::IPackLoadContext const* packLoadContext);

    MCAPI ::std::unique_ptr<::BlockComponentDescription>
    createDescription(::std::string const& name, ::cereal::ReflectionCtx const& ctx) const;

    MCAPI ::BlockComponentFactory& operator=(::BlockComponentFactory const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void registerAllCerealDescriptions(::cereal::ReflectionCtx& ctx);

    MCAPI static ::std::unordered_map<::std::string, ::BlockComponentFactory::ComponentMetadata>&
    setupContextInstanceIfRequired(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IPackLoadContext const* packLoadContext);
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
