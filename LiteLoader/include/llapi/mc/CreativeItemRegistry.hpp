/**
 * @file  CreativeItemRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CreativeItemRegistry.
 *
 */
class CreativeItemRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVEITEMREGISTRY
public:
    class CreativeItemRegistry& operator=(class CreativeItemRegistry const &) = delete;
    CreativeItemRegistry(class CreativeItemRegistry const &) = delete;
#endif

public:
    /**
     * @hash   -1329997333
     * @symbol  ??0CreativeItemRegistry\@\@QEAA\@XZ
     */
    MCAPI CreativeItemRegistry();
    /**
     * @hash   -1987975105
     * @symbol  ?findCreativeItemEntry\@CreativeItemRegistry\@\@QEAAPEAVCreativeItemEntry\@\@AEBV?$TypedServerNetId\@UCreativeItemNetIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI class CreativeItemEntry * findCreativeItemEntry(class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const &);
    /**
     * @hash   -1648282404
     * @symbol  ?findCreativeItemEntry\@CreativeItemRegistry\@\@QEAAPEAVCreativeItemEntry\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI class CreativeItemEntry * findCreativeItemEntry(class ItemInstance const &);
    /**
     * @hash   -1222549502
     * @symbol  ?getCreativeCategory\@CreativeItemRegistry\@\@QEAAPEAVCreativeItemGroupCategory\@\@W4CreativeItemCategory\@\@\@Z
     */
    MCAPI class CreativeItemGroupCategory * getCreativeCategory(enum class CreativeItemCategory);
    /**
     * @hash   1891400428
     * @symbol  ?getCreativeGroup\@CreativeItemRegistry\@\@QEAAPEAVCreativeGroupInfo\@\@I\@Z
     */
    MCAPI class CreativeGroupInfo * getCreativeGroup(unsigned int);
    /**
     * @hash   -517790500
     * @symbol  ?getCreativeItemEntries\@CreativeItemRegistry\@\@QEAAAEBV?$vector\@VCreativeItemEntry\@\@V?$allocator\@VCreativeItemEntry\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class CreativeItemEntry> const & getCreativeItemEntries();
    /**
     * @hash   -1139251872
     * @symbol  ?getItemEntry\@CreativeItemRegistry\@\@QEAAPEAVCreativeItemEntry\@\@I\@Z
     */
    MCAPI class CreativeItemEntry * getItemEntry(unsigned int);
    /**
     * @hash   370007809
     * @symbol  ?newCreativeCategory\@CreativeItemRegistry\@\@QEAAPEAVCreativeItemGroupCategory\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CreativeItemCategory\@\@\@Z
     */
    MCAPI class CreativeItemGroupCategory * newCreativeCategory(std::string const &, enum class CreativeItemCategory);
    /**
     * @hash   -1045250582
     * @symbol  ?newCreativeGroup\@CreativeItemRegistry\@\@QEAAPEAVCreativeGroupInfo\@\@W4CreativeItemCategory\@\@AEBVHashedString\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI class CreativeGroupInfo * newCreativeGroup(enum class CreativeItemCategory, class HashedString const &, class ItemInstance const &);
    /**
     * @hash   1521900348
     * @symbol  ?newItemEntry\@CreativeItemRegistry\@\@QEAAPEAVCreativeItemEntry\@\@AEBV?$TypedServerNetId\@UCreativeItemNetIdTag\@\@I$0A\@\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI class CreativeItemEntry * newItemEntry(class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const &, class ItemInstance const &);
    /**
     * @hash   -403647917
     * @symbol  ?resetGroups\@CreativeItemRegistry\@\@QEAAXXZ
     */
    MCAPI void resetGroups();
    /**
     * @hash   -1117026771
     * @symbol  ?updateItemEntry\@CreativeItemRegistry\@\@QEAAPEAVCreativeItemEntry\@\@IAEBVItemInstance\@\@\@Z
     */
    MCAPI class CreativeItemEntry * updateItemEntry(unsigned int, class ItemInstance const &);
    /**
     * @hash   723744245
     * @symbol  ?updateNetIdMap\@CreativeItemRegistry\@\@QEAAXXZ
     */
    MCAPI void updateNetIdMap();
    /**
     * @hash   -1963743159
     * @symbol  ?current\@CreativeItemRegistry\@\@SAPEAV1\@XZ
     */
    MCAPI static class CreativeItemRegistry * current();
    /**
     * @hash   351131024
     * @symbol  ?forEachCreativeItemInstance\@CreativeItemRegistry\@\@SAXV?$function\@$$A6A_NAEAVItemInstance\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static void forEachCreativeItemInstance(class std::function<bool (class ItemInstance &)>);
    /**
     * @hash   -1500954257
     * @symbol  ?mCreativeListMutex\@CreativeItemRegistry\@\@2Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mCreativeListMutex;
    /**
     * @hash   131067585
     * @symbol  ?reset\@CreativeItemRegistry\@\@SAXXZ
     */
    MCAPI static void reset();
    /**
     * @hash   -410683398
     * @symbol  ?setCurrentRegistry\@CreativeItemRegistry\@\@SAX$$QEAV?$unique_ptr\@VCreativeItemRegistry\@\@U?$default_delete\@VCreativeItemRegistry\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void setCurrentRegistry(std::unique_ptr<class CreativeItemRegistry> &&);

//private:
    /**
     * @hash   1702629446
     * @symbol  ?_forEachCreativeItemInstance\@CreativeItemRegistry\@\@AEAAXV?$function\@$$A6A_NAEAVItemInstance\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void _forEachCreativeItemInstance(class std::function<bool (class ItemInstance &)>);

private:
    /**
     * @hash   1771864799
     * @symbol  ?mCurrentRegistry\@CreativeItemRegistry\@\@0V?$unique_ptr\@VCreativeItemRegistry\@\@U?$default_delete\@VCreativeItemRegistry\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class CreativeItemRegistry> mCurrentRegistry;

};