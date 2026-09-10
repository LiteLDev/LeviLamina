#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/FetchStatus.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ILayoutImageSource;
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

class ImageQuery : public ::OreUI::QueryBase<::OreUI::ImageQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::FetchStatus>>                   mFetchStatus;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                          mLocalPath;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ILayoutImageSource>>        mImageSource;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                               mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImageQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ImageQuery(::OreUI::GameDependencies const& game, ::std::string const& url);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::std::string const& url);
    // NOLINTEND
};

} // namespace OreUI
