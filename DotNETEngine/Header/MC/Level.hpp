#pragma once
#include <MC/Level.hpp>
#include "Types.hpp"

namespace MC
{
ref class MapItemSavedData;
ref class BlockPalette;
ref class ActorDamageSource;
ref class Packet;
ref class ItemStack;
ref class Vec3;
ref class Block;
ref class BlockSource;
ref class BlockInstance;
ref class BlockActor;
ref class CompoundTag;
ref class Container;
ref class Dimension;
ref class Player;
ref class Actor;
}

namespace MC
{
public
ref class Level : ClassTemplate<Level, ::Level>
{
public:
    __ctor(Level, ::Level);

public:
    delegate bool Callback(Player ^);

private:
    // inline static void forEachPlayer(Callback^ callback);
    delegate bool NativeCallback(::Player&);
    typedef bool (*pNativeCallback)(::Player&);
    static Callback ^ _callback = nullptr;
    inline static bool NATIVECALLBACK CallbackFn(::Player& p);
    static List<GCHandle> ^ gchList = nullptr;

public:
    inline static void ForEachPlayer(Callback ^ callback);
    inline static List<Player ^> ^ GetAllPlayers();
    /// name or xuid
    inline static Player ^ GetPlayer(System::String ^ _info);
    /// UniqueID
    inline static Player ^ GetPlayer(ActorUniqueID ^ id);
    inline static Actor ^ GetEntity(ActorUniqueID ^ id);
    inline static List<Actor ^> ^ GetAllEntities(int dimId);
    inline static List<Actor ^> ^ GetAllEntities();
    inline static Actor ^ SpawnMob(Vec3 ^ pos, int dimId, System::String ^ typeName);
    inline static Actor ^ SpawnItem(Vec3 ^ pos, int dimId, ItemStack ^ item);
    inline static bool CreateExplosion(Vec3 ^ pos, int dimId, Actor ^ source, float radius, bool createFire, bool canBreak, float maxResistance);
    inline static bool CreateExplosion(Vec3 ^ pos, int dimId, Actor ^ source, float radius, bool createFire, bool canBreak);
    inline static MapItemSavedData ^ GetMapSavedData(ActorUniqueID ^ a0);

    // Block
    inline static Block ^ GetBlock(BlockPos ^ pos, int dimId);
    inline static Block ^ GetBlock(BlockPos ^ pos, BlockSource ^ blockSource);
    inline static Block ^ GetBlockEx(BlockPos ^ pos, int dimId);
    inline static BlockInstance ^ GetBlockInstance(BlockPos ^ pos, int dimId);
    inline static BlockInstance ^ GetBlockInstance(BlockPos ^ pos, BlockSource ^ blockSource);
    inline static BlockActor ^ GetBlockEntity(BlockPos ^ pos, int dimId);
    inline static BlockActor ^ GetBlockEntity(BlockPos ^ pos, BlockSource ^ blockSource);
    inline static bool SetBlock(BlockPos ^ pos, int dim, Block ^ block);
    inline static bool SetBlock(BlockPos ^ pos, int dim, System::String ^ name, unsigned short tileData);
    inline static bool SetBlock(BlockPos ^ pos, int dim, CompoundTag ^ nbt);
    inline static bool BreakBlockNaturally(BlockSource ^ bs, BlockPos ^ pos);
    inline static bool BreakBlockNaturally(BlockSource ^ bs, BlockPos ^ pos, ItemStack ^ tool);
    inline static bool DestroyBlock(BlockSource ^ bs, BlockPos ^ pos, bool a2);
    inline static void SpawnParticleEffect(System::String ^ type, Vec3 ^ pos, Dimension ^ a2);
    inline static void SpawnParticleEffect(System::String ^ type, Actor ^ a1, Vec3 ^ a2);
    inline static bool HasContainer(Vec3 ^ pos, int dim);
    inline static Container ^ GetContainer(Vec3 ^ pos, int dim);

    // Item
    inline static ItemStack ^ GetItemStackFromId(short itemId, int aux);
    inline static ItemStack ^ GetItemStackFromId(short a2);

    // Helper
    inline static BlockSource ^ GetBlockSource(int dimid);
    inline static BlockSource ^ GetBlockSource(Actor ^ actor);
    inline static BlockPalette ^ GetBlockPalette();
    inline static Dimension ^ GetDimension(AutomaticID<Dimension ^, int> ^ a0);
    inline static Actor ^ GetDamageSourceEntity(ActorDamageSource ^ ads);
    inline static void BroadcastText(System::String ^ text, TextType type);
    inline static void BroadcastTitle(System::String ^ text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration);
    inline static void SendPacketForAllPlayer(Packet ^ pkt);

    // For compatibility
    inline static bool RuncmdAs(Player ^ pl, System::String ^ cmd);
    inline static Pair<bool, System::String ^> RuncmdEx(System::String ^ cmd);
    inline static bool Runcmd(System::String ^ cmd);

#ifdef INCLUDE_MCAPI
    // property MC::PlayerCapabilities::ISharedController ^ Capabilities {
    //     MC::PlayerCapabilities::ISharedController ^ get();
    // }

    property double TickDeltaTime
    {
        double get();
    }

    property bool Use3DBiomeMaps
    {
        bool get();
    }

    static unsigned int CreateRandomSeed();

    static property float AVERAGE_GAME_TICKS_PER_RANDOM_TICK_PER_BLOCK
    {
        float get();
    }

    static property float AVERAGE_RANDOM_TICKS_PER_BLOCK_PER_GAME_DAY
    {
        float get();
    }

    static property float AVERAGE_RANDOM_TICKS_PER_BLOCK_PER_MINUTE
    {
        float get();
    }

    static property float RANDOM_TICKS_PER_TICK_PER_SUBCHUNK
    {
        float get();
    }

#endif // INCLUDE_MCAPI
};
} // namespace MC