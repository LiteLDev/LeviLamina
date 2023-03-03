/**
 * @file  PlayerUIContainerModelBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ContainerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerUIContainerModelBase.
 *
 */
class PlayerUIContainerModelBase : public ContainerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERUICONTAINERMODELBASE
public:
    class PlayerUIContainerModelBase& operator=(class PlayerUIContainerModelBase const &) = delete;
    PlayerUIContainerModelBase(class PlayerUIContainerModelBase const &) = delete;
    PlayerUIContainerModelBase() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?containerContentChanged\@PlayerUIContainerModelBase\@\@UEAAXH\@Z
     */
    virtual void containerContentChanged(int);
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~PlayerUIContainerModelBase();
    /**
     * @vftbl  2
     * @symbol  ?postInit\@PlayerUIContainerModelBase\@\@UEAAXXZ
     */
    virtual void postInit();
    /**
     * @vftbl  3
     * @symbol  ?releaseResources\@PlayerUIContainerModelBase\@\@UEAAXXZ
     */
    virtual void releaseResources();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  ?getContainerWeakRef\@PlayerUIContainerModelBase\@\@UEBA?AVContainerWeakRef\@\@XZ
     */
    virtual class ContainerWeakRef getContainerWeakRef() const;
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  14
     * @symbol  ?isValid\@PlayerUIContainerModelBase\@\@UEAA_NXZ
     */
    virtual bool isValid();
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
     * @vftbl  20
     * @symbol  ?_getContainer\@PlayerUIContainerModelBase\@\@MEBAPEAVContainer\@\@XZ
     */
    virtual class Container * _getContainer() const;
    /**
     * @vftbl  21
     * @symbol  ?_getContainerOffset\@PlayerUIContainerModelBase\@\@MEBAHXZ
     */
    virtual int _getContainerOffset() const;
    /**
     * @vftbl  22
     * @symbol  ?_onItemChanged\@PlayerUIContainerModelBase\@\@MEAAXHAEBVItemStack\@\@0\@Z
     */
    virtual void _onItemChanged(int, class ItemStack const &, class ItemStack const &);
    /**
     * @symbol  ??0PlayerUIContainerModelBase\@\@QEAA\@W4ContainerEnumName\@\@AEAVPlayer\@\@HW4ContainerCategory\@\@\@Z
     */
    MCAPI PlayerUIContainerModelBase(enum class ContainerEnumName, class Player &, int, enum class ContainerCategory);

//protected:
    /**
     * @symbol  ?_refreshContainer\@PlayerUIContainerModelBase\@\@IEAAX_N\@Z
     */
    MCAPI void _refreshContainer(bool);

protected:

};