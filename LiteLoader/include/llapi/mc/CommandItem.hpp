/**
 * @file  MC/CommandItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandItem.
 *
 */
class CommandItem {

#define AFTER_EXTRA
// Add Member There
    short unk0; //0
    bool unk2;  //2
    int itemId; //4

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDITEM
public:
    class CommandItem& operator=(class CommandItem const &) = delete;
    CommandItem(class CommandItem const &) = delete;
#endif

public:
    /**
     * @hash   818119610
     * @symbol ??0CommandItem@@QEAA@XZ
     */
    MCAPI CommandItem();
    /**
     * @hash   -1530790894
     * @symbol ??0CommandItem@@QEAA@HF_N@Z
     */
    MCAPI CommandItem(int, short, bool);
    /**
     * @hash   1724311790
     * @symbol ??0CommandItem@@QEAA@_K@Z
     */
    MCAPI CommandItem(unsigned __int64);
    /**
     * @hash   1060351318
     * @symbol ?createInstance@CommandItem@@QEBA?AV?$optional@VItemInstance@@@std@@HHPEAVCommandOutput@@_N@Z
     */
    MCAPI class std::optional<class ItemInstance> createInstance(int, int, class CommandOutput *, bool) const;
    /**
     * @hash   -693551734
     * @symbol ?getId@CommandItem@@QEBAHXZ
     */
    MCAPI int getId() const;
    /**
     * @hash   437906392
     * @symbol ??BCommandItem@@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @hash   -501584869
     * @symbol ??BCommandItem@@QEBA_KXZ
     */
    MCAPI operator unsigned __int64() const;

};