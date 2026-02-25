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
    // prevent constructor by default
    OwnedWorldTemplateDataBindings& operator=(OwnedWorldTemplateDataBindings const&);
    OwnedWorldTemplateDataBindings(OwnedWorldTemplateDataBindings const&);
    OwnedWorldTemplateDataBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OwnedWorldTemplateDataBindings(::OreUI::OwnedWorldTemplateDataBindings&&);

    MCAPI bool canBeRated();

    MCAPI ~OwnedWorldTemplateDataBindings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::OreUI::OwnedWorldTemplateDataBindings fromOwnedWorldTemplateData(
        ::World::OwnedWorldTemplateData const&                     ownedWorldTemplateData,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::OwnedWorldTemplateDataBindings&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
