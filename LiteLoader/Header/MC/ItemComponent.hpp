// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMCOMPONENT
public:
    class ItemComponent& operator=(class ItemComponent const&) = delete;
    ItemComponent(class ItemComponent const&) = delete;
    ItemComponent() = delete;
#endif

public:
    /*0*/ virtual ~ItemComponent();
    /*1*/ virtual bool checkComponentDataForContentErrors() const;
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void __unk_vfn_2();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void __unk_vfn_3();
    /*
    inline bool isNetworkComponent() const{
        bool (ItemComponent::*rv)() const;
        *((void**)&rv) = dlsym("?isNetworkComponent@ItemComponent@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool useOn(class ItemStack& a0, class Actor& a1, class BlockPos const& a2, unsigned char a3, class Vec3 const& a4) const{
        bool (ItemComponent::*rv)(class ItemStack&, class Actor&, class BlockPos const&, unsigned char, class Vec3 const&) const;
        *((void**)&rv) = dlsym("?useOn@ItemComponent@@UEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z");
        return (this->*rv)(std::forward<class ItemStack&>(a0), std::forward<class Actor&>(a1), std::forward<class BlockPos const&>(a2), std::forward<unsigned char>(a3), std::forward<class Vec3 const&>(a4));
    }
    inline void initializeFromNetwork(class CompoundTag const& a0){
        void (ItemComponent::*rv)(class CompoundTag const&);
        *((void**)&rv) = dlsym("?initializeFromNetwork@ItemComponent@@UEAAXAEBVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const&>(a0));
    }
    inline void writeSettings(){
        void (ItemComponent::*rv)();
        *((void**)&rv) = dlsym("?writeSettings@ItemComponent@@UEAAXXZ");
        return (this->*rv)();
    }
    inline  ~ItemComponent(){
         (ItemComponent::*rv)();
        *((void**)&rv) = dlsym("??1ItemComponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ItemComponent(class ComponentItem*);

protected:

private:

};