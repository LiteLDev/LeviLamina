#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/menus/ContentItemType.h"
#include "mc/client/world/SyncState.h"

namespace OreUI {

struct StorageContentItemData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                            mId;
    ::ll::TypedStorage<8, 32, ::std::string>                            mName;
    ::ll::TypedStorage<8, 32, ::std::string>                            mSize;
    ::ll::TypedStorage<1, 2, ::std::optional<::OreUI::ContentItemType>> mContentType;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>           mImagePath;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>           mContentId;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>           mGameType;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>           mDescription;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>           mDate;
    ::ll::TypedStorage<4, 8, ::std::optional<::World::SyncState>>       mCloudSyncState;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>           mVersion;
    ::ll::TypedStorage<1, 1, bool>                                      mIsSelected;
    ::ll::TypedStorage<1, 1, bool>                                      mHasErrors;
    // NOLINTEND
};

} // namespace OreUI
