#include "ll/api/event/command/CommandRegisterEvent.h"
#include "ll/api/event/EventRefObjSerializer.h"

#include "mc/deps/nbt/CompoundTag.h"

namespace ll::event::inline command {

void CommandRegisterEvent::serialize(CompoundTag& nbt) const {
    Event::serialize(nbt);
    nbt["commandRegistry"] = serializeRefObj(commandRegistry());
}

CommandRegistry& CommandRegisterEvent::commandRegistry() const { return mCommandRegistry; }

} // namespace ll::event::inline command
