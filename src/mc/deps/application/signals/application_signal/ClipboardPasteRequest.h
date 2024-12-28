#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/signal/Signal.h"

namespace ApplicationSignal {

class ClipboardPasteRequest : public ::Bedrock::Signal<::ApplicationSignal::ClipboardPasteRequest, void> {
public:
    // prevent constructor by default
    ClipboardPasteRequest& operator=(ClipboardPasteRequest const&);
    ClipboardPasteRequest(ClipboardPasteRequest const&);
    ClipboardPasteRequest();
};

} // namespace ApplicationSignal
