// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OnUseItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONUSEITEMCOMPONENT
public:
    class OnUseItemComponent& operator=(class OnUseItemComponent const &) = delete;
    OnUseItemComponent(class OnUseItemComponent const &) = delete;
    OnUseItemComponent() = delete;
#endif

public:
    /*0*/ virtual ~OnUseItemComponent();
    /*1*/ virtual bool isNetworkComponent() const;
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONUSEITEMCOMPONENT
public:
#endif
    MCAPI OnUseItemComponent(class ComponentItem *);
    MCAPI static void bindType();
    MCAPI static class HashedString const & getIdentifier();



};