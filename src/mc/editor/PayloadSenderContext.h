#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

struct PayloadSenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnke4eaac;
    ::ll::UntypedStorage<1, 1>   mUnk9fb939;
    ::ll::UntypedStorage<8, 16>  mUnkd2f870;
    ::ll::UntypedStorage<8, 24>  mUnk4f7a6d;
    ::ll::UntypedStorage<1, 1>   mUnk999f99;
    // NOLINTEND

public:
    // prevent constructor by default
    PayloadSenderContext& operator=(PayloadSenderContext const&);
    PayloadSenderContext(PayloadSenderContext const&);
    PayloadSenderContext();
};

} // namespace Editor::Network
