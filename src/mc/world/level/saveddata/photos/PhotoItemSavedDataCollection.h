#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class PhotoItemSavedData;
// clang-format on

class PhotoItemSavedDataCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk76d90a;
    // NOLINTEND

public:
    // prevent constructor by default
    PhotoItemSavedDataCollection& operator=(PhotoItemSavedDataCollection const&);
    PhotoItemSavedDataCollection(PhotoItemSavedDataCollection const&);
    PhotoItemSavedDataCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::PhotoItemSavedData* getPhotoSavedData(::CompoundTag const& instance);
    // NOLINTEND
};
