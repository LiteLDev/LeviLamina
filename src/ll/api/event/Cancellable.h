#pragma once

#include "ll/api/base/Macro.h"

namespace ll::event {

// FIXME: abi stability is not guaranteed
class Cancellable {
private:
    bool mCancelled = false;

public:
    LLNDAPI virtual bool isCancelled() const;

    LLAPI virtual void setCancelled(bool cancelled);

    void cancel() { setCancelled(true); }
};
} // namespace ll::event
