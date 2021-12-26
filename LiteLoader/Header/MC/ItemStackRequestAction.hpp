// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemStackRequestAction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTION
public:
    class ItemStackRequestAction& operator=(class ItemStackRequestAction const&) = delete;
    ItemStackRequestAction(class ItemStackRequestAction const&) = delete;
    ItemStackRequestAction() = delete;
#endif

public:
    /*0*/ virtual ~ItemStackRequestAction();
    /*1*/ virtual class ItemStackRequestActionCraftBase const* getCraftAction() const;
    /*2*/ virtual int getFilteredStringIndex() const;
    /*3*/ virtual void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette&, bool);
    /*4*/ virtual void __unk_vfn_0() = 0;
    /*5*/ virtual void __unk_vfn_1() = 0;
    /*
    inline  ~ItemStackRequestAction(){
         (ItemStackRequestAction::*rv)();
        *((void**)&rv) = dlsym("??1ItemStackRequestAction@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ItemStackRequestAction(enum ItemStackRequestActionType);
    MCAPI enum ItemStackRequestActionType getActionType() const;
    MCAPI static std::string const getActionTypeName(enum ItemStackRequestActionType);
    MCAPI static std::unique_ptr<class ItemStackRequestAction> read(class ReadOnlyBinaryStream&);

protected:

private:
    MCAPI static class BidirectionalUnorderedMap<enum ItemStackRequestActionType, std::string > const actionTypeMap;

};