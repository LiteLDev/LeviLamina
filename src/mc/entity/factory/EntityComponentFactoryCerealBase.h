#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/EntityComponentFactoryBase.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DefinitionInstanceGroup;
class ICerealDefinitionSerializer;
class MinEngineVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class EntityComponentFactoryCerealBase : public ::EntityComponentFactoryBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8f50f9;
    ::ll::UntypedStorage<8, 24> mUnkd08b5d;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityComponentFactoryCerealBase& operator=(EntityComponentFactoryCerealBase const&);
    EntityComponentFactoryCerealBase(EntityComponentFactoryCerealBase const&);
    EntityComponentFactoryCerealBase();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit EntityComponentFactoryCerealBase(::cereal::ReflectionCtx& ctx);

    MCNAPI ::cereal::ReflectionCtx& cerealContext();

    MCNAPI void serializeComponentDefinitions(
        ::DefinitionInstanceGroup& outputDefinitions,
        ::CompoundTag const&       input,
        ::MinEngineVersion const&  minEngineVersion
    ) const;

    MCNAPI ::ICerealDefinitionSerializer* tryGetDefinitionSerializer(::std::string const& name) const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::cereal::ReflectionCtx& ctx);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
