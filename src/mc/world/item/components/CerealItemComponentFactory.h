#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/platform/string/util/string_hash.h"
#include "mc/util/CerealSchemaUpgradeSet.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class ItemComponent;
class PackLoadRequirement;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CerealItemComponentFactory {
public:
    // CerealItemComponentFactory inner types declare
    // clang-format off
    struct ComponentMetadata;
    // clang-format on

    // CerealItemComponentFactory inner types define
    struct ComponentMetadata {
    public:
        // ComponentMetadata inner types define
        using Ctor = ::std::unique_ptr<::ItemComponent> (*)();

        using ParseFunction = ::std::function<bool(::Experiments const&, ::SemVersion const&)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemComponent> (*)()> makeUnique;
        ::ll::TypedStorage<8, 24, ::std::vector<::PackLoadRequirement>>    requirements;
        ::ll::TypedStorage<8, 32, ::std::optional<::SemVersion>>           releasedMinFormatVersion;
        ::ll::TypedStorage<8, 32, ::std::optional<::SemVersion>>           deprecatedVersion;
        ::ll::TypedStorage<8, 24, ::CerealSchemaUpgradeSet>                versionUpgrades;
        ::ll::TypedStorage<8, 64, ::std::function<bool(::Experiments const&, ::SemVersion const&)>> onParseCallback;
        // NOLINTEND

    public:
        // prevent constructor by default
        ComponentMetadata& operator=(ComponentMetadata const&);
        ComponentMetadata(ComponentMetadata const&);
        ComponentMetadata();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::CerealItemComponentFactory::ComponentMetadata&
        operator=(::CerealItemComponentFactory::ComponentMetadata&&);

        MCAPI ~ComponentMetadata();
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
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::CerealItemComponentFactory::ComponentMetadata,
            ::Util::string_hash,
            ::std::equal_to<void>>>
                                            mRegisteredComponents;
    ::ll::TypedStorage<8, 24, ::SemVersion> mReleasedMinFormatVersionForAnyComponent;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void addComponentMetadata(
        ::cereal::ReflectionCtx&                          ctx,
        ::std::string const&                              componentName,
        ::CerealItemComponentFactory::ComponentMetadata&& metadata,
        ::std::optional<::SemVersion>                     releasedMinFormatVersion
    );

    MCAPI static ::std::optional<::SemVersion>
    getReleasedMinFormatVersionForAnyComponent(::cereal::ReflectionCtx const& ctx);

    MCAPI static ::CerealItemComponentFactory& setupContextInstanceIfRequired(::cereal::ReflectionCtx& ctx);

    MCAPI static void
    updateReleasedMinFormatVersionForAnyComponentIfLower(::CerealItemComponentFactory& instance, ::SemVersion version);
    // NOLINTEND
};
