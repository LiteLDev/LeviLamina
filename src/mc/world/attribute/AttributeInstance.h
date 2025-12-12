#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class AttributeBuff;
class AttributeInstanceDelegate;
class AttributeInstanceHandle;
class AttributeModifier;
class TemporalAttributeBuff;
struct AttributeModificationContext;
// clang-format on

class AttributeInstance {
public:
    // AttributeInstance inner types define
    using ModifierVector = ::std::vector<::AttributeModifier>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Attribute const*>                              mAttribute;
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeModifier>>             mModifierList;
    ::ll::TypedStorage<8, 24, ::std::vector<::TemporalAttributeBuff>>         mTemporalBuffs;
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeInstanceHandle>>       mListeners;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AttributeInstanceDelegate>> mDelegate;
    union {
        ::ll::TypedStorage<4, 12, float[3]> mDefaultValues;
        struct {
            ::ll::TypedStorage<4, 4, float> mDefaultMinValue;
            ::ll::TypedStorage<4, 4, float> mDefaultMaxValue;
            ::ll::TypedStorage<4, 4, float> mDefaultValue;
        };
    };
    union {
        ::ll::TypedStorage<4, 12, float[3]> mCurrentValues;
        struct {
            ::ll::TypedStorage<4, 4, float> mCurrentMinValue;
            ::ll::TypedStorage<4, 4, float> mCurrentMaxValue;
            ::ll::TypedStorage<4, 4, float> mCurrentValue;
        };
    };
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeInstance& operator=(AttributeInstance const&);
    AttributeInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AttributeInstance();

    // vIndex: 1
    virtual void tick(::AttributeModificationContext context);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AttributeInstance(::AttributeInstance const&);

    MCAPI float _calculateValue();

    MCAPI float _sanitizeValue(float value);

    MCAPI void addBuff(::AttributeBuff const& buff, ::AttributeModificationContext context);

    MCAPI void addModifier(::AttributeModifier const& modifier, ::AttributeModificationContext context);

    MCAPI ::std::vector<::AttributeModifier> getModifiers() const;

    MCAPI bool hasModifier(::AttributeModifier const& modifier) const;

    MCAPI bool hasModifier(::std::shared_ptr<::AttributeModifier> modifier) const;

    MCAPI void removeBuff(::AttributeBuff const& buff);

    MCAPI void removeModifier(::AttributeModifier const& modifier, ::AttributeModificationContext context);

    MCAPI void removeModifiers(::AttributeModificationContext context);

    MCAPI void setRange(float min, float defaultValue, float max, ::AttributeModificationContext context);

    MCAPI void updateModifier(::AttributeModifier const& takeOver, ::AttributeModificationContext context);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AttributeInstance const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::AttributeModificationContext context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
