/**
 * @file  BaseRailTransporter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseCircuitComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BaseRailTransporter.
 *
 */
class BaseRailTransporter : public BaseCircuitComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASERAILTRANSPORTER
public:
    class BaseRailTransporter& operator=(class BaseRailTransporter const &) = delete;
    BaseRailTransporter(class BaseRailTransporter const &) = delete;
    BaseRailTransporter() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BaseRailTransporter();
    /**
     * @hash   -1597169559
     * @vftbl  11
     * @symbol ?addSource@BaseRailTransporter@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @hash   1547728979
     * @vftbl  12
     * @symbol ?allowConnection@BaseRailTransporter@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @hash   664635461
     * @vftbl  14
     * @symbol ?evaluate@BaseRailTransporter@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @vftbl  17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @hash   176231475
     * @vftbl  22
     * @symbol ?getCircuitComponentType@BaseRailTransporter@@UEBA?AW4CircuitComponentType@@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;

};