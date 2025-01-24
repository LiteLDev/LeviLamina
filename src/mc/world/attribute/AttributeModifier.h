#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeModifierOperation.h"
#include "mc/world/attribute/AttributeOperands.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

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
    AttributeModifier(AttributeModifier const&);

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
    MCAPI AttributeModifier();

    MCAPI AttributeModifier(
        ::mce::UUID          id,
        ::std::string const& name,
        float                amount,
        int                  operation,
        int                  operand,
        bool                 serializable
    );

    MCAPI AttributeModifier(
        ::mce::UUID                  id,
        ::std::string const&         name,
        float                        amount,
        ::AttributeModifierOperation operation,
        ::AttributeOperands          operand,
        bool                         serializable
    );

    MCFOLD float getAmount() const;

    MCFOLD ::mce::UUID const& getId() const;

    MCFOLD ::std::string const& getName() const;

    MCFOLD int getOperand() const;

    MCFOLD int getOperation() const;

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
    MCAPI void* $ctor();

    MCAPI void*
    $ctor(::mce::UUID id, ::std::string const& name, float amount, int operation, int operand, bool serializable);

    MCAPI void* $ctor(
        ::mce::UUID                  id,
        ::std::string const&         name,
        float                        amount,
        ::AttributeModifierOperation operation,
        ::AttributeOperands          operand,
        bool                         serializable
    );
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
