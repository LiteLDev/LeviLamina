#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PhotoItem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PHOTOITEM
public:
    PhotoItem& operator=(PhotoItem const&) = delete;
    PhotoItem(PhotoItem const&)            = delete;
    PhotoItem()                            = delete;
#endif

public:
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
};
