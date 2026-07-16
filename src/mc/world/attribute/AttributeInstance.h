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
namespace mce { class UUID; }
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
    AttributeInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AttributeInstance();

    virtual void tick(::AttributeModificationContext context);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AttributeInstance(::AttributeInstance const&);

    MCAPI float _calculateValue();

    MCAPI float _sanitizeValue(float value);

    MCAPI ::std::optional<float> addBuff(::AttributeBuff const& buff, ::AttributeModificationContext context);

#ifdef LL_PLAT_S
    MCAPI void addModifier(::AttributeModifier const& modifier, ::AttributeModificationContext context);
#endif

    MCAPI void addModifier(::std::shared_ptr<::AttributeModifier> modifier, ::AttributeModificationContext context);

    MCAPI ::std::vector<::AttributeModifier> getModifiers() const;

#ifdef LL_PLAT_C
    MCAPI bool hasModifier(::AttributeModifier const& modifier) const;
#endif

#ifdef LL_PLAT_S
    MCAPI bool hasModifier(::std::shared_ptr<::AttributeModifier> modifier) const;
#endif

    MCAPI ::AttributeInstance& operator=(::AttributeInstance const&);

    MCAPI void removeBuff(::AttributeBuff const& buff);

#ifdef LL_PLAT_S
    MCAPI bool removeModifier(::mce::UUID const& id, ::AttributeModificationContext context);
#endif

    MCAPI void removeModifier(::AttributeModifier const& modifier, ::AttributeModificationContext context);

#ifdef LL_PLAT_S
    MCAPI void removeModifier(::std::shared_ptr<::AttributeModifier> modifier, ::AttributeModificationContext context);

    MCAPI void removeModifiers(::AttributeModificationContext context);
#endif

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
