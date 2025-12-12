#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/world/attribute/AttributeModifierOperation.h"
#include "mc/world/attribute/AttributeOperands.h"

class AttributeModifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                        mAmount;
    ::ll::TypedStorage<4, 4, ::AttributeModifierOperation> mOperation;
    ::ll::TypedStorage<4, 4, ::AttributeOperands>          mOperand;
    ::ll::TypedStorage<8, 32, ::std::string>               mName;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                 mId;
    ::ll::TypedStorage<1, 1, bool>                         mSerialize;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeModifier();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AttributeModifier();

    virtual bool isInstantaneous() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AttributeModifier(::AttributeModifier const&);

    MCAPI ::AttributeModifier& operator=(::AttributeModifier const& rhs);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& mInvalidUUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AttributeModifier const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isInstantaneous() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
