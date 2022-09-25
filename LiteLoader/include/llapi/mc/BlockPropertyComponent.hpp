/**
 * @file  BlockPropertyComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockPropertyComponent.
 *
 */
struct BlockPropertyComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPROPERTYCOMPONENT
public:
    struct BlockPropertyComponent& operator=(struct BlockPropertyComponent const &) = delete;
    BlockPropertyComponent(struct BlockPropertyComponent const &) = delete;
    BlockPropertyComponent() = delete;
#endif

public:
    /**
     * @hash   1673828693
     * @symbol ?getProperty@BlockPropertyComponent@@QEBA_NW4BlockProperty@@@Z
     */
    MCAPI bool getProperty(enum BlockProperty) const;
    /**
     * @hash   -1603312931
     * @symbol ?hasProperty@BlockPropertyComponent@@QEBA_NW4BlockProperty@@@Z
     */
    MCAPI bool hasProperty(enum BlockProperty) const;

};