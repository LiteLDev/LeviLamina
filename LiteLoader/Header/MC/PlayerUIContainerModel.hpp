// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PlayerUIContainerModelBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

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
    /*1*/ virtual ~PlayerUIContainerModel();
    /*6*/ virtual void __unk_vfn_6();
    /*12*/ virtual void __unk_vfn_12();
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual void __unk_vfn_16();
    /*19*/ virtual void __unk_vfn_19();
    /*21*/ virtual int _getContainerOffset() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERUICONTAINERMODEL
public:
#endif
    MCAPI PlayerUIContainerModel(enum ContainerEnumName, class Player &);



};