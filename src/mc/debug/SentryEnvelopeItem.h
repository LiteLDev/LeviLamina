#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SentryEnvelopeItem {
public:
    // SentryEnvelopeItem inner types define
    enum class Type : int {
        Event = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SentryEnvelopeItem::Type> type;
    // NOLINTEND
};
