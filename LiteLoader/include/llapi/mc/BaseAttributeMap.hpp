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
     * @hash   -48225859
     * @symbol  ??0BaseAttributeMap\@\@QEAA\@XZ
     */
    MCAPI BaseAttributeMap();
    /**
     * @hash   476628499
     * @symbol  ?begin\@BaseAttributeMap\@\@QEBA?AV?$_List_const_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBIVAttributeInstance\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_List_const_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>> begin() const;
    /**
     * @hash   -1965937157
     * @symbol  ?begin\@BaseAttributeMap\@\@QEAA?AV?$_List_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBIVAttributeInstance\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>> begin();
    /**
     * @hash   1653400389
     * @symbol  ?clearDirtyAttributes\@BaseAttributeMap\@\@QEAAXXZ
     */
    MCAPI void clearDirtyAttributes();
    /**
     * @hash   -1727287737
     * @symbol  ?end\@BaseAttributeMap\@\@QEBA?AV?$_List_const_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBIVAttributeInstance\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_List_const_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>> end() const;
    /**
     * @hash   1365955503
     * @symbol  ?end\@BaseAttributeMap\@\@QEAA?AV?$_List_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBIVAttributeInstance\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>> end();
    /**
     * @hash   1751397644
     * @symbol  ?getDirtyAttributes\@BaseAttributeMap\@\@QEBAAEBV?$vector\@VAttributeInstanceHandle\@\@V?$allocator\@VAttributeInstanceHandle\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AttributeInstanceHandle> const & getDirtyAttributes() const;
    /**
     * @hash   -52492291
     * @symbol  ?getInstance\@BaseAttributeMap\@\@QEBAAEBVAttributeInstance\@\@AEBVAttribute\@\@\@Z
     */
    MCAPI class AttributeInstance const & getInstance(class Attribute const &) const;
    /**
     * @hash   -1129000059
     * @symbol  ?getInstance\@BaseAttributeMap\@\@QEBAAEBVAttributeInstance\@\@I\@Z
     */
    MCAPI class AttributeInstance const & getInstance(unsigned int) const;
    /**
     * @hash   735259562
     * @symbol  ?getMutableInstance\@BaseAttributeMap\@\@QEAAPEAVAttributeInstance\@\@AEBVAttribute\@\@\@Z
     */
    MCAPI class AttributeInstance * getMutableInstance(class Attribute const &);
    /**
     * @hash   -650686566
     * @symbol  ?getMutableInstance\@BaseAttributeMap\@\@QEAAPEAVAttributeInstance\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class AttributeInstance * getMutableInstance(class HashedString const &);
    /**
     * @hash   47527970
     * @symbol  ?getMutableInstance\@BaseAttributeMap\@\@QEAAPEAVAttributeInstance\@\@I\@Z
     */
    MCAPI class AttributeInstance * getMutableInstance(unsigned int);
    /**
     * @hash   277650220
     * @symbol  ?getSyncableAttributes\@BaseAttributeMap\@\@QEBA?AV?$vector\@VAttributeInstanceHandle\@\@V?$allocator\@VAttributeInstanceHandle\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AttributeInstanceHandle> getSyncableAttributes() const;
    /**
     * @hash   721512624
     * @symbol  ?inheritFrom\@BaseAttributeMap\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void inheritFrom(class BaseAttributeMap const &);
    /**
     * @hash   -2114408528
     * @symbol  ?onAttributeModified\@BaseAttributeMap\@\@QEAAXAEBVAttributeInstance\@\@\@Z
     */
    MCAPI void onAttributeModified(class AttributeInstance const &);
    /**
     * @hash   -400994359
     * @symbol  ?registerAttribute\@BaseAttributeMap\@\@QEAAAEAVAttributeInstance\@\@AEBVAttribute\@\@\@Z
     */
    MCAPI class AttributeInstance & registerAttribute(class Attribute const &);
    /**
     * @hash   2033054521
     * @symbol  ?size\@BaseAttributeMap\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const;
    /**
     * @hash   -143412347
     * @symbol  ?updateAttribute\@BaseAttributeMap\@\@QEAAXAEBVHashedString\@\@MMMMAEBV?$vector\@VAttributeModifier\@\@V?$allocator\@VAttributeModifier\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void updateAttribute(class HashedString const &, float, float, float, float, std::vector<class AttributeModifier> const &);
    /**
     * @hash   -776005013
     * @symbol  ??1BaseAttributeMap\@\@QEAA\@XZ
     */
    MCAPI ~BaseAttributeMap();
    /**
     * @hash   -231950331
     * @symbol  ?DIFF_ATTRIBUTES\@BaseAttributeMap\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_ATTRIBUTES;
    /**
     * @hash   -1304171649
     * @symbol  ?DIFF_ATTRIBUTES_SIZE\@BaseAttributeMap\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_ATTRIBUTES_SIZE;
    /**
     * @hash   -1344816385
     * @symbol  ?DIFF_DIRTY_ATTRIBUTES\@BaseAttributeMap\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_DIRTY_ATTRIBUTES;
    /**
     * @hash   -413775483
     * @symbol  ?DIFF_DIRTY_ATTRIBUTES_SIZE\@BaseAttributeMap\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_DIRTY_ATTRIBUTES_SIZE;
    /**
     * @hash   -1946757161
     * @symbol  ?DIFF_NO_ATTRIBUTES\@BaseAttributeMap\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_NO_ATTRIBUTES;
    /**
     * @hash   -1289834356
     * @symbol  ?getDiff\@BaseAttributeMap\@\@SA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBV1\@0\@Z
     */
    MCAPI static class std::optional<std::string> getDiff(class BaseAttributeMap const &, class BaseAttributeMap const &);

//private:

private:
    /**
     * @hash   -390842320
     * @symbol  ?mInvalidInstance\@BaseAttributeMap\@\@0VAttributeInstance\@\@A
     */
    MCAPI static class AttributeInstance mInvalidInstance;

};