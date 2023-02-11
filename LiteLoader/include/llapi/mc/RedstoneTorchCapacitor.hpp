/**
 * @file  RedstoneTorchCapacitor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RedstoneTorchCapacitor.
 *
 */
class RedstoneTorchCapacitor : public ProducerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REDSTONETORCHCAPACITOR
public:
    class RedstoneTorchCapacitor& operator=(class RedstoneTorchCapacitor const &) = delete;
    RedstoneTorchCapacitor(class RedstoneTorchCapacitor const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RedstoneTorchCapacitor();
    /**
     * @hash   -2141877224
     * @vftbl  1
     * @symbol  ?getStrength\@RedstoneTorchCapacitor\@\@UEBAHXZ
     */
    virtual int getStrength() const;
    /**
     * @hash   1747723436
     * @vftbl  10
     * @symbol  ?removeSource\@RedstoneTorchCapacitor\@\@UEAA_NAEBVBlockPos\@\@PEBVBaseCircuitComponent\@\@\@Z
     */
    virtual bool removeSource(class BlockPos const &, class BaseCircuitComponent const *);
    /**
     * @hash   -618334126
     * @vftbl  11
     * @symbol  ?addSource\@RedstoneTorchCapacitor\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @hash   -121444886
     * @vftbl  12
     * @symbol  ?allowConnection\@RedstoneTorchCapacitor\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @hash   -1097184354
     * @vftbl  14
     * @symbol  ?evaluate\@RedstoneTorchCapacitor\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   248642151
     * @vftbl  15
     * @symbol  ?cacheValues\@RedstoneTorchCapacitor\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   -411878326
     * @vftbl  16
     * @symbol  ?updateDependencies\@RedstoneTorchCapacitor\@\@EEAAXAEAVCircuitSceneGraph\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void updateDependencies(class CircuitSceneGraph &, class BlockPos const &);
    /**
     * @vftbl  17
     * @symbol  __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @hash   1495172026
     * @vftbl  18
     * @symbol  ?isHalfPulse\@RedstoneTorchCapacitor\@\@UEBA_NXZ
     */
    virtual bool isHalfPulse() const;
    /**
     * @vftbl  20
     * @symbol  __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @hash   140170524
     * @vftbl  23
     * @symbol  ?getCircuitComponentType\@RedstoneTorchCapacitor\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @hash   1082029199
     * @vftbl  25
     * @symbol  ?getPoweroutDirection\@RedstoneTorchCapacitor\@\@UEBAEXZ
     */
    virtual unsigned char getPoweroutDirection() const;
    /**
     * @hash   -720087354
     * @symbol  ??0RedstoneTorchCapacitor\@\@QEAA\@XZ
     */
    MCAPI RedstoneTorchCapacitor();
    /**
     * @hash   181646419
     * @symbol  ?resetBurnOutCount\@RedstoneTorchCapacitor\@\@QEAAXXZ
     */
    MCAPI void resetBurnOutCount();
    /**
     * @hash   -80757058
     * @symbol  ?setOn\@RedstoneTorchCapacitor\@\@QEAAX_N\@Z
     */
    MCAPI void setOn(bool);

//private:
    /**
     * @hash   1828752058
     * @symbol  ?FindStrongestStrength\@RedstoneTorchCapacitor\@\@AEAAHAEBVBlockPos\@\@AEAVCircuitSystem\@\@AEA_N\@Z
     */
    MCAPI int FindStrongestStrength(class BlockPos const &, class CircuitSystem &, bool &);

private:

};