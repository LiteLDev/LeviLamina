#include "ll/api/event/ListenerBase.h"

namespace ll::event {
static std::atomic_ullong listenerId{0};

ListenerBase::ListenerBase(EventPriority priority, std::weak_ptr<mod::Mod> mod)
: id(listenerId++),
  priority(priority),
  modPtr(std::move(mod)) {}

} // namespace ll::event
