#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
struct ActorUniqueID;
// clang-format on

class PhotoItem : public ::Item {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::ActorUniqueID getPhotoId(::CompoundTag const& tag);

    MCAPI static ::std::string const& getPhotoName(::CompoundTag const& tag);

    MCAPI static ::ActorUniqueID getPhotoOwner(::CompoundTag const& tag);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& TAG_PHOTO_NAME();

    MCAPI static ::std::string const& TAG_PHOTO_OWNER();

    MCAPI static ::std::string const& TAG_PHOTO_UUID();
    // NOLINTEND
};
