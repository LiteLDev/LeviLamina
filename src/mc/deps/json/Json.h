#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {
/**
 * @symbol
 * ?valueToQuotedString\@Json\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBD\@Z
 */
MCAPI std::string valueToQuotedString(char const*);
/**
 * @symbol ?valueToString\@Json\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_J\@Z
 */
MCAPI std::string valueToString(__int64);
/**
 * @symbol ?valueToString\@Json\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_K\@Z
 */
MCAPI std::string valueToString(unsigned __int64);
/**
 * @symbol ?valueToString\@Json\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@N\@Z
 */
MCAPI std::string valueToString(double);

}; // namespace Json
