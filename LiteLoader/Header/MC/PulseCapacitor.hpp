// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PulseCapacitor : public ProducerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PULSECAPACITOR
public:
    class PulseCapacitor& operator=(class PulseCapacitor const &) = delete;
    PulseCapacitor(class PulseCapacitor const &) = delete;
#endif

public:
    /*0*/ virtual ~PulseCapacitor();
    /*1*/ virtual int getStrength() const;
    /*3*/ virtual void setStrength(int);
    /*6*/ virtual bool canConsumePowerAnyDirection() const;
    /*7*/ virtual bool canConsumerPower() const;
    /*12*/ virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /*14*/ virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /*17*/ virtual void __unk_vfn_17();
    /*20*/ virtual void __unk_vfn_20();
    /*22*/ virtual enum CircuitComponentType getCircuitComponentType() const;
    /*24*/ virtual unsigned char getPoweroutDirection() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PULSECAPACITOR
public:
#endif
    MCAPI PulseCapacitor();



};