// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SimpleContainer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PlayerUIContainer : public SimpleContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERUICONTAINER
public:
    class PlayerUIContainer& operator=(class PlayerUIContainer const &) = delete;
    PlayerUIContainer(class PlayerUIContainer const &) = delete;
    PlayerUIContainer() = delete;
#endif

public:
    /*0*/ virtual ~PlayerUIContainer();
    /*22*/ virtual void __unk_vfn_22();
    /*23*/ virtual void __unk_vfn_23();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERUICONTAINER
public:
#endif
    MCAPI PlayerUIContainer(std::string const &, bool, int);
    MCAPI void load(class ListTag const &, class SemVersion const &);
    MCAPI std::unique_ptr<class ListTag> save();



};