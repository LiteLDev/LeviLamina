#include <loader/Loader.h>
class Player;
namespace offPlayer {
	void* getCert(Player* pl) {
		return dAccess<void*, 2840>(pl);
	}
};