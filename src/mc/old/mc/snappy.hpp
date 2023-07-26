/**
 * @file  snappy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace snappy.
 *
 */
namespace snappy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?Compress\@snappy\@\@YA_KPEAVSource\@1\@PEAVSink\@1\@\@Z
     */
    MCAPI unsigned __int64 Compress(class snappy::Source *, class snappy::Sink *);
    /**
     * @symbol  ?Compress\@snappy\@\@YA_KPEBD_KPEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI unsigned __int64 Compress(char const *, unsigned __int64, std::string *);
    /**
     * @symbol  ?Uncompress\@snappy\@\@YA_NPEBD_KPEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool Uncompress(char const *, unsigned __int64, std::string *);

};