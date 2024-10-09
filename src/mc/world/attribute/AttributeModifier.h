#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/UUID.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeModifierOperation.h"
#include "mc/world/attribute/AttributeOperands.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class AttributeModifier {
public:
    float                        mAmount;
    ::AttributeModifierOperation mOperation;
    ::AttributeOperands          mOperand;
    std::string                  mName;
    mce::UUID                    mId;
    bool                         mSerialize;

    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AttributeModifier();

    // vIndex: 1
    virtual bool isInstantaneous() const;

    MCAPI AttributeModifier();

    MCAPI AttributeModifier(class AttributeModifier const&);

    MCAPI AttributeModifier(
        class mce::UUID              id,
        std::string const&           name,
        float                        amount,
        ::AttributeModifierOperation operation,
        ::AttributeOperands          operand,
        bool                         serializable
    );

    MCAPI AttributeModifier(
        class mce::UUID    id,
        std::string const& name,
        float              amount,
        int                operation,
        int                operand,
        bool               serializable
    );

    MCAPI float getAmount() const;

    MCAPI class mce::UUID const& getId() const;

    MCAPI std::string const& getName() const;

    MCAPI int getOperand() const;

    MCAPI int getOperation() const;

    MCAPI class AttributeModifier& operator=(class AttributeModifier const& rhs);

    MCAPI bool operator==(class AttributeModifier const& rhs) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class mce::UUID const mInvalidUUID;

    // NOLINTEND
};
