#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class PhotoItemSavedData;
struct ActorUniqueID;
// clang-format on

class PhotoItemSavedDataCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::std::unique_ptr<::PhotoItemSavedData>>>
        mPhotoData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::PhotoItemSavedData* getPhotoSavedData(::CompoundTag const& instance);
    // NOLINTEND
};
