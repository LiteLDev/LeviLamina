#include <set>
#include "llapi/Impl/ObjectivePacketHelper.h"
std::set<uint64_t> scoreIds;

#define RAND_SCORE_ID() (uint64_t)((rand() << 16) + rand() + 1145140)

uint64_t NewScoreId() {
    uint64_t Id = 0;
    do {
        Id = RAND_SCORE_ID();
    } while (scoreIds.find(Id) != scoreIds.end());
    return Id;
}
