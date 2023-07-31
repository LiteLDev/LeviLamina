#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/PlayerUIContainerModelBase.h"

class PlayerUIContainerModel : public ::PlayerUIContainerModelBase {

public:
    // prevent constructor by default
    PlayerUIContainerModel& operator=(PlayerUIContainerModel const&) = delete;
    PlayerUIContainerModel(PlayerUIContainerModel const&)            = delete;
    PlayerUIContainerModel()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl 21
     * @symbol ?_getContainerOffset\@PlayerUIContainerModel\@\@MEBAHXZ
     */
    virtual int _getContainerOffset() const;
    /**
     * @symbol ??0PlayerUIContainerModel\@\@QEAA\@W4ContainerEnumName\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI PlayerUIContainerModel(enum class ContainerEnumName, class Player&);
    // NOLINTEND
};
