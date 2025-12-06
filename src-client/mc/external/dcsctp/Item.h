#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp::OutstandingData {

struct Item {
public:
    // Item inner types define
    enum class AckState : uint {};

    enum class Lifecycle : uint {};

    enum class NackAction : uint {};
};

} // namespace dcsctp::OutstandingData
