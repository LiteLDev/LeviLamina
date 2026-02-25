#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ResourcePackResolver.h"
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IUIDefRepository;
class IUIRepository;
class ResourcePackManager;
namespace UI::Resources { struct DefinitionPropertyNames; }
namespace UI::Resources { struct ResolvedDefinition; }
namespace UI::Resources { struct ResolvedPropertyData; }
namespace UI::Resources { struct ResolvedTextureData; }
// clang-format on

namespace OreUI {

class ResourcePackOverridesFacet : public ::OreUI::FacetBase<::OreUI::ResourcePackOverridesFacet> {
public:
    // ResourcePackOverridesFacet inner types declare
    // clang-format off
    struct FacetDefinitionData;
    // clang-format on

    // ResourcePackOverridesFacet inner types define
    struct FacetDefinitionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                        identifier;
        ::ll::TypedStorage<8, 32, ::std::string>                                        control;
        ::ll::TypedStorage<8, 24, ::std::vector<::UI::Resources::ResolvedTextureData>>  textureData;
        ::ll::TypedStorage<8, 24, ::std::vector<::UI::Resources::ResolvedPropertyData>> propertyData;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~FacetDefinitionData();
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
    ::ll::TypedStorage<8, 8, double>                                 mLastUpdated;
    ::ll::TypedStorage<8, 72, ::UI::Resources::ResourcePackResolver> mResourcePackResolver;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::ResourcePackOverridesFacet::FacetDefinitionData>>
                                                                                       mFacetDefinitionData;
    ::ll::TypedStorage<8, 24, ::std::vector<::UI::Resources::DefinitionPropertyNames>> mDefinitionsToResolve;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackOverridesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePackOverridesFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourcePackOverridesFacet(
        ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> defRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IUIRepository>          uiRepository,
        ::ResourcePackManager&                                  resourcePackManager
    );

    MCAPI ::std::vector<::OreUI::ResourcePackOverridesFacet::FacetDefinitionData>
    _makeDefinitions(::std::vector<::UI::Resources::ResolvedDefinition> resolvedDefinitions);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> defRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IUIRepository>          uiRepository,
        ::ResourcePackManager&                                  resourcePackManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
