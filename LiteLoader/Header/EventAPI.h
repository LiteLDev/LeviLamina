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
struct ActorDefinitionIdentifier;
class ItemStack;
class ActorDamageSource;
class Certificate;
class CommandRegistry;
class MobEffectInstance;
class Container;
class WitherBoss;

namespace Event
{
    ///////////////////////////// Impl /////////////////////////////

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

        static bool hasListener() { return !listeners.empty(); }

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


    ///////////////////////////// Player Events /////////////////////////////

    class PlayerPreJoinEvent : public EventTemplate<PlayerPreJoinEvent>
    {
    public:
        ServerPlayer* player;
        string ip;
        string xuid;
    };

    class PlayerJoinEvent : public EventTemplate<PlayerJoinEvent>
    {
    public:
        ServerPlayer* player;
    };

    class PlayerLeftEvent : public EventTemplate<PlayerLeftEvent>
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

    class PlayerUseItemEvent : public EventTemplate<PlayerUseItemEvent>
    {
    public:
        ServerPlayer* player;
        ItemStack* itemStack;
    };

    class PlayerUseItemOnEvent : public EventTemplate<PlayerUseItemOnEvent>
    {
    public:
        ServerPlayer* player;
        ItemStack* itemStack;
        BlockPos blockPos;
        int dimId;
        unsigned char side;
    };

    class PlayerChatEvent : public EventTemplate<PlayerChatEvent>
    {
    public:
        Player* player;
        string msg;
    };

    class PlayerChangeDimEvent : public EventTemplate<PlayerChangeDimEvent>
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

    class PlayerDeathEvent : public EventTemplate<PlayerDeathEvent>
    {
    public:
        ServerPlayer* player;
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
        int dimId;
    };

    class PlayerDestroyBlockEvent : public EventTemplate<PlayerDestroyBlockEvent>
    {
    public:
        Player* player;
        BlockPos blockPos;
        int dimId;
        Block* block;
    };

    class PlayerPlaceBlockEvent : public EventTemplate<PlayerPlaceBlockEvent>
    {
    public:
        Player* player;
        BlockPos blockPos;
        int dimId;
    };

    class PlayerOpenContainerEvent : public EventTemplate<PlayerOpenContainerEvent>
    {
    public:
        Player* player;
        BlockPos blockPos;
        int dimId;
        Container* container;
    };

    class PlayerCloseContainerEvent : public EventTemplate<PlayerCloseContainerEvent>
    {
    public:
        Player* player;
        BlockPos blockPos;
        int dimId;
        Container* container;
    };

    class PlayerInventoryChangeEvent : public EventTemplate<PlayerInventoryChangeEvent>
    {
    public:
        Player* player;
        int slotNumber;
        ItemStack* oldItem;
        ItemStack* newItem;
    };

    class PlayerMoveEvent : public EventTemplate<PlayerMoveEvent>
    {
    public:
        Player* player;
        Vec3 pos;
    };

    class PlayerSprintEvent : public EventTemplate<PlayerSprintEvent>
    {
    public:
        Player* player;
        bool isSprinting;
    };

    class PlayerSetArmorEvent : public EventTemplate<PlayerSetArmorEvent>
    {
    public:
        Player* player;
        int slotNumber;
        ItemStack* armor;
    };

    class PlayerUseRespawnAnchorEvent : public EventTemplate<PlayerUseRespawnAnchorEvent>
    {
    public:
        Player* player;
        BlockPos blockPos;
        int dimId;
    };

    class PlayerOpenContainerScreenEvent : public EventTemplate<PlayerOpenContainerScreenEvent>
    {
    public:
        Player* player;
    };


    ///////////////////////////// Block Events /////////////////////////////

    class CmdBlockExecuteEvent : public EventTemplate<CmdBlockExecuteEvent>
    {
    public:
        string cmd;
        BlockPos blockPos;
        int dimId;
    };

    class BlockExplodeEvent : public EventTemplate<BlockExplodeEvent>
    {
    public:
        Block* block;
        BlockPos blockPos;
        int dimId;
    };


    ///////////////////////////// Entity Events /////////////////////////////

    class EntityExplodeEvent : public EventTemplate<EntityExplodeEvent>
    {
    public:
        Actor* source;
        Vec3 pos;
        int dimId;
        float power;
        float range;
        bool isDestroy;
        bool isFire;
    };

    class MobHurtEvent : public EventTemplate<MobHurtEvent>
    {
    public:
        Mob* victim;
        ActorDamageSource* source;
        int damage;
    };

    class MobDieEvent : public EventTemplate<MobDieEvent>
    {
    public:
        Mob* mob;
        Actor* source;
    };

    class ProjectileHitEntityEvent : public EventTemplate<ProjectileHitEntityEvent>
    {
    public:
        Actor* victim;
        Actor* source;
    };

    class WitherBossDestroyEvent : public EventTemplate<WitherBossDestroyEvent>
    {
    public:
        WitherBoss* boss;
        AABB destroyRange = { {},{} };
    };

    class EntityRideEvent : public EventTemplate<EntityRideEvent>
    {
    public:
        Actor* rider;
        Actor* ridee;
    };

    class EntityStepOnPressurePlateEvent : public EventTemplate<EntityStepOnPressurePlateEvent>
    {
    public:
        Actor* entity;
        Block* block;
        BlockPos blockPos;
        int dimId;
    };

    class NPCCmdEvent : public EventTemplate<NPCCmdEvent>
    {
    public:
        Actor* npc;
        std::string cmd;
        Player* causer;
    };

    class ProjectileSpawnEvent : public EventTemplate<ProjectileSpawnEvent>
    {
    public:
        Actor* shooter;
        ActorDefinitionIdentifier* identifier;
        std::string typeName;
    };

    class ItemUseOnActorEvent : public EventTemplate<ItemUseOnActorEvent>
    {
    public:
        ActorRuntimeID actorRuntimeID;
        int interactiveMode;
    };

    ///////////////////////////// Other Events /////////////////////////////

    class PostInitEvent : public EventTemplate<PostInitEvent>
    {};

    class ServerStartedEvent : public EventTemplate<ServerStartedEvent>
    {};


    class RegCmdEvent : public EventTemplate<RegCmdEvent>
    {
    public:
        CommandRegistry* CMDRg;
    };
}; // namespace Event