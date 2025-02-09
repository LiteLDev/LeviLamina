#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class AttributeInstance;
class AttributeInstanceHandle;
class HashedString;
// clang-format on

class BaseAttributeMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::AttributeInstance>> mInstanceMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeInstanceHandle>>        mDirtyAttributes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseAttributeMap();

    MCFOLD ::std::_List_iterator<
        ::std::_List_val<::std::_List_simple_types<::std::pair<uint const, ::AttributeInstance>>>>
    begin();

    MCAPI void clearDirtyAttributes();

    MCFOLD ::std::_List_iterator<
        ::std::_List_val<::std::_List_simple_types<::std::pair<uint const, ::AttributeInstance>>>>
    end();

    MCFOLD ::std::vector<::AttributeInstanceHandle> const& getDirtyAttributes() const;

    MCAPI ::AttributeInstance const& getInstance(::Attribute const& attribute) const;

    MCAPI ::AttributeInstance const& getInstance(uint idValue) const;

    MCAPI ::AttributeInstance* getMutableInstance(::Attribute const& attribute);

    MCAPI ::AttributeInstance* getMutableInstance(::HashedString const& name);

    MCAPI ::std::vector<::AttributeInstanceHandle> getSyncableAttributes() const;

    MCAPI void inheritFrom(::BaseAttributeMap const& other);

    MCAPI void onAttributeModified(::AttributeInstance const& attributeInstance);

    MCAPI ::AttributeInstance& registerAttribute(::Attribute const& baseAttribute);

    MCAPI ::AttributeInstance& registerNoSyncAttribute(::Attribute const& baseAttribute);

    MCAPI ~BaseAttributeMap();
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

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
