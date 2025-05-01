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
    MCNAPI AttributeInstance(::AttributeInstance const&);

    MCNAPI float _calculateValue();

    MCNAPI float _sanitizeValue(float value);

    MCNAPI void addBuff(::AttributeBuff const& buff, ::AttributeModificationContext context);

    MCNAPI void addModifier(::AttributeModifier const& modifier, ::AttributeModificationContext context);

    MCNAPI ::std::vector<::AttributeModifier> getModifiers() const;

    MCNAPI bool hasModifier(::AttributeModifier const& modifier) const;

    MCNAPI bool hasModifier(::std::shared_ptr<::AttributeModifier> modifier) const;

    MCNAPI void removeBuff(::AttributeBuff const& buff);

    MCNAPI void removeModifier(::AttributeModifier const& modifier, ::AttributeModificationContext context);

    MCNAPI void removeModifiers(::AttributeModificationContext context);

    MCNAPI void setRange(float min, float defaultValue, float max, ::AttributeModificationContext context);

    MCNAPI void updateModifier(::AttributeModifier const& takeOver, ::AttributeModificationContext context);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AttributeInstance const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::AttributeModificationContext context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
