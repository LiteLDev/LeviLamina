/**
 * @file  MC/BaseAttributeMap.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
    BaseAttributeMap() = delete;
#endif

public:
    /**
     * @hash   343595347
     * @symbol ?begin@BaseAttributeMap@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVAttributeInstance@@@std@@@std@@@std@@@std@@XZ
     */
    MCAPI class std::_List_const_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>> begin() const;
    /**
     * @hash   -2098970309
     * @symbol ?begin@BaseAttributeMap@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVAttributeInstance@@@std@@@std@@@std@@@std@@XZ
     */
    MCAPI class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>> begin();
    /**
     * @hash   -2053004379
     * @symbol ?clearDirtyAttributes@BaseAttributeMap@@QEAAXXZ
     */
    MCAPI void clearDirtyAttributes();
    /**
     * @hash   -1860244009
     * @symbol ?end@BaseAttributeMap@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVAttributeInstance@@@std@@@std@@@std@@@std@@XZ
     */
    MCAPI class std::_List_const_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>> end() const;
    /**
     * @hash   1232999231
     * @symbol ?end@BaseAttributeMap@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVAttributeInstance@@@std@@@std@@@std@@@std@@XZ
     */
    MCAPI class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<unsigned int const, class AttributeInstance>>>> end();
    /**
     * @hash   969411708
     * @symbol ?getDirtyAttributes@BaseAttributeMap@@QEAAAEBV?$vector@VAttributeInstanceHandle@@V?$allocator@VAttributeInstanceHandle@@@std@@@std@@XZ
     */
    MCAPI std::vector<class AttributeInstanceHandle> const & getDirtyAttributes();
    /**
     * @hash   533256429
     * @symbol ?getInstance@BaseAttributeMap@@QEBAAEBVAttributeInstance@@AEBVAttribute@@@Z
     */
    MCAPI class AttributeInstance const & getInstance(class Attribute const &) const;
    /**
     * @hash   -543251339
     * @symbol ?getInstance@BaseAttributeMap@@QEBAAEBVAttributeInstance@@I@Z
     */
    MCAPI class AttributeInstance const & getInstance(unsigned int) const;
    /**
     * @hash   1321008282
     * @symbol ?getMutableInstance@BaseAttributeMap@@QEAAPEAVAttributeInstance@@AEBVAttribute@@@Z
     */
    MCAPI class AttributeInstance * getMutableInstance(class Attribute const &);
    /**
     * @hash   -64937846
     * @symbol ?getMutableInstance@BaseAttributeMap@@QEAAPEAVAttributeInstance@@AEBVHashedString@@@Z
     */
    MCAPI class AttributeInstance * getMutableInstance(class HashedString const &);
    /**
     * @hash   633276690
     * @symbol ?getMutableInstance@BaseAttributeMap@@QEAAPEAVAttributeInstance@@I@Z
     */
    MCAPI class AttributeInstance * getMutableInstance(unsigned int);
    /**
     * @hash   863398940
     * @symbol ?getSyncableAttributes@BaseAttributeMap@@QEBA?AV?$vector@VAttributeInstanceHandle@@V?$allocator@VAttributeInstanceHandle@@@std@@@std@@XZ
     */
    MCAPI std::vector<class AttributeInstanceHandle> getSyncableAttributes() const;
    /**
     * @hash   -1528675184
     * @symbol ?onAttributeModified@BaseAttributeMap@@QEAAXAEBVAttributeInstance@@@Z
     */
    MCAPI void onAttributeModified(class AttributeInstance const &);
    /**
     * @hash   -1465511730
     * @symbol ??4BaseAttributeMap@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class BaseAttributeMap & operator=(class BaseAttributeMap &&);
    /**
     * @hash   1403977798
     * @symbol ??8BaseAttributeMap@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class BaseAttributeMap const &) const;
    /**
     * @hash   184738985
     * @symbol ?registerAttribute@BaseAttributeMap@@QEAAAEAVAttributeInstance@@AEBVAttribute@@@Z
     */
    MCAPI class AttributeInstance & registerAttribute(class Attribute const &);
    /**
     * @hash   1929281897
     * @symbol ?size@BaseAttributeMap@@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const;
    /**
     * @hash   442320997
     * @symbol ?updateAttribute@BaseAttributeMap@@QEAAXAEBVHashedString@@MMMMAEBV?$vector@VAttributeModifier@@V?$allocator@VAttributeModifier@@@std@@@std@@@Z
     */
    MCAPI void updateAttribute(class HashedString const &, float, float, float, float, std::vector<class AttributeModifier> const &);
    /**
     * @hash   -913420325
     * @symbol ??1BaseAttributeMap@@QEAA@XZ
     */
    MCAPI ~BaseAttributeMap();

//private:

private:
    /**
     * @hash   -1497176272
     * @symbol ?mInvalidInstance@BaseAttributeMap@@0VAttributeInstance@@A
     */
    MCAPI static class AttributeInstance mInvalidInstance;

};