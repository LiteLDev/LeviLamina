/**
 * @file  LevelStorageWriteBatch.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelStorageWriteBatch.
 *
 */
class LevelStorageWriteBatch {

#define AFTER_EXTRA
// Add Member There
public:
struct BatchEntry {
    BatchEntry() = delete;
    BatchEntry(BatchEntry const&) = delete;
    BatchEntry(BatchEntry const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSTORAGEWRITEBATCH
public:
    class LevelStorageWriteBatch& operator=(class LevelStorageWriteBatch const &) = delete;
    LevelStorageWriteBatch(class LevelStorageWriteBatch const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LevelStorageWriteBatch();
    /**
     * @hash   -1642144303
     * @vftbl  1
     * @symbol  ?putKey\@LevelStorageWriteBatch\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual void putKey(std::string const &, class gsl::basic_string_span<char const, -1>, enum class DBHelpers::Category);
    /**
     * @hash   575008664
     * @vftbl  2
     * @symbol  ?putKey\@LevelStorageWriteBatch\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0W4Category\@DBHelpers\@\@\@Z
     */
    virtual void putKey(std::string const &, std::string const &, enum class DBHelpers::Category);
    /**
     * @hash   -2008307323
     * @vftbl  3
     * @symbol  ?putKey\@LevelStorageWriteBatch\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV23\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual void putKey(std::string const &, std::string &&, enum class DBHelpers::Category);
    /**
     * @hash   -1502566523
     * @vftbl  4
     * @symbol  ?putKey\@LevelStorageWriteBatch\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$shared_ptr\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@3\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual void putKey(std::string const &, class std::shared_ptr<std::string>, enum class DBHelpers::Category);
    /**
     * @hash   -1652886438
     * @vftbl  5
     * @symbol  ?deleteKey\@LevelStorageWriteBatch\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual void deleteKey(std::string const &, enum class DBHelpers::Category);
    /**
     * @hash   -845245548
     * @vftbl  6
     * @symbol  ?flush\@LevelStorageWriteBatch\@\@UEAAXAEAVLevelStorage\@\@\@Z
     */
    virtual void flush(class LevelStorage &);
    /**
     * @hash   125758173
     * @symbol  ??0LevelStorageWriteBatch\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI LevelStorageWriteBatch(class LevelStorageWriteBatch &&);
    /**
     * @hash   398574270
     * @symbol  ??0LevelStorageWriteBatch\@\@QEAA\@XZ
     */
    MCAPI LevelStorageWriteBatch();
    /**
     * @hash   -2008322516
     * @symbol  ?addFlushCallback\@LevelStorageWriteBatch\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void addFlushCallback(class std::function<void (void)>);
    /**
     * @hash   -1945583533
     * @symbol  ?clear\@LevelStorageWriteBatch\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @hash   2125896964
     * @symbol  ?erase\@LevelStorageWriteBatch\@\@QEAAXAEBV?$_Tree_const_iterator\@V?$_Tree_val\@U?$_Tree_simple_types\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UBatchEntry\@LevelStorageWriteBatch\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void erase(class std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<std::string const, struct LevelStorageWriteBatch::BatchEntry>>>> const &);
    /**
     * @hash   2620007
     * @symbol  ?find\@LevelStorageWriteBatch\@\@QEBA?AV?$_Tree_const_iterator\@V?$_Tree_val\@U?$_Tree_simple_types\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UBatchEntry\@LevelStorageWriteBatch\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI class std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<std::string const, struct LevelStorageWriteBatch::BatchEntry>>>> find(std::string const &) const;
    /**
     * @hash   -1557283935
     * @symbol  ?find\@LevelStorageWriteBatch\@\@QEAA?AV?$_Tree_iterator\@V?$_Tree_val\@U?$_Tree_simple_types\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UBatchEntry\@LevelStorageWriteBatch\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<std::string const, struct LevelStorageWriteBatch::BatchEntry>>>> find(std::string const &);

//private:
    /**
     * @hash   -356270846
     * @symbol  ?_writeKey\@LevelStorageWriteBatch\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$shared_ptr\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@3\@W4Category\@DBHelpers\@\@\@Z
     */
    MCAPI void _writeKey(std::string const &, class std::shared_ptr<std::string> &&, enum class DBHelpers::Category);

private:

};