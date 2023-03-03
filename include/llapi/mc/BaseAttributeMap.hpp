/**
 * @file  BaseAttributeMap.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BaseAttributeMap.
 *
 */
class BaseAttributeMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEATTRIBUTEMAP
public:
    class BaseAttributeMap& operator=(class BaseAttributeMap const &) = delete;
    BaseAttributeMap(class BaseAttributeMap const &) = delete;
#endif

public:
    /**
     * @symbol  ??0BaseAttributeMap\@\@QEAA\@XZ
     */
    MCAPI BaseAttributeMap();
    /**
     * @symbol  ?begin\@BaseAttributeMap\@\@QEBA?AV?$_List_const_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBIVAttributeInstance\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_List_const_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>> begin() const;
    /**
     * @symbol  ?begin\@BaseAttributeMap\@\@QEAA?AV?$_List_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBIVAttributeInstance\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>> begin();
    /**
     * @symbol  ?clearDirtyAttributes\@BaseAttributeMap\@\@QEAAXXZ
     */
    MCAPI void clearDirtyAttributes();
    /**
     * @symbol  ?end\@BaseAttributeMap\@\@QEBA?AV?$_List_const_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBIVAttributeInstance\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_List_const_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>> end() const;
    /**
     * @symbol  ?end\@BaseAttributeMap\@\@QEAA?AV?$_List_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBIVAttributeInstance\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>> end();
    /**
     * @symbol  ?getDirtyAttributes\@BaseAttributeMap\@\@QEBAAEBV?$vector\@VAttributeInstanceHandle\@\@V?$allocator\@VAttributeInstanceHandle\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AttributeInstanceHandle> const & getDirtyAttributes() const;
    /**
     * @symbol  ?getInstance\@BaseAttributeMap\@\@QEBAAEBVAttributeInstance\@\@AEBVAttribute\@\@\@Z
     */
    MCAPI class AttributeInstance const & getInstance(class Attribute const &) const;
    /**
     * @symbol  ?getInstance\@BaseAttributeMap\@\@QEBAAEBVAttributeInstance\@\@I\@Z
     */
    MCAPI class AttributeInstance const & getInstance(unsigned int) const;
    /**
     * @symbol  ?getMutableInstance\@BaseAttributeMap\@\@QEAAPEAVAttributeInstance\@\@AEBVAttribute\@\@\@Z
     */
    MCAPI class AttributeInstance * getMutableInstance(class Attribute const &);
    /**
     * @symbol  ?getMutableInstance\@BaseAttributeMap\@\@QEAAPEAVAttributeInstance\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class AttributeInstance * getMutableInstance(class HashedString const &);
    /**
     * @symbol  ?getMutableInstance\@BaseAttributeMap\@\@QEAAPEAVAttributeInstance\@\@I\@Z
     */
    MCAPI class AttributeInstance * getMutableInstance(unsigned int);
    /**
     * @symbol  ?getSyncableAttributes\@BaseAttributeMap\@\@QEBA?AV?$vector\@VAttributeInstanceHandle\@\@V?$allocator\@VAttributeInstanceHandle\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AttributeInstanceHandle> getSyncableAttributes() const;
    /**
     * @symbol  ?inheritFrom\@BaseAttributeMap\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void inheritFrom(class BaseAttributeMap const &);
    /**
     * @symbol  ?onAttributeModified\@BaseAttributeMap\@\@QEAAXAEBVAttributeInstance\@\@\@Z
     */
    MCAPI void onAttributeModified(class AttributeInstance const &);
    /**
     * @symbol  ?registerAttribute\@BaseAttributeMap\@\@QEAAAEAVAttributeInstance\@\@AEBVAttribute\@\@\@Z
     */
    MCAPI class AttributeInstance & registerAttribute(class Attribute const &);
    /**
     * @symbol  ?size\@BaseAttributeMap\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const;
    /**
     * @symbol  ?updateAttribute\@BaseAttributeMap\@\@QEAAXAEBVHashedString\@\@MMMMAEBV?$vector\@VAttributeModifier\@\@V?$allocator\@VAttributeModifier\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void updateAttribute(class HashedString const &, float, float, float, float, std::vector<class AttributeModifier> const &);
    /**
     * @symbol  ??1BaseAttributeMap\@\@QEAA\@XZ
     */
    MCAPI ~BaseAttributeMap();
    /**
     * @symbol  ?DIFF_ATTRIBUTES\@BaseAttributeMap\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_ATTRIBUTES;
    /**
     * @symbol  ?DIFF_ATTRIBUTES_SIZE\@BaseAttributeMap\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_ATTRIBUTES_SIZE;
    /**
     * @symbol  ?DIFF_DIRTY_ATTRIBUTES\@BaseAttributeMap\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_DIRTY_ATTRIBUTES;
    /**
     * @symbol  ?DIFF_DIRTY_ATTRIBUTES_SIZE\@BaseAttributeMap\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_DIRTY_ATTRIBUTES_SIZE;
    /**
     * @symbol  ?DIFF_NO_ATTRIBUTES\@BaseAttributeMap\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_NO_ATTRIBUTES;
    /**
     * @symbol  ?getDiff\@BaseAttributeMap\@\@SA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBV1\@0\@Z
     */
    MCAPI static class std::optional<std::string> getDiff(class BaseAttributeMap const &, class BaseAttributeMap const &);

//private:

private:
    /**
     * @symbol  ?mInvalidInstance\@BaseAttributeMap\@\@0VAttributeInstance\@\@A
     */
    MCAPI static class AttributeInstance mInvalidInstance;

};