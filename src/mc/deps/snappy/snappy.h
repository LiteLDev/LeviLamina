#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace snappy { class Sink; }
namespace snappy { class Source; }
// clang-format on

namespace snappy {
// NOLINTBEGIN
// symbol: ?Compress@snappy@@YA_KPEAVSource@1@PEAVSink@1@@Z
MCAPI uint64 Compress(class snappy::Source* reader, class snappy::Sink* writer);

// symbol: ?Compress@snappy@@YA_KPEBD_KPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI uint64 Compress(char const* input, uint64, std::string*);

// symbol: ?Uncompress@snappy@@YA_NPEBD_KPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI bool Uncompress(char const*, uint64, std::string*);
// NOLINTEND

}; // namespace snappy
