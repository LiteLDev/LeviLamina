#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class AttributeBuff;
class AttributeInstanceDelegate;
class AttributeInstanceHandle;
class AttributeModifier;
class BaseAttributeMap;
namespace mce { class UUID; }
// clang-format on

class AttributeInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk183bf8;
    ::ll::UntypedStorage<8, 8>  mUnk1ca1d4;
    ::ll::UntypedStorage<8, 24> mUnk7319d3;
    ::ll::UntypedStorage<8, 24> mUnkbf5019;
    ::ll::UntypedStorage<8, 24> mUnk56d777;
    ::ll::UntypedStorage<8, 16> mUnk82a33a;
    union {
        ::ll::UntypedStorage<4, 12> mUnka87383;
        struct {
            ::ll::UntypedStorage<4, 4> mUnkd9d901;
            ::ll::UntypedStorage<4, 4> mUnk48fff1;
            ::ll::UntypedStorage<4, 4> mUnk1ff616;
        };
    };
    union {
        ::ll::UntypedStorage<4, 12> mUnka0d1e6;
        struct {
            ::ll::UntypedStorage<4, 4> mUnk72add9;
            ::ll::UntypedStorage<4, 4> mUnk88baeb;
            ::ll::UntypedStorage<4, 4> mUnk525b7f;
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
    virtual void tick();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AttributeInstance(::AttributeInstance const&);

    MCAPI float _calculateValue();

    MCAPI float _sanitizeValue(float value);

    MCAPI void addBuff(::AttributeBuff const& buff);

    MCAPI void addModifier(::std::shared_ptr<::AttributeModifier> modifier);

    MCAPI void addModifier(::AttributeModifier const& modifier);

    MCFOLD ::Attribute const* getAttribute() const;

    MCAPI float getCurrentValue() const;

    MCAPI float getDefaultValue(int operand) const;

    MCAPI ::AttributeInstanceHandle getHandle() const;

    MCAPI float getMaxValue() const;

    MCAPI float getMinValue() const;

    MCAPI ::AttributeModifier getModifier(::mce::UUID const& id) const;

    MCAPI ::std::vector<::AttributeModifier> getModifiers() const;

    MCAPI bool hasModifier(::mce::UUID const& id) const;

    MCAPI bool hasModifier(::AttributeModifier const& modifier) const;

    MCAPI bool hasModifier(::std::shared_ptr<::AttributeModifier> modifier) const;

    MCAPI bool hasModifiers() const;

    MCAPI bool hasTemporalBuffs() const;

    MCAPI void inheritFrom(::AttributeInstance const& other, ::BaseAttributeMap* attributeMap);

    MCFOLD bool isValid() const;

    MCAPI void recalculateModifiers();

    MCAPI void registerListener(::AttributeInstance const& listener);

    MCAPI void removeBuff(::std::shared_ptr<::AttributeBuff> buff);

    MCAPI void removeBuff(::AttributeBuff const& buff);

    MCAPI void removeBuffs();

    MCAPI bool removeModifier(::mce::UUID const& id);

    MCAPI void removeModifier(::std::shared_ptr<::AttributeModifier> modifier);

    MCAPI void removeModifier(::AttributeModifier const& modifier);

    MCAPI void resetToDefaultValue();

    MCAPI void resetToMaxValue();

    MCAPI void resetToMinValue();

    MCAPI void serializationSetValue(float currentValue, int operand, float maxValue);

    MCAPI void setCurrentValue(float value);

    MCAPI void setDefaultValue(float defaultValue, int operand);

    MCAPI void setDefaultValueOnly(float newDefaultValue);

    MCAPI void setDelegate(::std::shared_ptr<::AttributeInstanceDelegate> delegate);

    MCAPI void setMaxValue(float max);

    MCAPI void setRange(float min, float defaultValue, float max);

    MCAPI void updateModifier(::AttributeModifier const& takeOver);
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
    MCAPI void $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
