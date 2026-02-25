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

    virtual ~Marketplace() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::StoreDataDrivenScreenParams _getParamsFromQuery(::std::string const& url);

    MCAPI static ::std::string composeRouteForProduct(::std::string const& productId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> INVENTORY_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> REALMS2P_UPSELL_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> STORE_ROUTE();
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
