#include <llapi/event/EventManager.h>
#include <llapi/event/player/PlayerAddExperienceEvent.h>
#include <llapi/memory/Hook.h>

#include <llapi/mc/Player.hpp>

#include <llapi/event/impl/EventImpl.inl>
#include <llapi/event/impl/EventManagerImpl.inl>
#include <llapi/event/impl/ListenerImpl.inl>


namespace ll::event::player {

PlayerAddExperienceEvent::PlayerAddExperienceEvent(Player* player, int exp) : player(player), exp(exp) {}

LL_GETTER_IMPL(PlayerAddExperienceEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(PlayerAddExperienceEvent, int, exp, getExp)
LL_SETTER_IMPL(PlayerAddExperienceEvent, int, exp, setExp)

using EventManager = EventManager<PlayerAddExperienceEvent>;

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerAddExperienceEventHook,
    Player,
    HookPriority::Normal,
    "?addExperience@Player@@UEAAXH@Z",
    void,
    int exp
) {
    PlayerAddExperienceEvent event(this, exp);
    EventManager::fireEvent(event);
    if (event.isCancelled())
        return;
    return origin(event.getExp());
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerAddExperienceEvent)
