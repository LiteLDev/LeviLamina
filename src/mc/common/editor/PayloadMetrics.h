#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

struct PayloadMetrics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkea3361;
    ::ll::UntypedStorage<8, 8> mUnkd33e43;
    ::ll::UntypedStorage<8, 8> mUnke5de0d;
    ::ll::UntypedStorage<8, 8> mUnkae42ad;
    ::ll::UntypedStorage<8, 8> mUnk8203ff;
    ::ll::UntypedStorage<8, 8> mUnk6afe5a;
    ::ll::UntypedStorage<8, 8> mUnkbcbc38;
    ::ll::UntypedStorage<8, 8> mUnk5bce95;
    // NOLINTEND

public:
    // prevent constructor by default
    PayloadMetrics& operator=(PayloadMetrics const&);
    PayloadMetrics(PayloadMetrics const&);
    PayloadMetrics();
};

} // namespace Editor::Network
