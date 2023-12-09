#include "ll/api/event/player/PlayerEvent.h"

namespace ll::event::inline player {

ServerPlayer& PlayerEvent::player() const { return mPlayer; }

} // namespace ll::event::inline player
