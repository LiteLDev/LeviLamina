#include "ll/api/event/Cancellable.h"

namespace ll::event {

bool Cancellable::isCancelled() const { return mCancelled; }

void Cancellable::setCancelled(bool cancelled) { mCancelled = cancelled; }

} // namespace ll::event
