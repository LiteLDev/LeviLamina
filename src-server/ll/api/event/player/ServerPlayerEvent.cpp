#include "ll/api/event/player/ServerPlayerEvent.h"

namespace ll::event::inline player {

ServerPlayer& ServerPlayerEvent::self() const { return static_cast<ServerPlayer&>(PlayerEvent::self()); }

} // namespace ll::event::inline player
