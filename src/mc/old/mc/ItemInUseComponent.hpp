/**
 * @file  ItemInUseComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ItemInUseComponent.
 *
 */
struct ItemInUseComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMINUSECOMPONENT
public:
    struct ItemInUseComponent& operator=(struct ItemInUseComponent const &) = delete;
    ItemInUseComponent(struct ItemInUseComponent const &) = delete;
    ItemInUseComponent() = delete;
#endif

public:
    /**
     * @symbol  ??4ItemInUseComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct ItemInUseComponent & operator=(struct ItemInUseComponent &&);
    /**
     * @symbol  ??1ItemInUseComponent\@\@QEAA\@XZ
     */
    MCAPI ~ItemInUseComponent();

};