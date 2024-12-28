#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/signal/Signal.h"

// auto generated forward declare list
// clang-format off
namespace ApplicationSignal { struct ClipboardCopyData; }
// clang-format on

namespace ApplicationSignal {

class ClipboardCopy
: public ::Bedrock::Signal<::ApplicationSignal::ClipboardCopy, ::ApplicationSignal::ClipboardCopyData> {
public:
    // prevent constructor by default
    ClipboardCopy& operator=(ClipboardCopy const&);
    ClipboardCopy(ClipboardCopy const&);
    ClipboardCopy();
};

} // namespace ApplicationSignal
