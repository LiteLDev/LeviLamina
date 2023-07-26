#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"

class HideGoal : public ::MoveToPOIGoal {

public:
    // prevent constructor by default
    HideGoal& operator=(HideGoal const&) = delete;
    HideGoal(HideGoal const&)            = delete;
    HideGoal()                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@HideGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@HideGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@HideGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@HideGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@HideGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?_getRepathTime\@HideGoal\@\@MEBA_KXZ
     */
    virtual unsigned __int64 _getRepathTime() const; // NOLINT
    /**
     * @vftbl 17
     * @symbol ?_getOwnedPOI\@HideGoal\@\@MEBA?AV?$weak_ptr\@VPOIInstance\@\@\@std\@\@W4POIType\@\@\@Z
     */
    virtual class std::weak_ptr<class POIInstance> _getOwnedPOI(enum class POIType) const; // NOLINT
    /**
     * @symbol ??0HideGoal\@\@QEAA\@AEAVMob\@\@MMMW4POIType\@\@\@Z
     */
    MCAPI HideGoal(class Mob&, float, float, float, enum class POIType); // NOLINT
};
