#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class SceneFactory;
namespace OreUI { class RouteMatcher; }
namespace Realms { struct RealmsWorldContext; }
namespace Realms { struct RealmsWorldEditor; }
// clang-format on

namespace OreUI::EntryPoints {

class RealmsReplaceWorldScreen : public ::OreUI::IEntryPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::Realms::RealmsWorldContext>()>> mRealmsWorldContext;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::Realms::RealmsWorldEditor>()>>  mRealmsWorldEditor;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool shouldAddToConfiguration() const /*override*/;

    virtual void addToMatcher(
        ::OreUI::RouteMatcher&                              routeMatcher,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const /*override*/;

    virtual ~RealmsReplaceWorldScreen() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> BASE_SCREEN_ID();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> REALM_ID();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> SLOT_ID();
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
