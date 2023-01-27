/**
 * @file  PhotoStorage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PhotoStorage.
 *
 */
class PhotoStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PHOTOSTORAGE
public:
    class PhotoStorage& operator=(class PhotoStorage const &) = delete;
    PhotoStorage(class PhotoStorage const &) = delete;
    PhotoStorage() = delete;
#endif

public:
    /**
     * @hash   -601185694
     * @symbol  ??0PhotoStorage\@\@QEAA\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI PhotoStorage(class Core::Path const &);
    /**
     * @hash   479002963
     * @symbol  ??1PhotoStorage\@\@QEAA\@XZ
     */
    MCAPI ~PhotoStorage();
    /**
     * @hash   591499411
     * @symbol  ?BOOKS_DIR\@PhotoStorage\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BOOKS_DIR;
    /**
     * @hash   -32822375
     * @symbol  ?MANIFEST_NAME\@PhotoStorage\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const MANIFEST_NAME;
    /**
     * @hash   1772305641
     * @symbol  ?PHOTOITEM_DIR\@PhotoStorage\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PHOTOITEM_DIR;
    /**
     * @hash   -553913469
     * @symbol  ?PHOTO_DIR\@PhotoStorage\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PHOTO_DIR;

//private:
    /**
     * @hash   906299207
     * @symbol  ?_readManifest\@PhotoStorage\@\@AEAAXXZ
     */
    MCAPI void _readManifest();

private:

};