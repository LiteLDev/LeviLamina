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
    // vIndex: 0
    virtual ~EntityComponentFactoryJson();

    MCAPI class IJsonDefinitionSerializer* tryGetDefinitionSerializer(std::string const& name) const;

    // NOLINTEND
};
