#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class AttributeInstance;
class AttributeInstanceHandle;
class HashedString;
struct AttributeData;
struct AttributeModificationContext;
struct MutableAttributeWithContext;
// clang-format on

class BaseAttributeMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::AttributeInstance>>         mInstanceMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeInstanceHandle>>                mDirtyAttributes;
    ::ll::TypedStorage<8, 8, void (::BaseAttributeMap::*)(::AttributeInstance const&)> mOnAttributeModified;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseAttributeMap& operator=(BaseAttributeMap const&);
    BaseAttributeMap(BaseAttributeMap const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _onAttributeModified(::AttributeInstance const& attributeInstance);

    MCNAPI ::AttributeInstance const& getInstance(::Attribute const& attribute) const;

    MCNAPI ::AttributeInstance const& getInstance(uint idValue) const;

    MCNAPI ::AttributeInstance* getMutableInstance(::HashedString const& name);

    MCNAPI ::MutableAttributeWithContext getMutableInstanceWithContext(::Attribute const& attribute);

    MCNAPI ::std::vector<::AttributeInstanceHandle> getSyncableAttributes() const;

    MCNAPI ::BaseAttributeMap& operator=(::BaseAttributeMap&&);

    MCNAPI ::AttributeInstance& registerAttribute(::Attribute const& baseAttribute);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void updateAttribute(
        ::AttributeData const&          attributeData,
        ::AttributeInstance&            attributeInstance,
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
