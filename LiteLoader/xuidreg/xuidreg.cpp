#include<stl\KVDB.h>
#include<stl\viewhelper.h>
#include<api\xuidreg\xuidreg.h>
#include<mc/Certificate.h>
#include<mc/Core.h>
#include<api/serviceLocate.h>
#include<stl/views.h>
#include<api/types/types.h>
#include<api/Basic_Event.h>
#include<mc/OffsetHelper.h>
#include<stl\useful.h>
namespace XIDREG {
	static std::unique_ptr<KVDBImpl> xuiddb;

	/*	LIAPI optional<string> id2str(xuid_t xid);
	LIAPI optional<xuid_t> str2id(string const& name);
	LIAPI void foreach (std::function<bool(xuid_t, string_view)>&&);*/
	LIAPI optional<xuid_t> str2id(string_view _name) {
		if (_name.size() >= 512)
			return {};
		if (_name == "system")
			return { 0 };
		char buf[512];
		for (int i = 0; i < _name.size(); ++i) {
			buf[i] = std::tolower(_name[i]);
		}
		string_view name(buf, _name.size());
		string rv;
		if (xuiddb->get(name, rv) && rv.size() == 8) {
			return { *(xuid_t*)(rv.data()) };
		}
		return {};
	}
	LIAPI optional<string> id2str(xuid_t id) {
		if (id == 0) {
			return { "system" };
		}
		string val;
		if (xuiddb->get(to_view(id), val))
			return { val };
		return {};
	}
	LIAPI void foreach(std::function<bool(xuid_t, string_view)>&&x) {
		xuiddb->iter([&](string_view k, string_view v) -> bool {
			if (k.size() == 8 && v.size() != 8) {
				return x(*(xuid_t*)k.data(), v);
			}
			return true;
		});
	}
	static void insert(xuid_t id, string_view _name) {
		if (_name.size() >= 512)
			return;
		char buf[512];
		for (int i = 0; i < _name.size(); ++i) {
			buf[i] = std::tolower(_name[i]);
		}
		string_view name(buf, _name.size());
		string val;
		if (xuiddb->get(name, val)) {
			if (val != to_view(id)) {
				//LOG("[BASE/XUID] update", _name, "'s xuid->", id);
				xuiddb->del(val);
				xuiddb->put(name, to_view(id));
				xuiddb->put(to_view(id), name);
			}
		}
		else {
			//LOG("[BASE/XUID] insert", _name, "'s xuid", id);
			xuiddb->put(name, to_view(id));
			xuiddb->put(to_view(id), name);
		}
	}
	void initAll() {
		Event::addEventListener([](ServerStartedEV) {
			xuiddb = MakeKVDB(GetDataPath("xuiddb"), true, 2);
		});
		Event::addEventListener([](JoinEV var) {
			auto sp = var.Player;
			auto name = offPlayer::getRealName((Player*)sp);
			auto _xuid = offPlayer::getXUIDString(sp);
			xuid_t xuid;
			if (_xuid.size() <= 1)
				xuid = do_hash(name);
			else
				xuid = std::stoull(_xuid);
			insert(xuid, name);
		});
	}
};