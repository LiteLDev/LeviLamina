#include <lbpch.h>
#include <api\types\types.h>
#include <debug/MemSearcher.h>
#include <mc/Actor.h>
#include <mc/Level.h>
static MSearcherEx<unsigned long long> wa_getrtid;
unsigned long long WActor::getRuntimeID() {
    if (!wa_getrtid.myOff) {
        auto plvl = LocateS<ServerLevel>::_srv;
        wa_getrtid.init(
            v,
            [plvl, base = this->v](void *x) -> bool {
                uintptr_t xx = (uintptr_t)x;
                if ((xx & 7))
                    return false;
                return plvl->getRuntimeEntity({*(u64 *)x}, false) == base;
            },
            159 * 8);
    }
    return *wa_getrtid.get(v);
}
static uintptr_t poff_dim;
LIAPI WDim WActor::getDim() {
    if (!poff_dim) {
        char filler[256];
        SymCall("??0ActorCommandOrigin@@QEAA@AEAVActor@@@Z", void, char *, Actor *)(filler, v);
        void *get    = SymCall("?getDimension@ActorCommandOrigin@@UEBAPEAVDimension@@XZ", void *,
                            char *)(filler);
        void **myMEM = (void **)v;
        for (int i = 96; i < 116; ++i) {
            if (myMEM[i] == get) {
                if (poff_dim) {
                    printf("wtf actor %lld %d\n", poff_dim, i * 8);
                }
                poff_dim = (size_t)i * 8;
            }
        }
    }
    uintptr_t ptr = (uintptr_t)v;
    ptr += poff_dim;
    return WDim(**(Dimension **)ptr);
}
LIAPI int WActor::getDimID() {
    return v->getDimensionId();
}

LIAPI void WActor::teleport(Vec3 to, int dimid) {
    char mem[128];
    SymCall(
        "?computeTarget@TeleportCommand@@SA?AVTeleportTarget@@AEAVActor@@VVec3@@PEAV4@V?$"
        "AutomaticID@VDimension@@H@@VRelativeFloat@@4H@Z",
        void *, void *, Actor *, Vec3, int, int, float, float,
        int)(&mem, v, to, 0, dimid, 0, 0, 15);
    SymCall("?applyTarget@TeleportCommand@@SAXAEAVActor@@VTeleportTarget@@@Z", void, Actor *,
            void *)(v, &mem);
}
/*
THook(void,
"?computeTarget@TeleportCommand@@SA?AVTeleportTarget@@AEAVActor@@VVec3@@PEAV4@V?$AutomaticID@VDimension@@H@@VRelativeFloat@@4H@Z",
void* target, Actor* actor, Vec3 to, int to2, int dimid, float f1, float f2, int i1, long long i2) {
        std::cout << target << " " << actor->getNameTag() << " " << to.toString()  << " " << to2 <<
" " << dimid << " " << f1 << " " << f2 << " " << i1 << " " << i2 << "\n"; return original(target,
actor, to, to2, dimid, f1, f2, i1, i2);
}

THook(void, "?applyTarget@TeleportCommand@@SAXAEAVActor@@VTeleportTarget@@@Z", Actor* actor, void*
target) { std::cout << actor->getNameTag() << " " << target << "\n"; return original(actor, target);
}*/