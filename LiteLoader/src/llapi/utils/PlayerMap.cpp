#include "llapi/Global.h"
#include "llapi/utils/PlayerMap.h"
// PlayerMap.h
// BUG: DON'T USE GLOBAL VAR WITH A CUSTOM CONSTRUCTION!!!!
// static std::vector<DePlayerCB> depcbs;
static size_t CBSZ, CBSZ_USED;
static DePlayerCB* CBS;
LIAPI void _regDePlayerCB(DePlayerCB cb) {
    if (CBS == nullptr) {
        CBS = (DePlayerCB*)malloc(4 * sizeof(cb));
        CBSZ = 4;
        CBS[CBSZ_USED++] = cb;
    } else {
        if (CBSZ_USED == CBSZ) {
            // extend
            CBSZ += 4;
            CBS = (DePlayerCB*)realloc(CBS, CBSZ * sizeof(cb));
        }
        CBS[CBSZ_USED++] = cb;
    }
    // depcbs.emplace_back(cb);
    // printf("\n\nregister %d\n\n", CBSZ_USED);
}

THook(void, "??_EServerPlayer@@UEAAPEAXI@Z", ServerPlayer* thi, char a2) {
    for (size_t i = 0; i < CBSZ_USED; ++i) {
        CBS[i](thi);
    }
    original(thi, a2);
}