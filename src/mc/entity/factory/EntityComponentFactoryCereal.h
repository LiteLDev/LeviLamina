#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/EntityComponentFactoryBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class EntityComponentFactoryCereal : public ::EntityComponentFactoryBase {
public:
    // prevent constructor by default
    EntityComponentFactoryCereal& operator=(EntityComponentFactoryCereal const&);
    EntityComponentFactoryCereal(EntityComponentFactoryCereal const&);
    EntityComponentFactoryCereal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1EntityComponentFactoryCereal@@UEAA@XZ
    virtual ~EntityComponentFactoryCereal();

    // symbol: ??0EntityComponentFactoryCereal@@QEAA@AEAUReflectionCtx@cereal@@@Z
    MCAPI explicit EntityComponentFactoryCereal(struct cereal::ReflectionCtx&);

    // symbol: ?cerealContext@EntityComponentFactoryCereal@@QEAAAEAUReflectionCtx@cereal@@XZ
    MCAPI struct cereal::ReflectionCtx& cerealContext();

    // symbol: ?cerealContext@EntityComponentFactoryCereal@@QEBAAEBUReflectionCtx@cereal@@XZ
    MCAPI struct cereal::ReflectionCtx const& cerealContext() const;

    // symbol:
    // ?serializeComponentDefinitions@EntityComponentFactoryCereal@@QEBAXAEAVDefinitionInstanceGroup@@AEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@AEBVSemVersion@@@Z
    MCAPI void serializeComponentDefinitions(
        class DefinitionInstanceGroup& outputDefinitions,
        rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
                                input,
        class SemVersion const& engineVersion
    ) const;

    // symbol:
    // ?tryGetDefinitionSerializer@EntityComponentFactoryCereal@@QEBAPEAVICerealDefinitionSerializer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class ICerealDefinitionSerializer* tryGetDefinitionSerializer(std::string const& name) const;

    // NOLINTEND
};
