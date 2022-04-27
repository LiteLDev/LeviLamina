#include "../../Header/MC/Level.hpp"

#include "../../Header/MC/Player.hpp"
#include "../../Header/MC/Vec3.hpp"
#include "../../Header/MC/ItemStack.hpp"
#include "../../Header/MC/MapItemSavedData.hpp"
#include "../../Header/MC/Block.hpp"
#include "../../Header/MC/BlockPos.hpp"
#include "../../Header/MC/BlockSource.hpp"
#include "../../Header/MC/BlockInstance.hpp"
#include "../../Header/MC/BlockActor.hpp"
#include "../../Header/MC/Dimension.hpp"
#include "../../Header/MC/Container.hpp"
#include "../../Header/MC/BlockPalette.hpp"
#include "../../Header/MC/ActorDamageSource.hpp"
#include "../../Header/MC/Packet.hpp"

namespace MC
{
inline bool NATIVECALLBACK Level::CallbackFn(::Player& p)
{
    return _callback(gcnew Player(&p));
}
inline void Level::ForEachPlayer(Callback ^ callback)
{
    if (callback == nullptr)
        throw gcnew System::ArgumentNullException;
    if (gchList == nullptr)
        gchList = gcnew List<GCHandle>;

    _callback = callback;

    auto deFn = gcnew NativeCallback(&Level::CallbackFn);

    gchList->Add(GCHandle::Alloc(deFn));

    auto pFn = static_cast<pNativeCallback>(
        Marshal::GetFunctionPointerForDelegate(_callback).ToPointer());

    ::Level::forEachPlayer(pFn);
}
inline List<Player ^> ^ Level::GetAllPlayers()
{
    auto& stdvector = ::Level::getAllPlayers();
    auto ret = gcnew List<Player ^>(int(stdvector.size()));
    for each (auto var in stdvector)
        ret->Add(gcnew Player(var));
    return ret;
}
inline Player ^ Level::GetPlayer(System::String ^ _info)
{
    return gcnew Player(::Level::getPlayer(marshalString<Encoding::E_UTF8>(_info)));
}
inline Player ^ Level::GetPlayer(ActorUniqueID ^ id)
{
    return gcnew Player(::Level::getPlayer(id));
}
inline Actor ^ Level::GetEntity(ActorUniqueID ^ id)
{
    return gcnew Actor(::Level::getEntity(*id));
}
inline List<Actor ^> ^ Level::GetAllEntities(int dimId)
{
    auto& stdvector = ::Level::getAllEntities(dimId);
    auto ret = gcnew List<Actor ^>(int(stdvector.size()));
    for each (auto& var in stdvector)
        ret->Add(gcnew Actor(var));
    return ret;
}
inline List<Actor ^> ^ Level::GetAllEntities()
{
    auto& stdvector = ::Level::getAllEntities();
    auto ret = gcnew List<Actor ^>(int(stdvector.size()));
    for each (auto& var in stdvector)
        ret->Add(gcnew Actor(var));
    return ret;
}
inline Actor ^ Level::SpawnMob(Vec3 ^ pos, int dimId, System::String ^ typeName)
{
    return gcnew Actor(::Level::spawnMob(
        *pos, dimId, marshalString<Encoding::E_UTF8>(typeName)));
}
inline Actor ^ Level::SpawnItem(Vec3 ^ pos, int dimId, ItemStack ^ item)
{
    return gcnew Actor(::Level::spawnItem(
        *pos, dimId, item->NativePtr));
}
inline bool Level::CreateExplosion(Vec3 ^ pos, int dimId, Actor ^ source, float radius, bool createFire, bool canBreak, float maxResistance)
{
    return ::Level::createExplosion(::Vec3(pos), dimId, source, radius, createFire, canBreak, maxResistance);
}
inline bool Level::CreateExplosion(Vec3 ^ pos, int dimId, Actor ^ source, float radius, bool createFire, bool canBreak)
{
    return ::Level::createExplosion(::Vec3(pos), dimId, source, radius, createFire, canBreak);
}
inline MapItemSavedData ^ Level::GetMapSavedData(ActorUniqueID ^ a0)
{
    return gcnew MapItemSavedData(::Level::getMapSavedData(*a0));
}
inline Block ^ Level::GetBlock(BlockPos ^ pos, int dimId)
{
    return gcnew Block(::Level::getBlock(pos->NativePtr, dimId));
}
inline Block ^ Level::GetBlock(BlockPos ^ pos, BlockSource ^ blockSource)
{
    return gcnew Block(::Level::getBlock(pos->NativePtr, blockSource));
}
inline Block ^ Level::GetBlockEx(BlockPos ^ pos, int dimId)
{
    return gcnew Block(::Level::getBlockEx(pos, dimId));
}
inline BlockInstance ^ Level::GetBlockInstance(BlockPos ^ pos, int dimId)
{
    return gcnew BlockInstance(::Level::getBlockInstance(pos->NativePtr, dimId));
}
inline BlockInstance ^ Level::GetBlockInstance(BlockPos ^ pos, BlockSource ^ blockSource)
{
    return gcnew BlockInstance(::Level::getBlockInstance(pos->NativePtr, blockSource));
}
inline BlockActor ^ Level::GetBlockEntity(BlockPos ^ pos, int dimId)
{
    return gcnew BlockActor(::Level::getBlockEntity(pos->NativePtr, dimId));
}
inline BlockActor ^ Level::GetBlockEntity(BlockPos ^ pos, BlockSource ^ blockSource)
{
    return gcnew BlockActor(::Level::getBlockEntity(pos->NativePtr, blockSource));
}
inline bool Level::SetBlock(BlockPos ^ pos, int dim, Block ^ block)
{
    return ::Level::setBlock(pos, dim, block);
}
inline bool Level::SetBlock(BlockPos ^ pos, int dim, System::String ^ name, unsigned short tileData)
{
    return ::Level::setBlock(pos, dim, marshalString<Encoding::E_UTF8>(name), tileData);
}
inline bool Level::SetBlock(BlockPos ^ pos, int dim, CompoundTag ^ nbt)
{
    return ::Level::setBlock((::BlockPos&)pos, dim, nbt->NativePtr);
}
inline bool Level::BreakBlockNaturally(BlockSource ^ bs, BlockPos ^ pos)
{
    return ::Level::breakBlockNaturally(bs, pos);
}
inline bool Level::BreakBlockNaturally(BlockSource ^ bs, BlockPos ^ pos, ItemStack ^ tool)
{
    return ::Level::breakBlockNaturally(bs->NativePtr, pos, tool->NativePtr);
}
inline bool Level::DestroyBlock(BlockSource ^ bs, BlockPos ^ pos, bool a2)
{
    return ::Level::destroyBlock(bs, pos, a2);
}
inline void Level::SpawnParticleEffect(System::String ^ type, Vec3 ^ pos, Dimension ^ a2)
{
    ::Level::spawnParticleEffect(marshalString<Encoding::E_UTF8>(type), pos, a2);
}
inline void Level::SpawnParticleEffect(System::String ^ type, Actor ^ a1, Vec3 ^ a2)
{
    ::Level::spawnParticleEffect(marshalString<Encoding::E_UTF8>(type), a1, a2);
}
inline bool Level::HasContainer(Vec3 ^ pos, int dim)
{
    return ::Level::hasContainer((::Vec3&)pos, dim);
}
inline Container ^ Level::GetContainer(Vec3 ^ pos, int dim)
{
    return gcnew Container(::Level::getContainer((::Vec3&)pos, dim));
}
inline ItemStack ^ Level::GetItemStackFromId(short itemId, int aux)
{
    return gcnew ItemStack(::Level::getItemStackFromId(itemId, aux));
}
inline ItemStack ^ Level::GetItemStackFromId(short itemId)
{
    return gcnew ItemStack(::Level::getItemStackFromId(itemId));
}
inline BlockSource ^ Level::GetBlockSource(int dimid)
{
    return gcnew BlockSource(::Level::getBlockSource(dimid));
}
inline BlockSource ^ Level::GetBlockSource(Actor ^ actor)
{
    return gcnew BlockSource(::Level::getBlockSource(actor));
}
inline BlockPalette ^ Level::GetBlockPalette()
{
    return gcnew BlockPalette(::Level::getBlockPalette());
}
inline Dimension ^ Level::GetDimension(AutomaticID<Dimension ^, int> ^ a0)
{
    return gcnew Dimension(::Level::getDimension((int)a0));
}
inline Actor ^ Level::GetDamageSourceEntity(ActorDamageSource ^ ads)
{
    return gcnew Actor(::Level::getDamageSourceEntity(ads));
}
inline void Level::BroadcastText(System::String ^ text, TextType type)
{
    ::Level::broadcastText(marshalString<Encoding::E_UTF8>(text), ::TextType(type));
}
inline void Level::BroadcastTitle(System::String ^ text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration)
{
    ::Level::broadcastTitle(marshalString<Encoding::E_UTF8>(text), ::TitleType(Type), FadeInDuration, RemainDuration, FadeOutDuration);
}
inline void Level::SendPacketForAllPlayer(Packet ^ pkt)
{
    ::Level::sendPacketForAllPlayer(pkt);
}
inline bool Level::RuncmdAs(Player ^ pl, System::String ^ cmd)
{
    return ::Level::runcmdAs(pl->NativePtr, marshalString<Encoding::E_UTF8>(cmd));
}
inline Pair<bool, System::String ^> Level::RuncmdEx(System::String ^ cmd)
{
    auto& kvpair = ::Level::runcmdEx(marshalString<Encoding::E_UTF8>(cmd));
    return Pair<bool, System::String ^>(kvpair.first, marshalString<Encoding::E_UTF8>(kvpair.second));
}
inline bool Level::Runcmd(System::String ^ cmd)
{
    return ::Level::runcmd(marshalString<Encoding::E_UTF8>(cmd));
}
} // namespace MC



#ifdef INCLUDE_MCAPI
unsigned int MC::Level::CreateRandomSeed()
{
    auto __ret = ::Level::createRandomSeed();
    return __ret;
}

//MC::PlayerCapabilities::ISharedController ^ MC::Level::Capabilities::get()
//{
//    auto& __ret = ((class ::Level*)NativePtr)->getCapabilities();
//    return (MC::PlayerCapabilities::ISharedController ^)((&__ret == nullptr) ? nullptr : gcnew ::MC::PlayerCapabilities::ISharedController((struct ::PlayerCapabilities::ISharedController*)&__ret));
//}

double MC::Level::TickDeltaTime::get()
{
    auto __ret = ((class ::Level*)NativePtr)->getTickDeltaTime();
    return __ret;
}

bool MC::Level::Use3DBiomeMaps::get()
{
    auto __ret = ((class ::Level*)NativePtr)->use3DBiomeMaps();
    return __ret;
}

float MC::Level::AVERAGE_GAME_TICKS_PER_RANDOM_TICK_PER_BLOCK::get()
{
    return ::Level::AVERAGE_GAME_TICKS_PER_RANDOM_TICK_PER_BLOCK;
}

float MC::Level::AVERAGE_RANDOM_TICKS_PER_BLOCK_PER_GAME_DAY::get()
{
    return ::Level::AVERAGE_RANDOM_TICKS_PER_BLOCK_PER_GAME_DAY;
}

float MC::Level::AVERAGE_RANDOM_TICKS_PER_BLOCK_PER_MINUTE::get()
{
    return ::Level::AVERAGE_RANDOM_TICKS_PER_BLOCK_PER_MINUTE;
}

float MC::Level::RANDOM_TICKS_PER_TICK_PER_SUBCHUNK::get()
{
    return ::Level::RANDOM_TICKS_PER_TICK_PER_SUBCHUNK;
}
#endif // INCLUDE_MCAPI
