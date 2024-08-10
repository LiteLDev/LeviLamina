#include "ll/api/event/player/PlayerEvent.h"

namespace ll::event::inline player {

Player& PlayerEvent::self() const { return static_cast<Player&>(MobEvent::self()); }

} // namespace ll::event::inline player
