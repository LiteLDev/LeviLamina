#ifdef LL_DEBUG

#include "ll/api/memory/Hook.h"
#include "mc/common/wrapper/OwnerPtrFactory.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/NetherDimension.h"
#include "mc/world/level/dimension/VanillaDimensionFactory.h"
#include "mc/world/level/dimension/VanillaDimensions.h"
#include "mc/world/level/levelgen/WorldGenerator.h"

class ILevel;
class Scheduler;
class Dimension;
using namespace ll::memory;

using OwnerT = OwnerPtrFactory<Dimension, ILevel&, Scheduler&>;

namespace {
typedef void (*V_PTR)(); // typedef一下函数指针，相当于把返回值为void型的
// 函数指针定义成 V_PTR.

// 打印虚函数表
void PrintPFTable(V_PTR* table) {
    // 因为虚表最后一个为nllptr，我们可以利用这个打印虚表。
    for (size_t i = 0; table[i] != nullptr; ++i) { printf("table[%d] : %p->\n", i, table[i]); }
}

} // namespace

LL_AUTO_TYPED_INSTANCE_HOOK(
    RegistryDimensionTest,
    HookPriority::Normal,
    OwnerT,
    &OwnerT::registerFactory,
    void,
    const std::string&                                                          worldName,
    std::function<OwnerPtrT<SharePtrRefTraits<Dimension>>(ILevel&, Scheduler&)> faction
) {
    if (worldName == "nether") {
        faction = [](ILevel& ilevel, Scheduler& scheduler) -> OwnerPtrT<SharePtrRefTraits<Dimension>> {
            std::cout << "[TEST] Create Nether Dimension" << std::endl;
            auto dim = std::make_shared<NetherDimension>(ilevel, scheduler);
            // auto refp = dim.get();
            // print IDimension::vftable
            // PrintPFTable((V_PTR*)*(__int64*)refp);

            // print LevelListener::vftable
            // PrintPFTable((V_PTR*)*(__int64*)((char*)refp+8));

            // print SavedData::vftable
            // PrintPFTable((V_PTR*)*(__int64*)((char*)refp+16));

            // print Bedrock::EnableNonOwnerReferences::vftable
            // PrintPFTable((V_PTR*)*(__int64*)((char*)refp+64));
            return dim;
        };
    };
    origin(worldName, faction);
};

// registry dimensoin when in ll, must reload Dimension::getWeakRef
LL_AUTO_TYPED_INSTANCE_HOOK(RegistryDimensionTest1, HookPriority::Normal, Dimension, &Dimension::getWeakRef, WeakRefT<SharePtrRefTraits<Dimension>>) {
    if (this->getDimensionId() == 1) { return weak_from_this(); };
    return origin();
};


#endif // LL_DEBUG