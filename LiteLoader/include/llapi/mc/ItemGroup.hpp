/**
 * @file  ItemGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemGroup.
 *
 */
class ItemGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMGROUP
public:
    class ItemGroup& operator=(class ItemGroup const &) = delete;
    ItemGroup(class ItemGroup const &) = delete;
    ItemGroup() = delete;
#endif

public:
    /**
     * @hash   987478205
     * @symbol ??0ItemGroup@@QEAA@AEBVItemInstance@@@Z
     */
    MCAPI ItemGroup(class ItemInstance const &);
    /**
     * @hash   -1102028074
     * @symbol ?isEmpty@ItemGroup@@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @hash   874100940
     * @symbol ??4ItemGroup@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class ItemGroup & operator=(class ItemGroup &&);
    /**
     * @hash   -756384680
     * @symbol ??1ItemGroup@@QEAA@XZ
     */
    MCAPI ~ItemGroup();

};