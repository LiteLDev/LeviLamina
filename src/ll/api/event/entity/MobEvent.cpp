#include "ll/api/event/entity/MobEvent.h"

namespace ll::event::inline entity {

Mob& MobEvent::self() const { return static_cast<Mob&>(ActorEvent::self()); }

} // namespace ll::event::inline entity
