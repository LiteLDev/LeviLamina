// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "ChemistryStickItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SparklerItem : public ChemistryStickItem {

#define AFTER_EXTRA
// Add Member There
public:
struct ColorInfo {
    ColorInfo() = delete;
    ColorInfo(ColorInfo const&) = delete;
    ColorInfo(ColorInfo const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPARKLERITEM
public:
    class SparklerItem& operator=(class SparklerItem const &) = delete;
    SparklerItem(class SparklerItem const &) = delete;
    SparklerItem() = delete;
#endif

public:
    /*0*/ virtual ~SparklerItem();
    /*5*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*45*/ virtual bool isHandEquipped() const;
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*62*/ virtual void __unk_vfn_62();
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*71*/ virtual void __unk_vfn_71();
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*91*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*97*/ virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /*113*/ virtual struct Brightness getLightEmission(int) const;
    /*114*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*116*/ virtual class Item & setIcon(std::string const &, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPARKLERITEM
public:
#endif
    MCAPI SparklerItem(std::string const &, int);
    MCAPI static struct SparklerItem::ColorInfo const COLORS[];
    MCAPI static int const MAX_ACTIVE_TICKS;



};