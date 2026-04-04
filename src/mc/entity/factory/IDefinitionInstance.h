#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
class EntityContext;
// clang-format on

class IDefinitionInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3f4ee1;
    // NOLINTEND

public:
    // prevent constructor by default
    IDefinitionInstance& operator=(IDefinitionInstance const&);
    IDefinitionInstance(IDefinitionInstance const&);
    IDefinitionInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _initialize(::EntityContext& entity) const = 0;

    virtual void _uninitialize(::EntityContext& entity) const = 0;

    virtual void _save(::EntityContext const& entity, ::CompoundTag& tag) const = 0;

    virtual void _load(::EntityContext& entity, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) const = 0;

    virtual void _reload(::EntityContext& entity) const = 0;

    virtual ~IDefinitionInstance();

    virtual ushort getDefinitionTypeId() const = 0;

    virtual ushort getRuntimeTypeId() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ushort $getRuntimeTypeId() const;


    // NOLINTEND
};
