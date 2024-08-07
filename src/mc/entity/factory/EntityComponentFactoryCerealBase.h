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
    // vIndex: 0
    virtual ~EntityComponentFactoryCerealBase();

    MCAPI explicit EntityComponentFactoryCerealBase(struct cereal::ReflectionCtx&);

    MCAPI struct cereal::ReflectionCtx& cerealContext();

    MCAPI struct cereal::ReflectionCtx const& cerealContext() const;

    MCAPI void
    serializeComponentDefinitions(class DefinitionInstanceGroup&, rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&, class SemVersion const&)
        const;

    MCAPI class ICerealDefinitionSerializer* tryGetDefinitionSerializer(std::string const&) const;

    // NOLINTEND
};
