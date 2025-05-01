#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/EntityComponentFactoryBase.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class IJsonDefinitionSerializer;
// clang-format on

class EntityComponentFactoryJson : public ::EntityComponentFactoryBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk828a3e;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityComponentFactoryJson& operator=(EntityComponentFactoryJson const&);
    EntityComponentFactoryJson(EntityComponentFactoryJson const&);
    EntityComponentFactoryJson();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EntityComponentFactoryJson() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::IJsonDefinitionSerializer* tryGetDefinitionSerializer(::std::string const& name) const;
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
