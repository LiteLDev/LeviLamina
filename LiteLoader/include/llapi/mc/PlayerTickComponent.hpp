/**
 * @file  PlayerTickComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure PlayerTickComponent.
 *
 */
struct PlayerTickComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERTICKCOMPONENT
public:
    struct PlayerTickComponent& operator=(struct PlayerTickComponent const &) = delete;
    PlayerTickComponent(struct PlayerTickComponent const &) = delete;
    PlayerTickComponent() = delete;
#endif

public:
    /**
     * @hash   -1024909116
     * @symbol  ??0PlayerTickComponent\@\@QEAA\@V?$unique_ptr\@UIPlayerTickPolicy\@\@U?$default_delete\@UIPlayerTickPolicy\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI PlayerTickComponent(std::unique_ptr<struct IPlayerTickPolicy>);
    /**
     * @hash   -1907526923
     * @symbol  ??0PlayerTickComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI PlayerTickComponent(struct PlayerTickComponent &&);
    /**
     * @hash   -2018938722
     * @symbol  ??4PlayerTickComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct PlayerTickComponent & operator=(struct PlayerTickComponent &&);
    /**
     * @hash   -1143519013
     * @symbol  ??1PlayerTickComponent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerTickComponent();

};