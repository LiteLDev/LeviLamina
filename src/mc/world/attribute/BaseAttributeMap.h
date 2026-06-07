#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class AttributeInstance;
class AttributeInstanceConstRef;
class AttributeInstanceHandle;
class AttributeInstanceRef;
class HashedString;
struct AttributeData;
struct AttributeModificationContext;
struct MutableAttributeWithContext;
// clang-format on

class BaseAttributeMap {
public:
    // BaseAttributeMap inner types define
    using UnderlyingMapContainer = ::brstd::
        flat_map<uint, ::AttributeInstance, ::std::less<uint>, ::std::vector<uint>, ::std::vector<::AttributeInstance>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            uint,
            ::AttributeInstance,
            ::std::less<uint>,
            ::std::vector<uint>,
            ::std::vector<::AttributeInstance>>>
                                                                                     mInstanceMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeInstanceHandle>>              mDirtyAttributes;
    ::ll::TypedStorage<8, 8, void (BaseAttributeMap::*)(::AttributeInstance const&)> mOnAttributeModified;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseAttributeMap& operator=(BaseAttributeMap const&);
    BaseAttributeMap();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseAttributeMap(::BaseAttributeMap const&);

    MCFOLD ::AttributeInstanceRef UnsafePromoteRawRefToAccessRef(::AttributeInstance& rawRef) const;

    MCAPI void _onAttributeModified(::AttributeInstance const& attributeInstance);

#ifdef LL_PLAT_C
    MCFOLD void _onAttributeModifiedDisabled(::AttributeInstance const&);
#endif

    MCFOLD ::brstd::associative_adapter<
        uint,
        ::AttributeInstance,
        ::std::less<uint>,
        ::std::vector<uint>,
        ::std::vector<::AttributeInstance>>::
        iterator_impl<
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<uint>>>,
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::AttributeInstance>>>,
            ::std::pair<uint const&, ::AttributeInstance const&>> begin() const;

    MCFOLD ::brstd::associative_adapter<
        uint,
        ::AttributeInstance,
        ::std::less<uint>,
        ::std::vector<uint>,
        ::std::vector<::AttributeInstance>>::
        iterator_impl<
            ::std::_Vector_iterator<::std::_Vector_val<::std::_Simple_types<uint>>>,
            ::std::_Vector_iterator<::std::_Vector_val<::std::_Simple_types<::AttributeInstance>>>,
            ::std::pair<uint const&, ::AttributeInstance&>>
        begin();

    MCFOLD void clearDirtyAttributes();

    MCFOLD ::AttributeModificationContext createModificationContext();

#ifdef LL_PLAT_C
    MCAPI void disableAttributeDirtying();
#endif

    MCFOLD ::brstd::associative_adapter<
        uint,
        ::AttributeInstance,
        ::std::less<uint>,
        ::std::vector<uint>,
        ::std::vector<::AttributeInstance>>::
        iterator_impl<
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<uint>>>,
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::AttributeInstance>>>,
            ::std::pair<uint const&, ::AttributeInstance const&>> end() const;

    MCFOLD ::brstd::associative_adapter<
        uint,
        ::AttributeInstance,
        ::std::less<uint>,
        ::std::vector<uint>,
        ::std::vector<::AttributeInstance>>::
        iterator_impl<
            ::std::_Vector_iterator<::std::_Vector_val<::std::_Simple_types<uint>>>,
            ::std::_Vector_iterator<::std::_Vector_val<::std::_Simple_types<::AttributeInstance>>>,
            ::std::pair<uint const&, ::AttributeInstance&>>
        end();

    MCFOLD ::std::vector<::AttributeInstanceHandle> const& getDirtyAttributes() const;

    MCAPI ::AttributeInstanceConstRef getInstance(::Attribute const& attribute) const;

    MCAPI ::AttributeInstanceConstRef getInstance(uint idValue) const;

    MCAPI ::AttributeInstanceRef getMutableInstance(::Attribute const& attribute);

    MCAPI ::AttributeInstanceRef getMutableInstance(::HashedString const& name);

    MCAPI ::MutableAttributeWithContext getMutableInstanceWithContext(::Attribute const& attribute);

    MCAPI ::std::vector<::AttributeInstanceHandle> getSyncableAttributes() const;

    MCAPI void onAttributeModified(::AttributeInstanceConstRef attributeInstance);

    MCAPI ::AttributeInstanceRef registerAttribute(::Attribute const& baseAttribute);

    MCAPI void updateOrCreateAttribute(::AttributeData const& attributeData);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void updateAttribute(
        ::AttributeData const&          attributeData,
        ::AttributeInstanceRef          attributeRef,
        ::AttributeModificationContext& context
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DIFF_ATTRIBUTES_SIZE();

    MCAPI static ::std::string const& DIFF_DIRTY_ATTRIBUTES();

    MCAPI static ::std::string const& DIFF_DIRTY_ATTRIBUTES_SIZE();

    MCAPI static ::std::string const& DIFF_NO_ATTRIBUTES();

    MCAPI static ::AttributeInstance& mInvalidInstance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BaseAttributeMap const&);
    // NOLINTEND
};
