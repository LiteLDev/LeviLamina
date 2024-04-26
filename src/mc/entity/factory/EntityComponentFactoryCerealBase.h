#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/EntityComponentFactoryBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class EntityComponentFactoryCerealBase : public ::EntityComponentFactoryBase {
public:
    // prevent constructor by default
    EntityComponentFactoryCerealBase& operator=(EntityComponentFactoryCerealBase const&);
    EntityComponentFactoryCerealBase(EntityComponentFactoryCerealBase const&);
    EntityComponentFactoryCerealBase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1EntityComponentFactoryCerealBase@@UEAA@XZ
    virtual ~EntityComponentFactoryCerealBase();

    // symbol: ??0EntityComponentFactoryCerealBase@@QEAA@AEAUReflectionCtx@cereal@@@Z
    MCAPI explicit EntityComponentFactoryCerealBase(struct cereal::ReflectionCtx&);

    // symbol: ?cerealContext@EntityComponentFactoryCerealBase@@QEAAAEAUReflectionCtx@cereal@@XZ
    MCAPI struct cereal::ReflectionCtx& cerealContext();

    // symbol: ?cerealContext@EntityComponentFactoryCerealBase@@QEBAAEBUReflectionCtx@cereal@@XZ
    MCAPI struct cereal::ReflectionCtx const& cerealContext() const;

    // symbol:
    // ?serializeComponentDefinitions@EntityComponentFactoryCerealBase@@QEBAXAEAVDefinitionInstanceGroup@@AEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@AEBVSemVersion@@@Z
    MCAPI void
    serializeComponentDefinitions(class DefinitionInstanceGroup&, rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&, class SemVersion const&)
        const;

    // symbol:
    // ?tryGetDefinitionSerializer@EntityComponentFactoryCerealBase@@QEBAPEAVICerealDefinitionSerializer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class ICerealDefinitionSerializer* tryGetDefinitionSerializer(std::string const&) const;

    // NOLINTEND
};
