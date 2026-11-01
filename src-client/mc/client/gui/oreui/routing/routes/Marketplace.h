#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class SceneFactory;
struct StoreDataDrivenScreenParams;
namespace OreUI { class RouteMatcher; }
// clang-format on

namespace OreUI::EntryPoints {

class Marketplace : public ::OreUI::IEntryPoint {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool shouldAddToConfiguration() const /*override*/;

    virtual void addToMatcher(
        ::OreUI::RouteMatcher&                              routeMatcher,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::StoreDataDrivenScreenParams _getParamsFromQuery(::std::string const& url);

    MCNAPI static ::std::string composeRouteForProduct(::std::string const& productId);

    MCNAPI static ::std::string
    composeRouteForSearch(::std::string const& searchText, ::std::string const& packTypeFilter);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[23]> INVENTORY_ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SEARCH_ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[46]> SKIN_MISSING_MARIO_MASHUP_MODAL_ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[19]> STORE_ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> WISHLIST_ROUTE();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $shouldAddToConfiguration() const;

    MCNAPI void $addToMatcher(
        ::OreUI::RouteMatcher&                              routeMatcher,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const;
    // NOLINTEND
};

} // namespace OreUI::EntryPoints
