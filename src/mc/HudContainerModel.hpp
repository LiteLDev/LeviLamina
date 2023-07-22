/**
 * @file  HudContainerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "ContainerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HudContainerModel.
 *
 */
class HudContainerModel : public ContainerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUDCONTAINERMODEL
public:
    class HudContainerModel& operator=(class HudContainerModel const &) = delete;
    HudContainerModel(class HudContainerModel const &) = delete;
    HudContainerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?containerContentChanged\@HudContainerModel\@\@UEAAXH\@Z
     */
    virtual void containerContentChanged(int);
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~HudContainerModel();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  ?getContainerWeakRef\@HudContainerModel\@\@UEBA?AVContainerWeakRef\@\@XZ
     */
    virtual class ContainerWeakRef getContainerWeakRef() const;
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  14
     * @symbol  ?isValid\@HudContainerModel\@\@UEAA_NXZ
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
     * @symbol  ?_getContainer\@HudContainerModel\@\@EEBAPEAVContainer\@\@XZ
     */
    virtual class Container * _getContainer() const;
    /**
     * @symbol  ??0HudContainerModel\@\@QEAA\@W4ContainerEnumName\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI HudContainerModel(enum class ContainerEnumName, class Player &);

//private:
    /**
     * @symbol  ?_refreshContainer\@HudContainerModel\@\@AEAAXXZ
     */
    MCAPI void _refreshContainer();

private:

};