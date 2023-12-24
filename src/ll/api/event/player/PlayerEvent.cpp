#include "ll/api/event/player/PlayerEvent.h"

namespace ll::event::inline player {

ServerPlayer& PlayerEvent::self() const { return static_cast<ServerPlayer&>(MobEvent::self()); }

} // namespace ll::event::inline player
