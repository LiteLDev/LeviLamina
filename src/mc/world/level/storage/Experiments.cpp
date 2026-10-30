#include "mc/world/level/storage/Experiments.h"

#include "ll/api/memory/Symbol.h"
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/world/level/storage/AllExperiments.h"

using namespace ll::memory_literals;

bool Experiments::isExperimentEnabled(AllExperiments experiment) const {
#ifdef LL_PLAT_C
    auto& exp_mapping = *reinterpret_cast<Bedrock::DenseEnumMap<AllExperiments, int, 22>*>(
        "?EXPERIMENT_MAPPING@ExperimentsAnon@?A0xAA47C952@@3V?$DenseEnumMap@W4AllExperiments@@H$0BJ@@Bedrock@@B.llvm.16301445335184787722"_sym
            .resolve()
    );
#else
    auto& exp_mapping = *reinterpret_cast<Bedrock::DenseEnumMap<AllExperiments, int, 22>*>(
        "?EXPERIMENT_MAPPING@ExperimentsAnon@?A0x5E50A8D2@@3V?$DenseEnumMap@W4AllExperiments@@H$0BJ@@Bedrock@@B.llvm.2133887903041283872"_sym
            .resolve()
    );
#endif
    auto const index = exp_mapping[experiment];
    if (index == -1) return false;
    if (index == -2) return true;
    return mExperimentData.get()[index];
}
