#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class SceneFactory;
struct IOfferRepository;
struct RealmsAPI;
struct SunsettingManager;
namespace OreUI { class RouteMatcher; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI::EntryPoints {

class RealmsCreateScreen : public ::OreUI::IEntryPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const>          mUserManager;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::IOfferRepository>()>> mGetOfferRepository;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::SunsettingManager>()>>
                                                            mGetSunsettingManager;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::RealmsAPI>> mRealms;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsCreateScreen();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool shouldAddToConfiguration() const /*override*/;

    virtual void addToMatcher(
        ::OreUI::RouteMatcher&                              routeMatcher,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const /*override*/;

    virtual ~RealmsCreateScreen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsCreateScreen(
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>                 userManager,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::IOfferRepository>()>  getOfferRepository,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::SunsettingManager>()> getSunsettingManager,
        ::std::weak_ptr<::RealmsAPI>                                          realms
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> BASE_SCREEN_ID();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> OFFER_TIER();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> REALM_NAME();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> SUBSCRIPTION_ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>                 userManager,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::IOfferRepository>()>  getOfferRepository,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::SunsettingManager>()> getSunsettingManager,
        ::std::weak_ptr<::RealmsAPI>                                          realms
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
    MCFOLD bool $shouldAddToConfiguration() const;

    MCAPI void $addToMatcher(
        ::OreUI::RouteMatcher&                              routeMatcher,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::EntryPoints
