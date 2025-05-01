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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AttributeModifier();

    // vIndex: 1
    virtual bool isInstantaneous() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AttributeModifier(::AttributeModifier const&);

    MCNAPI AttributeModifier(
        ::mce::UUID          id,
        ::std::string const& name,
        float                amount,
        int                  operation,
        int                  operand,
        bool                 serializable
    );

    MCNAPI ::AttributeModifier& operator=(::AttributeModifier const& rhs);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& mInvalidUUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AttributeModifier const&);

    MCNAPI void*
    $ctor(::mce::UUID id, ::std::string const& name, float amount, int operation, int operand, bool serializable);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInstantaneous() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
