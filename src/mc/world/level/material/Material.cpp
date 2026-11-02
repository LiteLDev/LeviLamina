#include "mc/world/level/material/Material.h"

#include "ll/api/memory/Symbol.h"
#include "mc/deps/core/container/DenseEnumMap.h"

using namespace ll::memory_literals;

::Material const& Material::getMaterial(::SharedTypes::v1_26_20::MaterialType type) {
#ifdef LL_PLAT_C
    auto materials = reinterpret_cast<Bedrock::DenseEnumMap<SharedTypes::v1_26_20::MaterialType, Material, 25>*>(
        "?MATERIALS@?1??getMaterial@Material@@SAAEBV2@W4MaterialType@v1_26_20@SharedTypes@@@Z@4V?$DenseEnumMap@W4MaterialType@v1_26_20@SharedTypes@@VMaterial@@$0BJ@@Bedrock@@B.llvm.16886784336228797767"_sym
            .resolve()
    );
#else
    auto materials = reinterpret_cast<Bedrock::DenseEnumMap<SharedTypes::v1_26_20::MaterialType, Material, 25>*>(
        "?MATERIALS@?1??getMaterial@Material@@SAAEBV2@W4MaterialType@v1_26_20@SharedTypes@@@Z@4V?$DenseEnumMap@W4MaterialType@v1_26_20@SharedTypes@@VMaterial@@$0BJ@@Bedrock@@B.llvm.3084375022600936839"_sym
            .resolve()
    );
#endif
    return materials->at(type);
}