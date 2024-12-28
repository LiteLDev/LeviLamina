#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/signal/Signal.h"

// auto generated forward declare list
// clang-format off
namespace ApplicationSignal { struct ClipboardData; }
// clang-format on

namespace ApplicationSignal {

class ClipboardPaste
: public ::Bedrock::Signal<::ApplicationSignal::ClipboardPaste, ::ApplicationSignal::ClipboardData> {
public:
    // prevent constructor by default
    ClipboardPaste& operator=(ClipboardPaste const&);
    ClipboardPaste(ClipboardPaste const&);
    ClipboardPaste();
};

} // namespace ApplicationSignal
