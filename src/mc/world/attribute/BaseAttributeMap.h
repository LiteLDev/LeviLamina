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

    MCAPI void _onAttributeModified(::AttributeInstance const& attributeInstance);

#ifdef LL_PLAT_C
    MCFOLD void _onAttributeModifiedDisabled(::AttributeInstance const&);
#endif

    MCAPI ::AttributeInstanceConstRef getInstance(::Attribute const& attribute) const;

    MCAPI ::AttributeInstanceRef getMutableInstance(::Attribute const& attribute);

    MCAPI ::AttributeInstanceRef registerAttribute(::Attribute const& baseAttribute);
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
    MCAPI static ::AttributeInstance& mInvalidInstance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BaseAttributeMap const&);
    // NOLINTEND
};
