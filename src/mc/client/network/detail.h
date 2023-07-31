#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient::detail {
// NOLINTBEGIN
/**
 * @symbol ?StdBadAllocToResult\@detail\@httpclient\@xbox\@\@YAJAEBVbad_alloc\@std\@\@PEBDI\@Z
 */
MCAPI long StdBadAllocToResult(std::bad_alloc const&, char const*, unsigned int);
/**
 * @symbol ?StdExceptionToResult\@detail\@httpclient\@xbox\@\@YAJAEBVexception\@std\@\@PEBDI\@Z
 */
MCAPI long StdExceptionToResult(std::exception const&, char const*, unsigned int);
/**
 * @symbol ?UnknownExceptionToResult\@detail\@httpclient\@xbox\@\@YAJPEBDI\@Z
 */
MCAPI long UnknownExceptionToResult(char const*, unsigned int);
// NOLINTEND

}; // namespace xbox::httpclient::detail
