#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient::detail {
/**
 * @symbol ?StdBadAllocToResult\@detail\@httpclient\@xbox\@\@YAJAEBVbad_alloc\@std\@\@PEBDI\@Z
 */
MCAPI long StdBadAllocToResult(class std::bad_alloc const&, char const*, unsigned int); // NOLINT
/**
 * @symbol ?StdExceptionToResult\@detail\@httpclient\@xbox\@\@YAJAEBVexception\@std\@\@PEBDI\@Z
 */
MCAPI long StdExceptionToResult(class std::exception const&, char const*, unsigned int); // NOLINT
/**
 * @symbol ?UnknownExceptionToResult\@detail\@httpclient\@xbox\@\@YAJPEBDI\@Z
 */
MCAPI long UnknownExceptionToResult(char const*, unsigned int); // NOLINT

}; // namespace xbox::httpclient::detail
