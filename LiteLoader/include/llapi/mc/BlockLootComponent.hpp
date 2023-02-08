/**
 * @file  BlockLootComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct BlockLootComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLOOTCOMPONENT
public:
    struct BlockLootComponent& operator=(struct BlockLootComponent const &) = delete;
    BlockLootComponent(struct BlockLootComponent const &) = delete;
#endif

public:
    /**
     * @symbol  ??0BlockLootComponent\@\@QEAA\@XZ
     */
    MCAPI BlockLootComponent();
    /**
     * @symbol  ?getLootTable\@BlockLootComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getLootTable() const;

};