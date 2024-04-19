#include "ll/api/event/ListenerBase.h"

namespace ll::event {
static std::atomic_ullong listenerId{0};

ListenerBase::ListenerBase(EventPriority priority, std::weak_ptr<plugin::Plugin> plugin)
: id(listenerId++),
  priority(priority),
  pluginPtr(std::move(plugin)) {}

} // namespace ll::event
