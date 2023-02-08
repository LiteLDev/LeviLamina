/**
 * @file  ItemGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1702339197
     * @symbol  ??0ItemGroup\@\@QEAA\@AEBVItemInstance\@\@\@Z
     */
    MCAPI ItemGroup(class ItemInstance const &);
    /**
     * @hash   -387167082
     * @symbol  ?isEmpty\@ItemGroup\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @hash   191621804
     * @symbol  ??4ItemGroup\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ItemGroup & operator=(class ItemGroup &&);
    /**
     * @hash   -552760312
     * @symbol  ??1ItemGroup\@\@QEAA\@XZ
     */
    MCAPI ~ItemGroup();

};