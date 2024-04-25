#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseAttributeMap {
public:
    // prevent constructor by default
    BaseAttributeMap& operator=(BaseAttributeMap const&);
    BaseAttributeMap(BaseAttributeMap const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BaseAttributeMap@@QEAA@XZ
    MCAPI BaseAttributeMap();

    // symbol:
    // ?begin@BaseAttributeMap@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVAttributeInstance@@@std@@@std@@@std@@@std@@XZ
    MCAPI std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<uint const, class AttributeInstance>>>>
          begin();

    // symbol: ?clearDirtyAttributes@BaseAttributeMap@@QEAAXXZ
    MCAPI void clearDirtyAttributes();

    // symbol:
    // ?end@BaseAttributeMap@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVAttributeInstance@@@std@@@std@@@std@@@std@@XZ
    MCAPI std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<uint const, class AttributeInstance>>>>
          end();

    // symbol:
    // ?getDirtyAttributes@BaseAttributeMap@@QEBAAEBV?$vector@VAttributeInstanceHandle@@V?$allocator@VAttributeInstanceHandle@@@std@@@std@@XZ
    MCAPI std::vector<class AttributeInstanceHandle> const& getDirtyAttributes() const;

    // symbol: ?getInstance@BaseAttributeMap@@QEBAAEBVAttributeInstance@@AEBVAttribute@@@Z
    MCAPI class AttributeInstance const& getInstance(class Attribute const& attribute) const;

    // symbol: ?getInstance@BaseAttributeMap@@QEBAAEBVAttributeInstance@@I@Z
    MCAPI class AttributeInstance const& getInstance(uint idValue) const;

    // symbol: ?getMutableInstance@BaseAttributeMap@@QEAAPEAVAttributeInstance@@AEBVAttribute@@@Z
    MCAPI class AttributeInstance* getMutableInstance(class Attribute const& attribute);

    // symbol: ?getMutableInstance@BaseAttributeMap@@QEAAPEAVAttributeInstance@@AEBVHashedString@@@Z
    MCAPI class AttributeInstance* getMutableInstance(class HashedString const& name);

    // symbol: ?getMutableInstance@BaseAttributeMap@@QEAAPEAVAttributeInstance@@I@Z
    MCAPI class AttributeInstance* getMutableInstance(uint idValue);

    // symbol:
    // ?getSyncableAttributes@BaseAttributeMap@@QEBA?AV?$vector@VAttributeInstanceHandle@@V?$allocator@VAttributeInstanceHandle@@@std@@@std@@XZ
    MCAPI std::vector<class AttributeInstanceHandle> getSyncableAttributes() const;

    // symbol: ?inheritFrom@BaseAttributeMap@@QEAAXAEBV1@@Z
    MCAPI void inheritFrom(class BaseAttributeMap const& other);

    // symbol: ?registerAttribute@BaseAttributeMap@@QEAAAEAVAttributeInstance@@AEBVAttribute@@@Z
    MCAPI class AttributeInstance& registerAttribute(class Attribute const& baseAttribute);

    // symbol: ?registerNoSyncAttribute@BaseAttributeMap@@QEAAAEAVAttributeInstance@@AEBVAttribute@@@Z
    MCAPI class AttributeInstance& registerNoSyncAttribute(class Attribute const&);

    // symbol: ??1BaseAttributeMap@@QEAA@XZ
    MCAPI ~BaseAttributeMap();

    // symbol: ?DIFF_ATTRIBUTES@BaseAttributeMap@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DIFF_ATTRIBUTES;

    // symbol: ?DIFF_ATTRIBUTES_SIZE@BaseAttributeMap@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DIFF_ATTRIBUTES_SIZE;

    // symbol: ?DIFF_DIRTY_ATTRIBUTES@BaseAttributeMap@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DIFF_DIRTY_ATTRIBUTES;

    // symbol:
    // ?DIFF_DIRTY_ATTRIBUTES_SIZE@BaseAttributeMap@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DIFF_DIRTY_ATTRIBUTES_SIZE;

    // symbol: ?DIFF_NO_ATTRIBUTES@BaseAttributeMap@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DIFF_NO_ATTRIBUTES;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mInvalidInstance@BaseAttributeMap@@0VAttributeInstance@@A
    MCAPI static class AttributeInstance mInvalidInstance;

    // NOLINTEND
};
