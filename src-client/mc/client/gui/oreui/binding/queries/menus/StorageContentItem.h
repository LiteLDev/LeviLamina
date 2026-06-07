#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/ContentItemType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct ContentItem;
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

class StorageContentItem : public ::OreUI::PropertyObject<::OreUI::StorageContentItem> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                             mId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                             mName;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                             mSize;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<::OreUI::ContentItemType>>> mContentType;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>            mImagePath;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>            mContentId;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>            mGameType;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>            mDescription;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>            mDate;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>            mVersion;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                      mIsSelected;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                      mHasErrors;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageContentItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StorageContentItem(
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList,
        ::std::shared_ptr<::ContentItem const> const&                     contentItem,
        bool                                                              isSelected
    );

    MCAPI void _setProperties(
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList,
        ::std::shared_ptr<::ContentItem const> const&                     item
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList,
        ::std::shared_ptr<::ContentItem const> const&                     contentItem,
        bool                                                              isSelected
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
