#pragma once
#include "Global.h"
#include "MC/MCRESULT.hpp"
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
    class EventImpl
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

    class PreJoinEvent : public EventImpl<PreJoinEvent>
    {
    public:
        ServerPlayer* player;
        string ip;
        string xuid;
    };

    class JoinEvent : public EventImpl<JoinEvent>
    {
    public:
        ServerPlayer* player;
    };

    class LeftEvent : public EventImpl<LeftEvent>
    {
    public:
        ServerPlayer* player;
        string xuid;
    };

    class PlayerRespawnEvent : public EventImpl<PlayerRespawnEvent>
    {
    public:
        ServerPlayer* player;
    };

    class ChatEvent : public EventImpl<ChatEvent>
    {
    public:
        Player* player;
        string msg;
    };

    class ChangeDimEvent : public EventImpl<ChangeDimEvent>
    {
    public:
        Player* player;
    };

    class PlayerJumpEvent : public EventImpl<PlayerJumpEvent>
    {
    public:
        Player* player;
    };

    class PlayerSneakEvent : public EventImpl<PlayerSneakEvent>
    {
    public:
        Player* player;
        bool isSneaking;
    };

    class PlayerAttackEvent : public EventImpl<PlayerAttackEvent>
    {
    public:
        Player* attacker;
        Actor* victim;
        int damage;
    };

    class PlayerTakeItemEvent : public EventImpl<PlayerTakeItemEvent>
    {
    public:
        Player* player;
        Actor* itemEntity;
        ItemStack* itemStack;
    };

    class PlayerDropItemEvent : public EventImpl<PlayerDropItemEvent>
    {
    public:
        Player* player;
        ItemStack* itemStack;
    };

    class PlayerEatEvent : public EventImpl<PlayerEatEvent>
    {
    public:
        Player* player;
        ItemStack* eating;
    };

    class PlayerConsumeTotemEvent : public EventImpl<PlayerConsumeTotemEvent>
    {
    public:
        Player* player;
    };

    class PlayerCmdEvent : public EventImpl<PlayerCmdEvent>
    {
    public:
        Player* player;
        string cmd;
        MCRESULT *result;
    };

    class PlayerEffectChangedEvent : public EventImpl<PlayerEffectChangedEvent>
    {
    public:
        enum class EventType { Add, Remove, Update };

        Player* player;
        EventType type;
        MobEffectInstance* effect;
    };

    class PlayerStartDestroyBlockEvent : public EventImpl<PlayerStartDestroyBlockEvent>
    {
    public:
        Player* player;
        BlockPos blockPos;
    };

    class CmdBlockExecuteEvent : public EventImpl<CmdBlockExecuteEvent>
    {
    public:
        string cmd;
        BlockPos blockPos;
    };

    class ServerStartedEvent : public EventImpl<ServerStartedEvent>
    {};

    class PostInitEvent : public EventImpl<PostInitEvent>
    {};

    class PlayerDeathEvent : public EventImpl<PlayerDeathEvent>
    {
    public:
        ServerPlayer* player;
    };

    class RegCmdEvent : public EventImpl<RegCmdEvent>
    {
    public:
        CommandRegistry* CMDRg;
    };

    class PlayerDestroyEvent : public EventImpl<PlayerDestroyEvent>
    {
    public:
        Player* player;
        BlockPos blockPos;
        Block* block;
    };

    class PlayerUseItemOnEvent : public EventImpl<PlayerUseItemOnEvent>
    {
    public:
        ServerPlayer* player;
        ItemStack* itemStack;
        BlockPos blockPos;
        unsigned char side;
    };

    class MobHurtedEvent : public EventImpl<MobHurtedEvent>
    {
    public:
        Mob* victim;
        ActorDamageSource* source;
        int damage;
    };

    class PlayerUseItemEvent : public EventImpl<PlayerUseItemEvent>
    {
    public:
        ServerPlayer* player;
        ItemStack* itemStack;
    };

    class MobDieEvent : public EventImpl<MobDieEvent>
    {
    public:
        Mob* mob;
        Actor* source;
    };

    class ItemUseOnActorEvent : public EventImpl<ItemUseOnActorEvent>
    {
    public:
        ActorRuntimeID actorRuntimeID;
        int interactiveMode;
    };

}; // namespace Event