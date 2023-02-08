/**
 * @file  DwellerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DwellerSystem.
 *
 */
class DwellerSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DWELLERSYSTEM
public:
    class DwellerSystem& operator=(class DwellerSystem const &) = delete;
    DwellerSystem(class DwellerSystem const &) = delete;
    DwellerSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DwellerSystem();
    /**
     * @hash   -1841775910
     * @vftbl  1
     * @symbol  ?registerEvents\@DwellerSystem\@\@UEAAXAEAV?$basic_dispatcher\@V?$allocator\@X\@std\@\@\@entt\@\@\@Z
     */
    virtual void registerEvents(class entt::basic_dispatcher<class std::allocator<void>> &);
    /**
     * @hash   -287876226
     * @vftbl  2
     * @symbol  ?tick\@DwellerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

};