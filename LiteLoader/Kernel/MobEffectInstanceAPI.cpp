#include <Global.h>
#include <MC/MobEffectInstance.hpp>
using namespace std;

MobEffectInstance& create(int effect, int ticks, int level, bool unknown, bool show_particle, bool display_animation)
{
    char a1[48];
    MobEffectInstance& meff = SymCall("??0MobEffectInstance@@QEAA@IHH_N00@Z", MobEffectInstance&, MobEffectInstance*, int, int, int, bool, bool, bool)((MobEffectInstance*)a1, effect, ticks, level, unknown, show_particle, display_animation);
    return meff;
}
