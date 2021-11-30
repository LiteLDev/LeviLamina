#include <MC/CommandOrigin.hpp>
#include <MC/Actor.hpp>

ServerPlayer* CommandOrigin::getPlayer()
{
	Actor* origin = getEntity();
	return origin->isPlayer() ? (ServerPlayer*)origin : nullptr;
}