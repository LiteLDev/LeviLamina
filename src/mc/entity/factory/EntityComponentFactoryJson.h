#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/EntityComponentFactoryBase.h"

class EntityComponentFactoryJson : public ::EntityComponentFactoryBase {
public:
    // prevent constructor by default
    EntityComponentFactoryJson& operator=(EntityComponentFactoryJson const&);
    EntityComponentFactoryJson(EntityComponentFactoryJson const&);
    EntityComponentFactoryJson();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1EntityComponentFactoryJson@@UEAA@XZ
    virtual ~EntityComponentFactoryJson();

    // symbol:
    // ?tryGetDefinitionSerializer@EntityComponentFactoryJson@@QEBAPEAVIJsonDefinitionSerializer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class IJsonDefinitionSerializer* tryGetDefinitionSerializer(std::string const& name) const;

    // NOLINTEND
};
