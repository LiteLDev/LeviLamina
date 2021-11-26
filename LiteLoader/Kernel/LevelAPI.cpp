#include "Global.h"
#include <MC/Block.hpp>
#include <MC/Actor.hpp>
#include <MC/ItemStack.hpp>
#include <MC/Spawner.hpp>
#include <MC/Level.hpp>
#include <MC/Dimension.hpp>
#include <MC/ItemActor.hpp>
#include <MC/BlockSource.hpp>
#include <MC/MinecraftCommands.hpp>
#include <MC/CommandContext.hpp>
#include <MC/ServerPlayer.hpp>
#include <command/CommandReg.h>
#include <string>
#include <vector>

Actor* Level::fetchEntity(struct ActorUniqueID a0, bool a1) {
	class Actor* (Level:: * rv)(struct ActorUniqueID, bool) const;
	*((void**)&rv) = dlsym("?fetchEntity@Level@@UEBAPEAVActor@@UActorUniqueID@@_N@Z");
	return (this->*rv)(std::forward<struct ActorUniqueID>(a0), std::forward<bool>(a1));
}

Dimension* Level::getDimension(class AutomaticID<class Dimension, int> a0) {
	class Dimension* (Level:: * rv)(class AutomaticID<class Dimension, int>) const;
	*((void**)&rv) = dlsym("?getDimension@Level@@UEBAPEAVDimension@@V?$AutomaticID@VDimension@@H@@@Z");
	return (this->*rv)(std::forward<class AutomaticID<class Dimension, int>>(a0));
}

void Level::forEachPlayer(class std::function<bool(class Player&)> a0) {
	void (Level:: * rv)(class std::function<bool(class Player&)>);
	*((void**)&rv) = dlsym("?forEachPlayer@Level@@UEAAXV?$function@$$A6A_NAEAVPlayer@@@Z@std@@@Z");
	return (this->*rv)(std::forward<class std::function<bool(class Player&)>>(a0));
}

void Level::forEachPlayer(class std::function<bool(class Player const&)> a0) {
	void (Level:: * rv)(class std::function<bool(class Player const&)>) const;
	*((void**)&rv) = dlsym("?forEachPlayer@Level@@UEBAXV?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z");
	return (this->*rv)(std::forward<class std::function<bool(class Player const&)>>(a0));
}

BlockSource* Level::getBlockSource(int dimid) {
	auto dim = Global<Level>->getDimension(dimid);
    return &dim->getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD();
	//return dAccess<BlockSource*>(dim, 96);
}

BlockSource* Level::getBlockSource(Actor* ac) {
	return const_cast<BlockSource*>(&ac->getRegionConst());
}

bool Level::setBlock(IntVec4 pos, Block* block) {
	BlockSource* bs = getBlockSource(pos.dim);
	BlockPos bp{ pos.x, pos.y, pos.z };
	return bs->setBlock(bp, *block, 3, nullptr);       // updateFlag = 3 from IDA SetBlockCommand::execute()
}

bool Level::setBlock(IntVec4 pos, const string& name, unsigned short tileData) {
	Block* newBlock = Block::create(name, tileData);
	if (!newBlock)
		return false;
	return setBlock(pos, newBlock);
}

bool Level::setBlock(IntVec4 pos, Tag* nbt) {
	Block* newBlock = Block::create(nbt);
	if (!newBlock)
		return false;
	return setBlock(pos, newBlock);
}
#include <MC/ActorDamageSource.hpp>
Actor* Level::getDamageSourceEntity(ActorDamageSource* ads) {
	char v83;
    ActorUniqueID v6 = ads->getDamagingEntityUniqueID();
	return Global<Level>->fetchEntity(v6, 0);
}

bool Level::spawnParticle(FloatVec4 pos, const string& type) {
	string name = type;
	Level* level = Global<Level>;
	Dimension* dim = SymCall("?getDimension@Level@@UEBAPEAVDimension@@V?$AutomaticID@VDimension@@H@@@Z",
		Dimension*, void*, AutomaticID<Dimension, int>)(level, AutomaticID<Dimension, int>(pos.dim));

	SymCall("?spawnParticleEffect@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@PEAVDimension@@@Z",
		void, Level*, string&, const Vec3&, void*)
		(level, name, { pos.x,pos.y,pos.z }, dim);

	return true;
}

void* Level::ServerCommandOrigin::fake_vtbl[26];
static_assert(offsetof(Level::ServerCommandOrigin, Perm) == 64);

bool Level::runcmd(const string& cmd) {
	ServerCommandOrigin origin;
	return MinecraftCommands::_runcmd(&origin, cmd);
}

static std::unordered_map<void*, string*> origin_res;
std::pair<bool, string> Level::runcmdEx(const string& cmd) {
	ServerCommandOrigin origin;
	string val;
	origin_res[&origin] = &val;
	bool rv = MinecraftCommands::_runcmd(&origin, cmd);
	return { rv, std::move(val) };
}

static void* FAKE_PORGVTBL[26];
bool Level::runcmdAs(Player* pl, const string& cmd) {
	void** filler[5];
	ServerCommandOrigin origin;
	SymCall("??0PlayerCommandOrigin@@QEAA@AEAVPlayer@@@Z", void, void*, ServerPlayer*)(
		filler, (ServerPlayer*)pl);
	if (FAKE_PORGVTBL[1] == NULL) {
		memcpy(FAKE_PORGVTBL, ((void**)filler[0]) - 1, sizeof(FAKE_PORGVTBL));
		FAKE_PORGVTBL[1] = (void*)dummy;
	}
	filler[0] = FAKE_PORGVTBL + 1;
	return MinecraftCommands::_runcmd(filler, cmd);
}

std::vector<Player*> Level::getAllPlayers(){
	std::vector<Player*> player_list;
	Global<Level>->forEachPlayer([&](Player& sp) -> bool {
		Player* player = &sp;
		player_list.push_back(player);
		return 1;
	});
	return player_list;
}
