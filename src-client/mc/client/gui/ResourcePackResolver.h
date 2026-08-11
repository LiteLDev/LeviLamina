#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/ResourcePackListener.h"

// auto generated forward declare list
// clang-format off
class IUIDefRepository;
class IUIRepository;
class ResourcePackManager;
class UIResolvedDef;
namespace UI::Resources { struct DefinitionPropertyNames; }
namespace UI::Resources { struct ResolvedDefinition; }
namespace UI::Resources { struct ResolvedPropertyData; }
namespace UI::Resources { struct ResolvedTextureData; }
// clang-format on

namespace UI::Resources {

class ResourcePackResolver : public ::ResourcePackListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::ResourcePackManager>>          mResourcePackManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const>> mUIDefRepo;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IUIRepository>>          mUIRepo;
    ::ll::TypedStorage<1, 1, bool>                                                     mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackResolver();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePackResolver() /*override*/;

    virtual void onActiveResourcePacksChanged(::ResourcePackManager&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourcePackResolver(
        ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> defRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IUIRepository>          uiRepository,
        ::ResourcePackManager&                                  resourcePackManager
    );

    MCAPI ::std::vector<::UI::Resources::ResolvedPropertyData> _evaluateProperties(
        ::UIResolvedDef const&              resolvedDef,
        ::std::vector<::std::string> const& propertiesToResolve
    ) const;

    MCAPI ::std::vector<::UI::Resources::ResolvedTextureData>
    _evaluateTextures(::UIResolvedDef const& resolvedDef, ::std::vector<::std::string> const& texturesToResolve) const;

    MCAPI bool doesDefinitionContainNonBaseGameTextures(
        ::std::vector<::UI::Resources::ResolvedDefinition> const& definitions
    ) const;

    MCAPI ::std::vector<::UI::Resources::ResolvedDefinition>
    resolveDefinitions(::std::vector<::UI::Resources::DefinitionPropertyNames> const& definitionsToResolve);
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
    MCAPI void $onActiveResourcePacksChanged(::ResourcePackManager&);
    // NOLINTEND
};

} // namespace UI::Resources
