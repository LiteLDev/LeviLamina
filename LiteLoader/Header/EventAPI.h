#pragma once
#include "Global.h"
#include "MC/MCRESULT.hpp"
#include "LoggerAPI.h"
#include <functional>
#include <string>
#include <list>
#include <iterator>
using std::function;
using std::string;

class Actor;
class ServerPlayer;
class Player;
class Block;
class Mob;
class ItemStack;
class ActorDamageSource;
class Certificate;
class CommandRegistry;
class MobEffectInstance;
class Container;

namespace Event
{
    constexpr bool Ok = true;
    constexpr bool Cancel = false;

    template<typename ListenersContainer>
    class EventListener
    {
    private:
        using Iterator = typename ListenersContainer::const_iterator;
        ListenersContainer* listeners;
        Iterator _this;
        bool deleted = false;

    public:
        EventListener(ListenersContainer* listeners, Iterator _this)
            :listeners(listeners), _this(_this)
        {}

        void remove() {
            if (!deleted)
            {
                listeners->erase(_this);
                deleted = true;
            }
        }
    };

    template<typename EVENT>
    class EventTemplate
    {
    public:
        using Callback = std::function<bool(const EVENT &)>;
        using ListenersContainer = std::list<Callback>;
        using Listener = EventListener<ListenersContainer>;

    protected:
        LIAPI static ListenersContainer listeners;

    public:
        static Listener subscribe(Callback callback)
        {
            listeners.emplace_back(callback);
            return Listener(&listeners, --listeners.end());
        }

        static void unsubscribe(const Listener& listener)
        {
            listener.remove();
        }

        bool call()
        {
            bool passToBDS = true;
            try {
                for (auto& callback : listeners) {
                    if (!callback(*(EVENT*)this))
                        passToBDS = false;
                }
                return passToBDS;
            }
            catch (const seh_exception &e) {
                Logger::Error("Uncaught SEH Exception in Event!");
            }
            catch (const std::exception& e) {
                Logger::Error("Uncaught Exception in Event!");
            }
            return passToBDS;
        }
    };

    class PreJoinEvent : public EventTemplate<PreJoinEvent>
    {
    public:
        ServerPlayer* player;
        string ip;
        string xuid;
    };

    class JoinEvent : public EventTemplate<JoinEvent>
    {
    public:
        ServerPlayer* player;
    };

    class LeftEvent : public EventTemplate<LeftEvent>
    {
    public:
        ServerPlayer* player;
        string xuid;
    };

    class PlayerRespawnEvent : public EventTemplate<PlayerRespawnEvent>
    {
    public:
        ServerPlayer* player;
    };

    class ChatEvent : public EventTemplate<ChatEvent>
    {
    public:
        Player* player;
        string msg;
    };

    class ChangeDimEvent : public EventTemplate<ChangeDimEvent>
    {
    public:
        Player* player;
    };

    class PlayerJumpEvent : public EventTemplate<PlayerJumpEvent>
    {
    public:
        Player* player;
    };

    class PlayerSneakEvent : public EventTemplate<PlayerSneakEvent>
    {
    public:
        Player* player;
        bool isSneaking;
    };

    class PlayerAttackEvent : public EventTemplate<PlayerAttackEvent>
    {
    public:
        Player* attacker;
        Actor* victim;
        int damage;
    };

    class PlayerTakeItemEvent : public EventTemplate<PlayerTakeItemEvent>
    {
    public:
        Player* player;
        Actor* itemEntity;
        ItemStack* itemStack;
    };

    class PlayerDropItemEvent : public EventTemplate<PlayerDropItemEvent>
    {
    public:
        Player* player;
        ItemStack* itemStack;
    };

    class PlayerEatEvent : public EventTemplate<PlayerEatEvent>
    {
    public:
        Player* player;
        ItemStack* eating;
    };

    class PlayerConsumeTotemEvent : public EventTemplate<PlayerConsumeTotemEvent>
    {
    public:
        Player* player;
    };

    class PlayerCmdEvent : public EventTemplate<PlayerCmdEvent>
    {
    public:
        Player* player;
        string cmd;
        MCRESULT *result;
    };

    class PlayerEffectChangedEvent : public EventTemplate<PlayerEffectChangedEvent>
    {
    public:
        enum class EventType { Add, Remove, Update };

        Player* player;
        EventType type;
        MobEffectInstance* effect;
    };

    class PlayerStartDestroyBlockEvent : public EventTemplate<PlayerStartDestroyBlockEvent>
    {
    public:
        Player* player;
        BlockPos blockPos;
    };

    class PlayerPlaceBlockEvent : public EventTemplate<PlayerPlaceBlockEvent>
    {
    public:
        Player* player;
        BlockPos blockPos;
    };

    class PlayerOpenContainerEvent : public EventTemplate<PlayerOpenContainerEvent>
    {
    public:
        Player* player;
        BlockPos blockPos;
        Container* container;
    };

    class PlayerCloseContainerEvent : public EventTemplate<PlayerCloseContainerEvent>
    {
    public:
        Player* player;
        BlockPos blockPos;
        Container* container;
    };

    class CmdBlockExecuteEvent : public EventTemplate<CmdBlockExecuteEvent>
    {
    public:
        string cmd;
        BlockPos blockPos;
    };

    class ServerStartedEvent : public EventTemplate<ServerStartedEvent>
    {};

    class PostInitEvent : public EventTemplate<PostInitEvent>
    {};

    class PlayerDeathEvent : public EventTemplate<PlayerDeathEvent>
    {
    public:
        ServerPlayer* player;
    };

    class RegCmdEvent : public EventTemplate<RegCmdEvent>
    {
    public:
        CommandRegistry* CMDRg;
    };

    class PlayerDestroyBlockEvent : public EventTemplate<PlayerDestroyBlockEvent>
    {
    public:
        Player* player;
        BlockPos blockPos;
        Block* block;
    };

    class PlayerUseItemOnEvent : public EventTemplate<PlayerUseItemOnEvent>
    {
    public:
        ServerPlayer* player;
        ItemStack* itemStack;
        BlockPos blockPos;
        unsigned char side;
    };

    class MobHurtedEvent : public EventTemplate<MobHurtedEvent>
    {
    public:
        Mob* victim;
        ActorDamageSource* source;
        int damage;
    };

    class PlayerUseItemEvent : public EventTemplate<PlayerUseItemEvent>
    {
    public:
        ServerPlayer* player;
        ItemStack* itemStack;
    };

    class MobDieEvent : public EventTemplate<MobDieEvent>
    {
    public:
        Mob* mob;
        Actor* source;
    };

    class ItemUseOnActorEvent : public EventTemplate<ItemUseOnActorEvent>
    {
    public:
        ActorRuntimeID actorRuntimeID;
        int interactiveMode;
    };

}; // namespace Event