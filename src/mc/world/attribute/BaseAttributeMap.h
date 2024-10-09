#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseAttributeMap {
public:
    // prevent constructor by default
    BaseAttributeMap& operator=(BaseAttributeMap const&);
    BaseAttributeMap(BaseAttributeMap const&);

public:
    // NOLINTBEGIN
    MCAPI BaseAttributeMap();

    MCAPI std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<uint const, class AttributeInstance>>>>
          begin();

    MCAPI void clearDirtyAttributes();

    MCAPI std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<uint const, class AttributeInstance>>>>
          end();

    MCAPI std::vector<class AttributeInstanceHandle> const& getDirtyAttributes() const;

    MCAPI class AttributeInstance const& getInstance(class Attribute const& attribute) const;

    MCAPI class AttributeInstance const& getInstance(uint idValue) const;

    MCAPI class AttributeInstance* getMutableInstance(class Attribute const& attribute);

    MCAPI class AttributeInstance* getMutableInstance(class HashedString const& name);

    MCAPI class AttributeInstance* getMutableInstance(uint idValue);

    MCAPI std::vector<class AttributeInstanceHandle> getSyncableAttributes() const;

    MCAPI void inheritFrom(class BaseAttributeMap const& other);

    MCAPI class AttributeInstance& registerAttribute(class Attribute const& baseAttribute);

    MCAPI class AttributeInstance& registerNoSyncAttribute(class Attribute const& baseAttribute);

    MCAPI ~BaseAttributeMap();

    MCAPI static std::string const DIFF_ATTRIBUTES;

    MCAPI static std::string const DIFF_ATTRIBUTES_SIZE;

    MCAPI static std::string const DIFF_DIRTY_ATTRIBUTES;

    MCAPI static std::string const DIFF_DIRTY_ATTRIBUTES_SIZE;

    MCAPI static std::string const DIFF_NO_ATTRIBUTES;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class AttributeInstance mInvalidInstance;

    // NOLINTEND
};
