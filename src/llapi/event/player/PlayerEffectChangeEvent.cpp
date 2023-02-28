#include <llapi/event/EventManager.h>
#include <llapi/event/player/PlayerEffectChangeEvent.h>
#include <llapi/memory/Hook.h>

#include <llapi/mc/Player.hpp>

#include <llapi/event/impl/EventImpl.inl>
#include <llapi/event/impl/EventManagerImpl.inl>
#include <llapi/event/impl/ListenerImpl.inl>

namespace ll::event::player {

PlayerEffectChangeEvent::PlayerEffectChangeEvent(Player* player, MobEffectInstance* effect, ActionType action)
: player(player), effect(effect), action(action) {}

LL_GETTER_IMPL(PlayerEffectChangeEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(PlayerEffectChangeEvent, MobEffectInstance*, effect, getEffect)
LL_GETTER_IMPL(PlayerEffectChangeEvent, PlayerEffectChangeEvent::ActionType, action, getAction)

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerEffectChangedEventHook,
    Player,
    HookPriority::Normal,
    "?onEffectAdded@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z",
    void,
    MobEffectInstance* effect
) {
    PlayerEffectChangeEvent event(this, effect, PlayerEffectChangeEvent::ActionType::Add);
    EventManager<PlayerEffectChangeEvent>::fireEvent(event);
    return origin(effect);
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerEffectChangedEventHook2,
    Player,
    HookPriority::Normal,
    "?onEffectRemoved@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z",
    void,
    MobEffectInstance* effect
) {
    PlayerEffectChangeEvent event(this, effect, PlayerEffectChangeEvent::ActionType::Remove);
    EventManager<PlayerEffectChangeEvent>::fireEvent(event);
    return origin(effect);
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerEffectChangedEventHook3,
    Player,
    HookPriority::Normal,
    "?onEffectUpdated@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z",
    void,
    MobEffectInstance* effect
) {
    PlayerEffectChangeEvent event(this, effect, PlayerEffectChangeEvent::ActionType::Update);
    EventManager<PlayerEffectChangeEvent>::fireEvent(event);
    return origin(effect);
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerEffectChangeEvent)
