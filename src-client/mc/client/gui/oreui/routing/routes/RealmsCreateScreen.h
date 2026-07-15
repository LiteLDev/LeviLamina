#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IOfferRepository;
class ISceneStack;
class RealmsAPI;
class SceneFactory;
class SunsettingManager;
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

    virtual void
    addToMatcher(::OreUI::RouteMatcher&, ::SceneFactory&, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&) const
        /*override*/;
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
    MCAPI static ::std::add_lvalue_reference_t<char const[]> ROUTE();
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI::EntryPoints
