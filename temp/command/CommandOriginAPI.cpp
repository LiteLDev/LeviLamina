#include "mc/CommandOrigin.hpp"
#include "mc/Actor.hpp"

ServerPlayer* CommandOrigin::getPlayer() const {
    Actor* origin = getEntity();
    return origin->isPlayer() ? (ServerPlayer*)origin : nullptr;
}
