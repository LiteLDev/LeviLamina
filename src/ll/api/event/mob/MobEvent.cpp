#include "ll/api/event/mob/MobEvent.h"

namespace ll::event::inline mob {

Mob& MobEvent::self() const { return static_cast<Mob&>(ActorEvent::self()); }

} // namespace ll::event::inline mob
