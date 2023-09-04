#include "mc/Actor.hpp"
#include "mc/CommandOrigin.hpp"

ServerPlayer* CommandOrigin::getPlayer() const {
    Actor* origin = getEntity();
    return origin->isPlayer() ? (ServerPlayer*)origin : nullptr;
}
