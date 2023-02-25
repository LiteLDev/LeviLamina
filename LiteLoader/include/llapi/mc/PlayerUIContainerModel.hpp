/**
 * @file  PlayerUIContainerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "PlayerUIContainerModelBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerUIContainerModel.
 *
 */
class PlayerUIContainerModel : public PlayerUIContainerModelBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERUICONTAINERMODEL
public:
    class PlayerUIContainerModel& operator=(class PlayerUIContainerModel const &) = delete;
    PlayerUIContainerModel(class PlayerUIContainerModel const &) = delete;
    PlayerUIContainerModel() = delete;
#endif

public:
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~PlayerUIContainerModel();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  15
     * @symbol  __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @symbol  __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  19
     * @symbol  __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  21
     * @symbol  ?_getContainerOffset\@PlayerUIContainerModel\@\@MEBAHXZ
     */
    virtual int _getContainerOffset() const;
    /**
     * @symbol  ??0PlayerUIContainerModel\@\@QEAA\@W4ContainerEnumName\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI PlayerUIContainerModel(enum class ContainerEnumName, class Player &);

};