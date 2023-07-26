#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/ContainerModel.h"

class HudContainerModel : public ::ContainerModel {

public:
    // prevent constructor by default
    HudContainerModel& operator=(HudContainerModel const&) = delete;
    HudContainerModel(HudContainerModel const&)            = delete;
    HudContainerModel()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?containerContentChanged\@HudContainerModel\@\@UEAAXH\@Z
     */
    virtual void containerContentChanged(int); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getContainerWeakRef\@HudContainerModel\@\@UEBA?AVContainerWeakRef\@\@XZ
     */
    virtual class ContainerWeakRef getContainerWeakRef() const; // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?isValid\@HudContainerModel\@\@UEAA_NXZ
     */
    virtual bool isValid(); // NOLINT
    /**
     * @vftbl 15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15(); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19(); // NOLINT
    /**
     * @vftbl 20
     * @symbol ?_getContainer\@HudContainerModel\@\@EEBAPEAVContainer\@\@XZ
     */
    virtual class Container* _getContainer() const; // NOLINT

    // private:
    /**
     * @symbol ?_refreshContainer\@HudContainerModel\@\@AEAAXXZ
     */
    MCAPI void _refreshContainer(); // NOLINT

private:
};
