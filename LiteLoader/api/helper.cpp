#include <lbpch.h>
#include<api\types\types.h>
#include <loader/Loader.h>
#include <sstream>
#include <liteloader.h>
#include <unordered_map>
#include <mc/mass.h>
#include <iostream>
#include <vector>
#include <api/serviceLocate.h>
using std::unordered_map;
class ServerLevel;

namespace liteloader {
	using std::string;
	static void dummy() {
	}
	struct SCO {
		void* myVTBL;
		void* UUID[2];
		ServerLevel* lvl;
		string Name;
		uchar Perm;
		static void* fake_vtbl[26];
		SCO() {
#if 0
			SymCall("??0ServerCommandOrigin@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVServerLevel@@W4CommandPermissionLevel@@@Z", void, void*, string const&, ServerLevel*, int)(this, "Server", LocateS<ServerLevel>()._srv, 5);
			void** vtbl = (*(void***)filler) - 1;
			memcpy(fake_vtbl, vtbl, sizeof(fake_vtbl));
			//vtbl: 0x0:RTTI info,0x8 D2Ev
			*(void**)filler = fake_vtbl + 1;
			fake_vtbl[1] = (void*)dummy;
#endif
			if (fake_vtbl[1] == nullptr) {
				memcpy(fake_vtbl, (void**)(SYM("??_7ServerCommandOrigin@@6B@")) - 1, sizeof(fake_vtbl));
				fake_vtbl[1] = (void*)dummy;
			}
			myVTBL = fake_vtbl + 1;
			Name = "Server";
			Perm = 5;
			lvl = LocateS<ServerLevel>::_srv;
		}
	};
	void* SCO::fake_vtbl[26];
	static_assert(offsetof(SCO, Perm) == 64);
	LIAPI bool runcmd(const string& cmd) {
		static SCO origin;
		return MinecraftCommands::_runcmd(&origin, cmd, 4, 1);
	}
	static unordered_map<void*, string*> origin_res;
	LIAPI std::pair<bool, string> runcmdEx(const string& cmd) {
		SCO origin;
		string val;
		origin_res[&origin] = &val;
		bool rv = MinecraftCommands::_runcmd(&origin, cmd, 4, 1);
		return { rv, std::move(val) };
	}
	static void* FAKE_PORGVTBL[26];
	LIAPI bool runcmdAs(Player* pl, const string& cmd) {
		void** filler[5];
		SymCall("??0PlayerCommandOrigin@@QEAA@AEAVPlayer@@@Z", void, void*, ServerPlayer*)(filler, (ServerPlayer*)pl);
		if (FAKE_PORGVTBL[1] == NULL) {
			memcpy(FAKE_PORGVTBL, ((void**)filler[0])-1, sizeof(FAKE_PORGVTBL));
			FAKE_PORGVTBL[1] = (void*)dummy;
		}
		filler[0] = FAKE_PORGVTBL+1;
		return MinecraftCommands::_runcmd(filler, cmd, 4, 1);
	}
	LIAPI string getIP(class ::NetworkIdentifier& ni) {
		string rv = LocateS<RakPeer_t>()->getAdr(ni).toString();
		return rv.substr(0,rv.find('|'));
	}
	LIAPI std::vector<Player*> getAllPlayers() {
		std::vector<Player*> PlayerList;
		SymCall("?forEachPlayer@Level@@QEBAXV?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z", void, Level*, function<bool(Player&)>)(LocateS<Level>::_srv, [&](Player& sp)->bool{
			Player* player = &sp;
			PlayerList.push_back(player);
			return 1;
			});
		return PlayerList;
	}
};
THook(void*, "?send@CommandOutputSender@@UEAAXAEBVCommandOrigin@@AEBVCommandOutput@@@Z", void* thi, void* ori, void* out) {
	auto it = liteloader::origin_res.find(ori);
	if (it == liteloader::origin_res.end())
		return original(thi, ori, out);
#if 0
	struct CommandMsg {
		int iserror;
		string msg;
		char filler[24];
	};
	static_assert(sizeof(CommandMsg) == 64);
	static_assert(offsetof(CommandMsg, msg) == 8);
	auto& msgs = dAccess<vector<CommandMsg>, 16>(out);
	LOG(msgs.size());
	for (auto& i : msgs) {
		LOG(i.iserror, i.msg);
	}
#endif
	std::stringbuf sbuf;
	auto oBuf = std::cout.rdbuf();
	std::cout.rdbuf(&sbuf);
	auto rv = original(thi, ori, out);
	std::cout.rdbuf(oBuf);
	it->second->assign(sbuf.str());
	while (it->second->size() && (it->second->back() == '\n' || it->second->back() == '\r'))
		it->second->pop_back();
	liteloader::origin_res.erase(it);
	return rv;
}
