#pragma once
//#include<lbpch.h>
//#include <api/MC.h>
#include <api/LiteLoaderApi.h>
#include <stl/views.h>
#include <stl/optional.h>
#include <LoaderApi.h>
#include <mc/Core.h>
#include <mc/mass.h>
typedef unsigned long long xuid_t;
typedef unsigned char permlvl_t;
enum TextType : char { 
	RAW = 0,
	CHAT = 1,
	TRANSLATION = 2,
	POPUP = 3,
	JUKEBOX_POPUP = 4,
	TIP = 5,
	SYSTEM = 6,
	WHISPER = 7,
	ANNOUNCEMENT = 8,
	JSON = 9,
	JSON_WHISPER = 10
};
template <typename T>
struct Wrapped {
	T* v;
	Wrapped(T const& x) : v((T*)&x) {}
	Wrapped(T* x) : v(x) {}
	Wrapped() {
		v = nullptr;
	}
	operator T& () {
		return *v;
	}
	operator T* () {
		return v;
	}
	T& get() {
		return *v;
	}
	T* operator->() {
		return v;
	}
	operator bool() {
		return v;
	}
};
struct WPlayer;
struct WActor;
class Dimension;
class BlockSource;
class Block;
class Level;
class ServerLevel;
class Actor;
class Mob;
class Player;
class BlockActor;
class ItemStack;

struct WDim : Wrapped<Dimension> {
	WDim(Dimension& x) : Wrapped<Dimension>(x) {}
	//LIAPI class BlockSource& getBlockSource_();
	//LIAPI void setBlock(int x, int y, int z, Block const& blk);
	//LIAPI struct WBlock getBlock(int x, int y, int z);
	//LIAPI int getID();
};
struct WLevel : Wrapped<ServerLevel> {
	WLevel() : Wrapped<ServerLevel>() {}
	WLevel(ServerLevel& x) : Wrapped<ServerLevel>(x) {}
	//LIAPI array_view<WPlayer> getUsers();
	//LIAPI optional<WPlayer> getPlayer(string_view name);
	//LIAPI void broadcastText(string_view text, TextType type = RAW);
};
struct WActor : Wrapped<Actor> {
	WActor(Actor& x) : Wrapped<Actor>(x) {}
	LIAPI void teleport(Vec3 to, int dimid);
	LIAPI int getDimID();
	LIAPI WDim getDim();
	LIAPI unsigned long long getRuntimeID();
};
struct WMob : Wrapped<Mob> {
	WMob(Mob& x) : Wrapped<Mob>(x) {}
	WActor* actor() {
		return (WActor*)this;
	}
	LIAPI void kill();
};
struct WPlayer : Wrapped<ServerPlayer> {
    WPlayer() : Wrapped<ServerPlayer>() {}
    WPlayer(Player &x) : Wrapped<ServerPlayer>(*(ServerPlayer *)&x) {}
    WPlayer(ServerPlayer &x) : Wrapped<ServerPlayer>(x) {}
    inline WActor *actor() { return (WActor *)this; }
    inline WMob *mob() { return (WMob *)this; }
    LIAPI void sendText(string text, TextType type = RAW);
    LIAPI const string &getName();
    LIAPI xuid_t getXuid();
    LIAPI string getRealName();
    LIAPI permlvl_t getPermLvl();
    LIAPI class BlockSource &getBlockSource_();
    LIAPI class NetworkIdentifier *_getNI();
    LIAPI class Certificate *_getCert();
    std::string getIp() { return liteloader::getIP(*_getNI()); }
    inline void teleport(Vec3 to, int dimid) { actor()->teleport(to, dimid); }
    inline auto getDimID() { return actor()->getDimID(); }
    inline auto getDim() { return actor()->getDim(); }
    LIAPI void kick(std::string const &reason);
    LIAPI void forceKick();
    LIAPI void kill() { mob()->kill(); }
    template <typename T>
    inline bool runcmd(T &&str) {
        return liteloader::runcmdAs(*this, std::forward<T>(str));
    }
    template <typename... T>
    inline bool runcmdA(T &&...a) {
        return liteloader::runcmdAsA(*this, std::forward<T>(a)...);
    }
};
struct WItem : Wrapped<ItemStack> {
	WItem(ItemStack& is) : Wrapped<ItemStack>(is) {}
	LIAPI unsigned char getCount() const;
	//static void procoff();
};
struct WBlock : Wrapped<Block> {
	WBlock(Block const& i) : Wrapped<Block>(i) {}
};
struct WBlockActor : Wrapped<BlockActor> {
	WBlockActor(BlockActor& i) : Wrapped<BlockActor>(i) {}
};
struct WBlockSource :Wrapped<BlockSource> {
	WBlockSource(BlockSource& x) : Wrapped<BlockSource>(x) {}
	//LIAPI WDim getDim();
};
struct WExplosion {
	WBlockSource bs;
	float rad;
	Actor* cause;
	Vec3* pos;
	char breaking;
	char firing;
};

/*
?setAllowOffhand@Item@@QEAAAEAV1@_N@Z
struct Item *__fastcall Item::setAllowOffhand(Item *this)
{
  *((_BYTE *)this + 258) |= 0x40u;
  return this;
}
*/
