#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/d_b_helpers/Category.h"

class LevelStorageWriteBatch {
public:
    // LevelStorageWriteBatch inner types declare
    // clang-format off
    struct BatchEntry;
    // clang-format on

    // LevelStorageWriteBatch inner types define
    struct BatchEntry {
    public:
        // prevent constructor by default
        BatchEntry& operator=(BatchEntry const&);
        BatchEntry(BatchEntry const&);
        BatchEntry();

    public:
        // NOLINTBEGIN
        // symbol: ??1BatchEntry@LevelStorageWriteBatch@@QEAA@XZ
        MCAPI ~BatchEntry();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    LevelStorageWriteBatch& operator=(LevelStorageWriteBatch const&);
    LevelStorageWriteBatch(LevelStorageWriteBatch const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?putKey@LevelStorageWriteBatch@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@W4Category@DBHelpers@@@Z
    virtual void putKey(std::string const&, std::string_view, ::DBHelpers::Category);

    // vIndex: 2, symbol:
    // ?putKey@LevelStorageWriteBatch@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4Category@DBHelpers@@@Z
    virtual void putKey(std::string const&, std::string const&, ::DBHelpers::Category);

    // vIndex: 3, symbol:
    // ?putKey@LevelStorageWriteBatch@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV23@W4Category@DBHelpers@@@Z
    virtual void putKey(std::string const&, std::string&&, ::DBHelpers::Category);

    // vIndex: 4, symbol:
    // ?putKey@LevelStorageWriteBatch@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@3@W4Category@DBHelpers@@@Z
    virtual void putKey(std::string const&, std::shared_ptr<std::string>, ::DBHelpers::Category);

    // vIndex: 5, symbol:
    // ?deleteKey@LevelStorageWriteBatch@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Category@DBHelpers@@@Z
    virtual void deleteKey(std::string const&, ::DBHelpers::Category);

    // vIndex: 6, symbol: ?flush@LevelStorageWriteBatch@@UEAAXAEAVLevelStorage@@@Z
    virtual void flush(class LevelStorage&);

    // symbol: ??1LevelStorageWriteBatch@@UEAA@XZ
    MCVAPI ~LevelStorageWriteBatch();

    // symbol: ??0LevelStorageWriteBatch@@QEAA@XZ
    MCAPI LevelStorageWriteBatch();

    // symbol: ??0LevelStorageWriteBatch@@QEAA@$$QEAV0@@Z
    MCAPI LevelStorageWriteBatch(class LevelStorageWriteBatch&&);

    // symbol: ?addFlushCallback@LevelStorageWriteBatch@@QEAAXV?$function@$$A6AXXZ@std@@@Z
    MCAPI void addFlushCallback(std::function<void(void)>);

    // symbol: ?clear@LevelStorageWriteBatch@@QEAAXXZ
    MCAPI void clear();

    // symbol:
    // ?erase@LevelStorageWriteBatch@@QEAAXAEBV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UBatchEntry@LevelStorageWriteBatch@@@std@@@std@@@std@@@std@@@Z
    MCAPI void erase(std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<
                         std::pair<std::string const, struct LevelStorageWriteBatch::BatchEntry>>>> const&);

    // symbol:
    // ?find@LevelStorageWriteBatch@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UBatchEntry@LevelStorageWriteBatch@@@std@@@std@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::_Tree_const_iterator<std::_Tree_val<
        std::_Tree_simple_types<std::pair<std::string const, struct LevelStorageWriteBatch::BatchEntry>>>>
          find(std::string const&) const;

    // symbol:
    // ?find@LevelStorageWriteBatch@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UBatchEntry@LevelStorageWriteBatch@@@std@@@std@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::_Tree_iterator<std::_Tree_val<
        std::_Tree_simple_types<std::pair<std::string const, struct LevelStorageWriteBatch::BatchEntry>>>>
          find(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_writeKey@LevelStorageWriteBatch@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$shared_ptr@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@3@W4Category@DBHelpers@@@Z
    MCAPI void _writeKey(std::string const&, std::shared_ptr<std::string>&&, ::DBHelpers::Category);

    // NOLINTEND
};
