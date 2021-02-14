#include <loader/Loader.h>
class Player;
class Level;
namespace offPlayer {
	void* getCert(Player* pl) {
		return dAccess<void*, 2840>(pl);
	}
	string getXUID(Player* pl) {
		Level* level = (Level*)*((uintptr_t*)((uintptr_t)pl + 856));
		void* mce_uuid = (void*)((uintptr_t)pl + 2824); //witherboss::_hurt
		return SymCall("?getPlayerXUID@Level@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUUID@mce@@@Z",
			string&, Level*, void*)(level, mce_uuid);
	}
};
