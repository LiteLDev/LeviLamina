#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace snappy { class Sink; }
namespace snappy { class Source; }
// clang-format on

namespace snappy {
// NOLINTBEGIN
MCAPI uint64 Compress(class snappy::Source* reader, class snappy::Sink* writer);

MCAPI uint64 Compress(char const* input, uint64, std::string*);

MCAPI bool Uncompress(char const*, uint64, std::string*);
// NOLINTEND

}; // namespace snappy
