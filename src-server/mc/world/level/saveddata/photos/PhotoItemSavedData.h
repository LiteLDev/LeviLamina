#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

class PhotoItemSavedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mPhotoId;
    ::ll::TypedStorage<8, 32, ::std::string> mPhotoName;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mPhotoOwner;
    ::ll::TypedStorage<1, 1, bool> mDirty;
    // NOLINTEND

};
