// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemStackRequestActionCraftLoom {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTLOOM
public:
    class ItemStackRequestActionCraftLoom& operator=(class ItemStackRequestActionCraftLoom const &) = delete;
    ItemStackRequestActionCraftLoom(class ItemStackRequestActionCraftLoom const &) = delete;
#endif

public:
    /*0*/ virtual ~ItemStackRequestActionCraftLoom();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void _write(class BinaryStream &) const;
    /*5*/ virtual bool _read(class ReadOnlyBinaryStream &);
    MCAPI ItemStackRequestActionCraftLoom();
    MCAPI std::string const & getPatternNameId() const;

protected:

private:

};