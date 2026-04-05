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
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~EntityComponentFactoryCerealBase() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~EntityComponentFactoryCerealBase() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void serializeComponentDefinitions(
        ::DefinitionInstanceGroup& outputDefinitions,
        ::CompoundTag const&       input,
        ::MinEngineVersion const&  minEngineVersion
    ) const;

    MCNAPI ::ICerealDefinitionSerializer* tryGetDefinitionSerializer(::std::string const& name) const;
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
