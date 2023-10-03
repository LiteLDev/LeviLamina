#include "liteloader/api/service/GlobalService.h"
#include "mc/Objective.hpp"
#include "mc/ServerScoreboard.hpp"

#include "liteloader/api/utils/Hash.h"

// helper
#define H do_hash
LLAPI bool checkSlotName(std::string const& slot) {
    switch (H(slot.c_str())) {
    case H("list"):
        break;
    case H("sidebar"):
        break;
    case H("belowname"):
        break;
    default:
        return false;
    }
    return true;
}

bool Objective::setDisplay(std::string const& slotName, ObjectiveSortOrder sort) {
    if (checkSlotName(slotName)) {
        ((ServerScoreboard*)Global<Scoreboard>)->setDisplayObjective(slotName, *this, sort);
        return true;
    }
    return false;
}
