#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/world/OwnedWorldTemplateData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

struct OwnedWorldTemplateDataBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::World::OwnedWorldTemplateData> mOwnedWorldTemplateData;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>           mThumbnailPath;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool canBeRated();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::OreUI::OwnedWorldTemplateDataBindings fromOwnedWorldTemplateData(
        ::World::OwnedWorldTemplateData const&                     ownedWorldTemplateData,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND
};

} // namespace OreUI
