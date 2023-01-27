/**
 * @file  snappy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1712292544
     * @symbol  ?Compress\@snappy\@\@YA_KPEAVSource\@1\@PEAVSink\@1\@\@Z
     */
    MCAPI unsigned __int64 Compress(class snappy::Source *, class snappy::Sink *);
    /**
     * @hash   -1911950068
     * @symbol  ?Compress\@snappy\@\@YA_KPEBD_KPEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI unsigned __int64 Compress(char const *, unsigned __int64, std::string *);
    /**
     * @hash   -1543591291
     * @symbol  ?Uncompress\@snappy\@\@YA_NPEBD_KPEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool Uncompress(char const *, unsigned __int64, std::string *);

};