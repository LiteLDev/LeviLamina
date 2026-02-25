#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/SceneState.h"
#include "mc/client/gui/oreui/interface/ViewState.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IFacet; }
namespace OreUI::Experimental::Debug { struct QueryInformation; }
namespace OreUI::Experimental::Detail { class ICommandGroup; }
// clang-format on

namespace OreUI::Debug {

class ISceneDataProvider : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISceneDataProvider() /*override*/ = default;

    virtual ::OreUI::ViewState getViewState() const = 0;

    virtual ::OreUI::SceneState getSceneState() const = 0;

    virtual ::std::unordered_map<::std::string, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IFacet>>
    getActiveFacets() const = 0;

    virtual ::std::vector<::OreUI::Experimental::Debug::QueryInformation> getQueryInformation() const = 0;

    virtual ::std::vector<::OreUI::Experimental::Detail::ICommandGroup*> getCommands() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI::Debug
