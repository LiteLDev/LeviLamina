#include "mc/world/level/Level.h"
#include "mc/world/actor/player/Player.h"

optional_ref<Player> Level::getPlayerByNameOrXUID(std::string const& info) const {
    std::string target{info};

    std::transform(target.begin(), target.end(), target.begin(), ::tolower); // lower case the string

    size_t  delta = UINT64_MAX; // c++ int max
    Player* found = nullptr;
    const_cast<Level*>(this)->forEachPlayer([&](Player& player) -> bool {
        if (player.getXuid() == target || player.getRealName() == info) {
            found = &player;
            return false;
        }

        std::string pName = player.getRealName();
        std::transform(pName.begin(), pName.end(), pName.begin(), ::tolower);

        // fuzzy matching
        if (pName.find(target) == 0) {
            // 0 ís the index where the "target" appear in "pName"
            size_t curDelta = pName.length() - target.length();
            if (curDelta == 0) {
                found = &player;
            }

            if (curDelta < delta) {
                found = &player;
                delta = curDelta;
            }
        }
        return true;
    });
    return found;
}