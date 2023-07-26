/**
 * @file  SideBySideExtractionIdExt.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace SideBySideExtractionIdExt.
 *
 */
namespace SideBySideExtractionIdExt {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?isIdOutOfOrder\@SideBySideExtractionIdExt\@\@YA_NAEBW4SideBySideExtractionId\@\@\@Z
     */
    MCAPI bool isIdOutOfOrder(enum class SideBySideExtractionId const &);
    /**
     * @symbol  ?shouldReportErrorsForId\@SideBySideExtractionIdExt\@\@YA_NAEBW4SideBySideExtractionId\@\@\@Z
     */
    MCAPI bool shouldReportErrorsForId(enum class SideBySideExtractionId const &);
    /**
     * @symbol  ?toString\@SideBySideExtractionIdExt\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBW4SideBySideExtractionId\@\@\@Z
     */
    MCAPI std::string toString(enum class SideBySideExtractionId const &);

};