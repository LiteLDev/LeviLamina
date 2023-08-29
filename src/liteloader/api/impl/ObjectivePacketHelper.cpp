#include <set>
#include "liteloader/api/impl/ObjectivePacketHelper.h"
#include "liteloader/api/utils/RNG.h"

std::set<uint64_t> scoreIds;

uint64_t NewScoreId() {
    uint64_t Id{};
    do {
        Id = RNG::rand<uint64_t>();
    } while (!scoreIds.contains(Id));
    return Id;
}
