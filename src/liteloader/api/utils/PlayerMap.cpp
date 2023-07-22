#include "liteloader/api/utils/PlayerMap.h"

#include "liteloader/api/memory/Hook.h"

// PlayerMap.h
// BUG: DON'T USE GLOBAL VAR WITH A CUSTOM CONSTRUCTION!!!!
// static std::vector<DePlayerCB> depcbs;
static size_t      CBSZ, CBSZ_USED;
static DePlayerCB* CBS;
LLAPI void         _regDePlayerCB(DePlayerCB cb) {
    if (CBS == nullptr) {
        CBS              = (DePlayerCB*)malloc(4 * sizeof(cb));
        CBSZ             = 4;
        CBS[CBSZ_USED++] = cb;
    } else {
        if (CBSZ_USED == CBSZ) {
            // extend
            CBSZ += 4;
            CBS  = (DePlayerCB*)realloc(CBS, CBSZ * sizeof(cb));
        }
        CBS[CBSZ_USED++] = cb;
    }
    // depcbs.emplace_back(cb);
    // printf("\n\nregister %d\n\n", CBSZ_USED);
}

LL_AUTO_STATIC_HOOK(
    PM1,
    HookPriority::Normal,
    "??_EServerPlayer@@UEAAPEAXI@Z",
    void,
    ServerPlayer* thi,
    char          a2
) {
    for (size_t i = 0; i < CBSZ_USED; ++i) {
        CBS[i](thi);
    }
    origin(thi, a2);
}
