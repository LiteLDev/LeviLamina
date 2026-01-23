#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class AttributeInstance;
class AttributeInstanceHandle;
class AttributeInstanceRef;
class HashedString;
struct AttributeData;
struct AttributeModificationContext;
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
        56,
        ::brstd::flat_map<
            uint,
            ::AttributeInstance,
            ::std::less<uint>,
            ::std::vector<uint>,
            ::std::vector<::AttributeInstance>>>
                                                                                       mInstanceMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeInstanceHandle>>                mDirtyAttributes;
    ::ll::TypedStorage<8, 8, void (::BaseAttributeMap::*)(::AttributeInstance const&)> mOnAttributeModified;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _onAttributeModified(::AttributeInstance const& attributeInstance);

    MCFOLD_C void _onAttributeModifiedDisabled(::AttributeInstance const&);

    MCAPI ::AttributeInstanceRef getMutableInstance(uint idValue);

    MCAPI_S ::AttributeInstanceRef getMutableInstance(::HashedString const& name);

    MCAPI ::std::vector<::AttributeInstanceHandle> getSyncableAttributes() const;

    MCAPI ::AttributeInstanceRef registerAttribute(::Attribute const& baseAttribute);

    MCAPI_C void updateOrCreateAttribute(::AttributeData const& attributeData);
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
    MCAPI static ::std::string const& DIFF_ATTRIBUTES();

    MCAPI static ::std::string const& DIFF_ATTRIBUTES_SIZE();

    MCAPI static ::std::string const& DIFF_DIRTY_ATTRIBUTES();

    MCAPI static ::std::string const& DIFF_DIRTY_ATTRIBUTES_SIZE();

    MCAPI static ::std::string const& DIFF_NO_ATTRIBUTES();

    MCAPI static ::AttributeInstance& mInvalidInstance();
    // NOLINTEND
};
