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
    ::ll::UntypedStorage<8, 32> mUnk32d71a;
    // NOLINTEND

public:
    // prevent constructor by default
    IDefinitionInstance& operator=(IDefinitionInstance const&);
    IDefinitionInstance(IDefinitionInstance const&);
    IDefinitionInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void _initialize(::EntityContext&) const = 0;

    // vIndex: 1
    virtual void _uninitialize(::EntityContext&) const = 0;

    // vIndex: 2
    virtual void _save(::EntityContext const&, ::CompoundTag&) const = 0;

    // vIndex: 3
    virtual void _load(::EntityContext&, ::CompoundTag const&, ::DataLoadHelper&) const = 0;

    // vIndex: 4
    virtual void _reload(::EntityContext&) const = 0;

    // vIndex: 5
    virtual ~IDefinitionInstance();

    // vIndex: 6
    virtual ushort getDefinitionTypeId() const = 0;

    // vIndex: 7
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
