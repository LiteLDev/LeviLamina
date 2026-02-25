#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/ScreenModelProvider.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/gui/oreui/interface/FacetRegistryLocation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class IAppPlatform;
class IClientInstance;
class IMinecraftGame;
namespace OreUI { class IFacet; }
namespace OreUI { class IFacetRegistry; }
// clang-format on

namespace OreUI {

class FacetRegistryFactory {
public:
    // FacetRegistryFactory inner types declare
    // clang-format off
    struct FacetData;
    // clang-format on

    // FacetRegistryFactory inner types define
    struct FacetData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string const>             mName;
        ::ll::TypedStorage<4, 4, ::OreUI::FacetAvailability const> mAvailability;
        ::ll::TypedStorage<
            8,
            64,
            ::std::function<::std::unique_ptr<::OreUI::IFacet>(::OreUI::FacetRegistryLocation)> const>
            mConstructor;
        // NOLINTEND

    public:
        // prevent constructor by default
        FacetData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI FacetData(
            char const*                                                                         name,
            ::OreUI::FacetAvailability                                                          availability,
            ::std::function<::std::unique_ptr<::OreUI::IFacet>(::OreUI::FacetRegistryLocation)> constructor
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            char const*                                                                         name,
            ::OreUI::FacetAvailability                                                          availability,
            ::std::function<::std::unique_ptr<::OreUI::IFacet>(::OreUI::FacetRegistryLocation)> constructor
        );
        // NOLINTEND
    };

    using FacetConstructor = ::std::function<::std::unique_ptr<::OreUI::IFacet>(::OreUI::FacetRegistryLocation)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FacetRegistryFactory::FacetData>> mFacets;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>        mClientInstance;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                        mMinecraft;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IAppPlatform>>              mAppPlatform;
    ::ll::TypedStorage<8, 88, ::OreUI::ScreenModelProvider>                            mScreenModelProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetRegistryFactory& operator=(FacetRegistryFactory const&);
    FacetRegistryFactory(FacetRegistryFactory const&);
    FacetRegistryFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FacetRegistryFactory(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&          clientInstance,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                appPlatform
    );

    MCAPI void _registerCoreFacets();

    MCAPI void _registerVanillaFacets();

    MCAPI void _registerVanillaGameplayFacets();

    MCAPI ::std::unique_ptr<::OreUI::IFacetRegistry> createFacetRegistry(::OreUI::FacetRegistryLocation location);

    MCAPI ~FacetRegistryFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&          clientInstance,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                appPlatform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
