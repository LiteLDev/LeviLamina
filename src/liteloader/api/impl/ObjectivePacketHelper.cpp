#include "liteloader/api/impl/ObjectivePacketHelper.h"
#include "liteloader/api/utils/RNG.h"
#include <set>

std::set<uint64> scoreIds;

uint64 NewScoreId() {
    uint64 Id{};
    do {
        Id = RNG::rand<uint64>();
    } while (!scoreIds.contains(Id));
    return Id;
}
