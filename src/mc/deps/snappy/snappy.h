#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace snappy { class Sink; }
namespace snappy { class Source; }
// clang-format on

namespace snappy {
/**
 * @symbol ?Compress\@snappy\@\@YA_KPEAVSource\@1\@PEAVSink\@1\@\@Z
 */
MCAPI unsigned __int64 Compress(class snappy::Source*, class snappy::Sink*); // NOLINT
/**
 * @symbol
 * ?Compress\@snappy\@\@YA_KPEBD_KPEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI unsigned __int64 Compress(char const*, unsigned __int64, std::string*); // NOLINT
/**
 * @symbol
 * ?Uncompress\@snappy\@\@YA_NPEBD_KPEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI bool Uncompress(char const*, unsigned __int64, std::string*); // NOLINT

}; // namespace snappy
