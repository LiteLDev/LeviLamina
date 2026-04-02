#include "ll/api/event/command/ServerCommandRegisterEvent.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline command {

void ServerCommandRegisterEvent::serialize(CompoundTag& nbt) const {
    CommandRegisterEvent::serialize(nbt);
    nbt["isClientHostedServer"] = isClientHostedServer();
}

bool ServerCommandRegisterEvent::isClientHostedServer() const { return mClientHostedServer; }

} // namespace ll::event::inline command
