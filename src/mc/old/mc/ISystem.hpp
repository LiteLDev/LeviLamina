/**
 * @file  ISystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure ISystem.
 *
 */
struct ISystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISYSTEM
public:
    struct ISystem& operator=(struct ISystem const &) = delete;
    ISystem(struct ISystem const &) = delete;
    ISystem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ISYSTEM
    /**
     * @symbol  ?registerEvents\@ISystem\@\@UEAAXAEAV?$basic_dispatcher\@V?$allocator\@X\@std\@\@\@entt\@\@\@Z
     */
    MCVAPI void registerEvents(class entt::basic_dispatcher<class std::allocator<void>> &);
#endif

};