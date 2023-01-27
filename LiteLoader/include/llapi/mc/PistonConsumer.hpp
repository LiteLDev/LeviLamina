/**
 * @file  PistonConsumer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../ConsumerComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PistonConsumer.
 *
 */
class PistonConsumer : public ConsumerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PISTONCONSUMER
public:
    class PistonConsumer& operator=(class PistonConsumer const &) = delete;
    PistonConsumer(class PistonConsumer const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PistonConsumer();
    /**
     * @hash   -393186331
     * @vftbl  6
     * @symbol  ?canConsumePowerAnyDirection\@PistonConsumer\@\@UEBA_NXZ
     */
    virtual bool canConsumePowerAnyDirection() const;
    /**
     * @hash   -1997692163
     * @vftbl  11
     * @symbol  ?addSource\@PistonConsumer\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @hash   -1595974017
     * @vftbl  12
     * @symbol  ?allowConnection\@PistonConsumer\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @vftbl  17
     * @symbol  __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  20
     * @symbol  __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @hash   -1928852969
     * @vftbl  23
     * @symbol  ?getCircuitComponentType\@PistonConsumer\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @hash   -785253621
     * @symbol  ??0PistonConsumer\@\@QEAA\@XZ
     */
    MCAPI PistonConsumer();
    /**
     * @hash   -6837671
     * @symbol  ?setBlockPowerFace\@PistonConsumer\@\@QEAAXE\@Z
     */
    MCAPI void setBlockPowerFace(unsigned char);

};