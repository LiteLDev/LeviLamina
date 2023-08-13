#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

class PhotoItem : public ::Item {

public:
    // prevent constructor by default
    PhotoItem& operator=(PhotoItem const&) = delete;
    PhotoItem(PhotoItem const&)            = delete;
    PhotoItem()                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?TAG_PHOTO_NAME\@PhotoItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_PHOTO_NAME;
    /**
     * @symbol
     * ?TAG_PHOTO_OWNER\@PhotoItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_PHOTO_OWNER;
    /**
     * @symbol ?TAG_PHOTO_UUID\@PhotoItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_PHOTO_UUID;
    // NOLINTEND
};
