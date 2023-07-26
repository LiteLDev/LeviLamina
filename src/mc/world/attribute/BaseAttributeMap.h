#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseAttributeMap {

public:
    // prevent constructor by default
    BaseAttributeMap& operator=(BaseAttributeMap const&) = delete;
    BaseAttributeMap(BaseAttributeMap const&)            = delete;

public:
    /**
     * @symbol ??0BaseAttributeMap\@\@QEAA\@XZ
     */
    MCAPI BaseAttributeMap(); // NOLINT
    /**
     * @symbol
     * ?begin\@BaseAttributeMap\@\@QEBA?AV?$_List_const_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBIVAttributeInstance\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_List_const_iterator<class std::_List_val<
        struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>>
    begin() const; // NOLINT
    /**
     * @symbol
     * ?begin\@BaseAttributeMap\@\@QEAA?AV?$_List_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBIVAttributeInstance\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_List_iterator<class std::_List_val<
        struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>>
    begin(); // NOLINT
    /**
     * @symbol ?clearDirtyAttributes\@BaseAttributeMap\@\@QEAAXXZ
     */
    MCAPI void clearDirtyAttributes(); // NOLINT
    /**
     * @symbol
     * ?end\@BaseAttributeMap\@\@QEBA?AV?$_List_const_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBIVAttributeInstance\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_List_const_iterator<class std::_List_val<
        struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>>
    end() const; // NOLINT
    /**
     * @symbol
     * ?end\@BaseAttributeMap\@\@QEAA?AV?$_List_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBIVAttributeInstance\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_List_iterator<class std::_List_val<
        struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>>
    end(); // NOLINT
    /**
     * @symbol
     * ?getDirtyAttributes\@BaseAttributeMap\@\@QEBAAEBV?$vector\@VAttributeInstanceHandle\@\@V?$allocator\@VAttributeInstanceHandle\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AttributeInstanceHandle> const& getDirtyAttributes() const; // NOLINT
    /**
     * @symbol ?getInstance\@BaseAttributeMap\@\@QEBAAEBVAttributeInstance\@\@AEBVAttribute\@\@\@Z
     */
    MCAPI class AttributeInstance const& getInstance(class Attribute const&) const; // NOLINT
    /**
     * @symbol ?getInstance\@BaseAttributeMap\@\@QEBAAEBVAttributeInstance\@\@I\@Z
     */
    MCAPI class AttributeInstance const& getInstance(unsigned int) const; // NOLINT
    /**
     * @symbol ?getMutableInstance\@BaseAttributeMap\@\@QEAAPEAVAttributeInstance\@\@AEBVAttribute\@\@\@Z
     */
    MCAPI class AttributeInstance* getMutableInstance(class Attribute const&); // NOLINT
    /**
     * @symbol ?getMutableInstance\@BaseAttributeMap\@\@QEAAPEAVAttributeInstance\@\@I\@Z
     */
    MCAPI class AttributeInstance* getMutableInstance(unsigned int); // NOLINT
    /**
     * @symbol ?getMutableInstance\@BaseAttributeMap\@\@QEAAPEAVAttributeInstance\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class AttributeInstance* getMutableInstance(class HashedString const&); // NOLINT
    /**
     * @symbol
     * ?getSyncableAttributes\@BaseAttributeMap\@\@QEBA?AV?$vector\@VAttributeInstanceHandle\@\@V?$allocator\@VAttributeInstanceHandle\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AttributeInstanceHandle> getSyncableAttributes() const; // NOLINT
    /**
     * @symbol ?inheritFrom\@BaseAttributeMap\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void inheritFrom(class BaseAttributeMap const&); // NOLINT
    /**
     * @symbol ?registerAttribute\@BaseAttributeMap\@\@QEAAAEAVAttributeInstance\@\@AEBVAttribute\@\@\@Z
     */
    MCAPI class AttributeInstance& registerAttribute(class Attribute const&); // NOLINT
    /**
     * @symbol ?size\@BaseAttributeMap\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const; // NOLINT
    /**
     * @symbol
     * ?updateAttribute\@BaseAttributeMap\@\@QEAAXAEBVHashedString\@\@MMMMAEBV?$vector\@VAttributeModifier\@\@V?$allocator\@VAttributeModifier\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void
    updateAttribute(class HashedString const&, float, float, float, float, std::vector<class AttributeModifier> const&); // NOLINT
    /**
     * @symbol ??1BaseAttributeMap\@\@QEAA\@XZ
     */
    MCAPI ~BaseAttributeMap(); // NOLINT
    /**
     * @symbol
     * ?DIFF_ATTRIBUTES\@BaseAttributeMap\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_ATTRIBUTES; // NOLINT
    /**
     * @symbol
     * ?DIFF_ATTRIBUTES_SIZE\@BaseAttributeMap\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_ATTRIBUTES_SIZE; // NOLINT
    /**
     * @symbol
     * ?DIFF_DIRTY_ATTRIBUTES\@BaseAttributeMap\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_DIRTY_ATTRIBUTES; // NOLINT
    /**
     * @symbol
     * ?DIFF_DIRTY_ATTRIBUTES_SIZE\@BaseAttributeMap\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_DIRTY_ATTRIBUTES_SIZE; // NOLINT
    /**
     * @symbol
     * ?DIFF_NO_ATTRIBUTES\@BaseAttributeMap\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_NO_ATTRIBUTES; // NOLINT

    // private:

private:
    /**
     * @symbol ?mInvalidInstance\@BaseAttributeMap\@\@0VAttributeInstance\@\@A
     */
    MCAPI static class AttributeInstance mInvalidInstance; // NOLINT
};
