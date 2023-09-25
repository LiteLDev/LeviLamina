/**
 * @file  unity_46c829707d0047aed148b5840a921897.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace unity_46c829707d0047aed148b5840a921897 {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?_unzip\@unity_46c829707d0047aed148b5840a921897\@\@YA?AW4UnzipResult\@ZipUtils\@Core\@\@AEBVPath\@4\@0AEAVZipProgress\@34\@_NAEBVUnzipSettings\@34\@\@Z
     */
    MCAPI enum class Core::ZipUtils::UnzipResult _unzip(class Core::Path const &, class Core::Path const &, class Core::ZipUtils::ZipProgress &, bool, class Core::ZipUtils::UnzipSettings const &);
    /**
     * @symbol ?_zip\@unity_46c829707d0047aed148b5840a921897\@\@YA?AW4ZipResult\@ZipUtils\@Core\@\@AEBV?$vector\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@V?$allocator\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@\@std\@\@AEBVPath\@4\@AEAVZipProgress\@34\@_NV?$function\@$$A6A?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@\@Z\@6\@AEBVZipSettings\@34\@\@Z
     */
    MCAPI enum class Core::ZipUtils::ZipResult _zip(std::vector<class Core::PathBuffer<std::string>> const &, class Core::Path const &, class Core::ZipUtils::ZipProgress &, bool, class std::function<std::string (class Core::Path const &)>, class Core::ZipUtils::ZipSettings const &);

};