#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class PhotoStorage {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PHOTOSTORAGE
public:
    PhotoStorage& operator=(PhotoStorage const&) = delete;
    PhotoStorage(PhotoStorage const&)            = delete;
    PhotoStorage()                               = delete;
#endif

public:
    /**
     * @symbol ??0PhotoStorage\@\@QEAA\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI PhotoStorage(class Core::Path const&);
    /**
     * @symbol ??1PhotoStorage\@\@QEAA\@XZ
     */
    MCAPI ~PhotoStorage();
    /**
     * @symbol ?BOOKS_DIR\@PhotoStorage\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BOOKS_DIR;
    /**
     * @symbol
     * ?MANIFEST_NAME\@PhotoStorage\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const MANIFEST_NAME;
    /**
     * @symbol
     * ?PHOTOITEM_DIR\@PhotoStorage\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PHOTOITEM_DIR;
    /**
     * @symbol ?PHOTO_DIR\@PhotoStorage\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PHOTO_DIR;

    // private:
    /**
     * @symbol ?_readManifest\@PhotoStorage\@\@AEAAXXZ
     */
    MCAPI void _readManifest();

private:
};
