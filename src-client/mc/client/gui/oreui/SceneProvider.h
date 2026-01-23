#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ViewCacheMode.h"
#include "mc/client/gui/oreui/interface/FacetRegistryLocation.h"
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class ISceneStack;
namespace OreUI { struct Router; }
namespace OreUI { struct ViewId; }
// clang-format on

namespace OreUI {

class SceneProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk96c8e8;
    ::ll::UntypedStorage<8, 8>  mUnkc63264;
    ::ll::UntypedStorage<8, 8>  mUnk9f6792;
    ::ll::UntypedStorage<8, 8>  mUnkc95650;
    ::ll::UntypedStorage<8, 24> mUnk430136;
    ::ll::UntypedStorage<8, 8>  mUnk1ee385;
    // NOLINTEND

public:
    // prevent constructor by default
    SceneProvider& operator=(SceneProvider const&);
    SceneProvider(SceneProvider const&);
    SceneProvider();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::OreUI::ViewId _createView(
        ::std::string const&           url,
        ::OreUI::FacetRegistryLocation location,
        ::OreUI::ViewCacheMode         cacheMode
    ) const;

    MCAPI ::std::shared_ptr<::AbstractScene> createScene(
        ::std::string const&                                url,
        ::OreUI::Router&                                    router,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack,
        ::OreUI::RouteMode                                  mode,
        ::OreUI::FacetRegistryLocation                      location
    ) const;

    MCAPI void preCacheGameplayViews();

    MCAPI void preCacheOutOfGameViews();
    // NOLINTEND
};

} // namespace OreUI
